
// Implementation of the ServerSocket class's methods

#include "../headers/ServerSocket.h"
#include "../headers/SocketException.h"

//Implementation of the ServerSocket's constructor method

ServerSocket::ServerSocket ( int port ) {
	
   if ( ! Socket::create() ) {
	   
   throw SocketException ( "Could not create server socket." );
   
   }

   if ( ! Socket::bind ( port ) ) {
	   
   throw SocketException ( "Could not bind to port." );
   
   }

   if ( ! Socket::listen() ) {
	   
   throw SocketException ( "Could not listen to socket." );
   
   }

}

//Implementation of the ServerSocket's destructor method

ServerSocket::~ServerSocket() {

   }


const ServerSocket& ServerSocket::operator << ( const std::string& s ) const {
	
   if ( ! Socket::send ( s ) ) {
	   
   throw SocketException ( "Could not write to socket." );
   
   }

  return *this;

}


const ServerSocket& ServerSocket::operator >> ( std::string& s ) const {
	
   if ( ! Socket::recv ( s ) ) {
	   
   throw SocketException ( "Could not read from socket." );
    
   }

   return *this;
}

//Implementation of the ServerSocket's accept method


void ServerSocket::accept ( ServerSocket& sock ) {
	
   if ( ! Socket::accept ( sock ) ) {
	   
   throw SocketException ( "Could not accept socket." );
   
   }
}
