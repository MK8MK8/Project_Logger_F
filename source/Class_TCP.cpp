
// Implementation of the TCP class's methods

#include <iostream>
#include <string>

#include "../headers/Class_TCP.hpp"
#include "../headers/ClientSocket.h"
#include "../headers/SocketException.h"
#include "../headers/CurrentDateTime.hpp"

using namespace std;

//Implementation of the Error method

void TCP::Error() {
   
  //Client Socket Initiation
  
   try {

   ClientSocket client_socket ( "localhost", 30000 );

   std::string reply;

   try {
	 
   client_socket << currentDateTime() << ":" << "\033[1;31m ERROR (message..) \033[0m\n";
   
   //client_socket >> reply;
	   }
      
   catch ( SocketException& ) {}

   //std::cout << "We received this response from the server:\n\"" << reply << "\"\n";

       }
  
   catch ( SocketException& e ) {
      
   std::cout << "Exception was caught:" << e.description() << "\n";
    
    }
  
   
}

//Implementation of the Warning method

void TCP::Warning() {
  
  //Client Socket Initiation
  
   try {

   ClientSocket client_socket ( "localhost", 30000 );

   std::string reply;

   try {
	 
   client_socket << currentDateTime() << ":" << "\033[1;33m WARNING (message..) \033[0m\n";
   //client_socket >> reply;
	   }
      
   catch ( SocketException& ) {}

   //std::cout << "We received this response from the server:\n\"" << reply << "\"\n";

       }
  
   catch ( SocketException& e ) {
      
   std::cout << "Exception was caught:" << e.description() << "\n";
    
    }
  
   
} 
   
//Implementation of the Verbosity method

void TCP::Verbosity() {
  
  //Client Socket Initiation
  
   try {

   ClientSocket client_socket ( "localhost", 30000 );

   std::string reply;

   try {
	 
   client_socket << currentDateTime() << ":" << "\033[1;32m VERBOSITY (message..) \033[0m\n";
   //client_socket >> reply;
	   }
      
   catch ( SocketException& ) {}

   //std::cout << "We received this response from the server:\n\"" << reply << "\"\n";

       }
  
   catch ( SocketException& e ) {
      
   std::cout << "Exception was caught:" << e.description() << "\n";
    
    }
  
   
}	



	
	
   	
 
 
