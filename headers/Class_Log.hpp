//Class_log Definition

#ifndef CLASS_LOG_HPP
#define	CLASS_LOG_HPP

#include <iostream>
#include <string>

using namespace std;

class Log {

public:
   virtual void Error();
   virtual void Warning();
   virtual void Verbosity();

};

#endif
