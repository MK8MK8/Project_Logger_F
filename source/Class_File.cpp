
// Implementation of the File class's methods

#include <iostream>
#include <string>
#include <fstream>

#include "../headers/Class_File.hpp"


using namespace std;

//Implementation of the Error method

void File::Error() {
   
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << "ERROR: (message..)\n";
   myfile.close();

}

//Implementation of the Warning method

void File::Warning() {
	
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << "WARNING: (message..)\n";
   myfile.close();

}

//Implementation of the Verbosity method

void File::Verbosity() {
	
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << "VERBOSITY: (message..)\n";
   myfile.close();

}

	
	
   	
 
