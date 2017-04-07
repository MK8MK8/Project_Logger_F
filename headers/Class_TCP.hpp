//Class_TCP Definition

#ifndef CLASS_TCPHPP
#define	CLASS_TCP_HPP

#include <iostream>
#include <string>

#include "Socket.h"
#include "ClientSocket.h"
#include "ServerSocket.h"
#include "Class_Log.hpp"

using namespace std;

// Class child TCP inherited from the base class Log. It contains the three methods of the base class (Error, Warning and Verbosity methods) 

class TCP:public Log {

public:

   void Error();
   void Warning();
   void Verbosity();
	

};

#endif
