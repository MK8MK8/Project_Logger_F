
#include <iostream>
#include <string>

#include "../headers/Class_TCP.hpp"
#include "../headers/ClientSocket.h"
#include "../headers/SocketException.h"

using namespace std;

void TCP::Error() {
   
  //Client Socket Initiation
  
   try {

   ClientSocket client_socket ( "localhost", 30000 );

   std::string reply;

   try {
	 
   client_socket << "\033[1;31m ERROR \033[0m\n";
   client_socket >> reply;
	   }
      
   catch ( SocketException& ) {}

   std::cout << "We received this response from the server:\n\"" << reply << "\"\n";

       }
  
   catch ( SocketException& e ) {
      
   std::cout << "Exception was caught:" << e.description() << "\n";
    
    }
  
   
}

void TCP::Warning() {
  
  //Client Socket Initiation
  
   try {

   ClientSocket client_socket ( "localhost", 30000 );

   std::string reply;

   try {
	 
   client_socket << "\033[1;31m WARNING \033[0m\n";
   client_socket >> reply;
	   }
      
   catch ( SocketException& ) {}

   std::cout << "We received this response from the server:\n\"" << reply << "\"\n";

       }
  
   catch ( SocketException& e ) {
      
   std::cout << "Exception was caught:" << e.description() << "\n";
    
    }
  
   
} 
   


void TCP::Verbosity() {
  
  //Client Socket Initiation
  
   try {

   ClientSocket client_socket ( "localhost", 30000 );

   std::string reply;

   try {
	 
   client_socket << "\033[1;31m VERBOSITY \033[0m\n";
   client_socket >> reply;
	   }
      
   catch ( SocketException& ) {}

   std::cout << "We received this response from the server:\n\"" << reply << "\"\n";

       }
  
   catch ( SocketException& e ) {
      
   std::cout << "Exception was caught:" << e.description() << "\n";
    
    }
  
   
}	



	
	
   	
 
 
