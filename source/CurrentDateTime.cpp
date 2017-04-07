
// Implementation of the currentDateTime function

#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

#include "../headers/CurrentDateTime.hpp"


using namespace std;

const std::string currentDateTime() {
   
   time_t     now = time(0);
   struct tm  tstruct;
   char       buf[80];
   tstruct = *localtime(&now);
   strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

   return buf;
}
