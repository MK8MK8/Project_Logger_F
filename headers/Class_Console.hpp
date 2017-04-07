
//Class_Console Definition

#ifndef CLASS_Console_HPP
#define	CLASS_Console_HPP

#include <iostream>
#include <string>

#include "Class_Log.hpp"

using namespace std;

// Class child Console inherited from the base class Log. It contains the three methods of the base class (Error, Warning and Verbosity methods) 

class Console:public Log {

public:

   void Error();
   void Warning();
   void Verbosity();

};

#endif
