 
// Main function

#include <iostream>
#include <string>

#include "headers/Class_Log.hpp"
#include "headers/Class_File.hpp"
#include "headers/Class_Console.hpp"
#include "headers/Class_TCP.hpp"
#include "headers/CurrentDateTime.hpp"

using namespace std;

int main () {

 // X is a class object that may be whether a Console, a File, a Log or a TCP object.
 // If it is a File object, the error messages will be displayed into a file called Output.txt.
 // If it is a Console object, the error messages will be displayed in the terminal console. 
 // If it is a TCP object, the error messages will be displayed in the remote Server terminal.
   
   Console X;
   
   /*int a,b;
   cin >> a;
   cin >> b;
   if (a<b)*/
   
   X.Error();
   
   /*else if (a>b)*/
   
   X.Warning();
   
   /*else*/
   
   X.Verbosity();
   
   return 0; 


}



   
   
   
   
   
