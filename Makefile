
                                               # Makefile for the Logger programming example #


main_objects = source/Class_Console.o source/Class_Log.o source/Class_File.o source/Class_TCP.o source/ClientSocket.o source/ServerSocket.o source/Socket.o source/CurrentDateTime.o main.o

all : main 


main: $(main_objects) 
	g++ -o main $(main_objects)



Class_Console: 	Class_Console.cpp
Class_Log: 	Class_Log.cpp
Class_File: 	Class_File.cpp
Class_TCP: 	Class_TCP.cpp
ClientSocket: 	ClientSocket.cpp
ServerSocket: 	ServerSocket.cpp
Socket: 	Socket.cpp
main: 		main.cpp


clean:
	rm -f *.o main 
