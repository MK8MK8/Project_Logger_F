
// Implementation of the File class's methods

#include <iostream>
#include <string>
#include <fstream>

#include "../headers/Class_File.hpp"
#include "../headers/CurrentDateTime.hpp"

using namespace std;

//Implementation of the Error method

void File::Error() {
   
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << currentDateTime() << ":" << "  ERROR: (message..)\n";
   myfile.close();

}

//Implementation of the Warning method

void File::Warning() {
	
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << currentDateTime() << ":" << "  WARNING: (message..)\n";
   myfile.close();

}

//Implementation of the Verbosity method

void File::Verbosity() {
	
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << currentDateTime() << ":" << "  VERBOSITY: (message..)\n";
   myfile.close();

}

	
	
   	
 
