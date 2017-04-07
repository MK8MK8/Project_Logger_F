
//Class_Console Definition

#ifndef CLASS_Console_HPP
#define	CLASS_Console_HPP

#include <iostream>
#include <string>

#include "Class_Log.hpp"

using namespace std;

class Console:public Log {

public:

   void Error();
   void Warning();
   void Verbosity();

};

#endif
