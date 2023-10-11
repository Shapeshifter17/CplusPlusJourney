#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <cstring>


int main(int argc, char const *argv[])
{
    //Create a socket
    int serverSocket = socket(AF_INET,SOCK_STREAM,0);

    if (serverSocket == -1)
    {
        std::cerr << "Cannot create Socket";
        return -1;  
    }
    
    //Bind the socket to IP/Port
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    inet_pton(AF_INET, "0.0.0.0", &serverAddress.sin_addr);
    //127.0.0.1 converting string to number

    if(bind(serverSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress)) == -1){
        std::cerr << "Cannot bind to port";
        return -2;
    }

    //Mark the socket of serverSocket for listening
    if (listen(serverSocket, SOMAXCONN) == -1)
    {
        std::cerr << "cannot listen!";
        return -3;
    }
    
    //Accept call
    sockaddr_in client;
    socklen_t clientsize = sizeof(client);

    //client's remote name
    char host[NI_MAXHOST];
    char service[NI_MAXSERV];

    int clientSocket = accept(serverSocket,
                             (sockaddr*) &client,
                             &clientsize);

    if (clientSocket == -1)
    {
        std::cerr << "Problem with client connecting";
        return -4;
    }

    memset(host, 0, NI_MAXHOST);
    memset(service,0 , NI_MAXSERV);

    int result = getnameinfo((sockaddr*)& client,
                    sizeof(client),
                    host,
                    NI_MAXHOST,
                    service,
                    NI_MAXSERV,0);

    if(result){

        std::cout << host << "Connected on " << service << std::endl;
    }
    else
    {
        inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
        std::cout << host << " connected on " << ntohs(client.sin_port) << std::endl;
    }


    char buffer[4096];
    while(true){

            //clear buffer
            memset(buffer, 0 ,4096);
            //wait for message
            int bytesRecv = recv(clientSocket, buffer, 4096, 0);
            if (bytesRecv == -1)
            {
                std::cerr << "connection issue" << std::endl;
                break;
            }
            if (bytesRecv == 0){
                std::cout << "The client disconnected" << std::endl;
                break;
            }

            //display message
            std::cout << "Received: " << std::string(buffer,0,bytesRecv) << std::endl;

            //resend message
            send(clientSocket, buffer, bytesRecv + 1, 0);
            
    }

    close(serverSocket);
    close(clientSocket);
    
    return 0;
}
