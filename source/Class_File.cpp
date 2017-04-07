
#include <iostream>
#include <string>
#include <fstream>
#include "../headers/Class_File.hpp"


using namespace std;

void File::Error() {
   
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << "ERROR: (message..)\n";
   myfile.close();

}

void File::Warning() {
	
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << "WARNING: (message..)\n";
   myfile.close();

}

void File::Verbosity() {
	
   ofstream myfile;
   myfile.open ("Output.txt",fstream::app);
   myfile << "VERBOSITY: (message..)\n";
   myfile.close();

}

	
	
   	
 
