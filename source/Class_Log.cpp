
#include <iostream>
#include <string>
#include "../headers/Class_Log.hpp"


using namespace std;

void Log::Error() {
	
   cout << "\033[1;31m ERROR \033[0m\n ";

}

void Log::Warning() {
	
   cout << "\033[1;33mWARNING \033[0m\n";

}

void Log::Verbosity() {
	
   cout << "\033[1;32m VERBOSITY \033[0m\n";

}

	
	
   	
