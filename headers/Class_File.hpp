
//Class_File Definition

#ifndef CLASS_File_HPP
#define	CLASS_File_HPP

#include <iostream>
#include <string>

#include "Class_Log.hpp"

using namespace std;

// Class child File inherited from the base class Log. It contains the three methods of the base class (Error, Warning and Verbosity methods) 

class File:public Log {

public:

   void Error();
   void Warning();
   void Verbosity();
   	
};

#endif
