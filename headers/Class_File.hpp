
//Class_File Definition

#ifndef CLASS_File_HPP
#define	CLASS_File_HPP

#include <iostream>
#include <string>

#include "Class_Log.hpp"

using namespace std;

class File:public Log {

public:

   void Error();
   void Warning();
   void Verbosity();
   	
};

#endif
