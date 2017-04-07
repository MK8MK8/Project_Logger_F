
#include <iostream>
#include <string>

#include "../headers/Class_Console.hpp"

using namespace std;

void Console::Error() {
	
   cout << "\033[1;31m ERROR: (message..) \033[0m\n ";

}

void Console::Warning() {
	
   cout << "\033[1;33mWARNING: (message..) \033[0m\n";

}

void Console::Verbosity() {
	
   cout << "\033[1;32m VERBOSITY: (message..) \033[0m\n";

}

	
	
   	

