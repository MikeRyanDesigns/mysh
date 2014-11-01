//***********************************************************//
//	File: qkcompile.h
//	Author: Landan M Young Jackson
//
// Just my outline for now. Will most likely change
//***********************************************************//
#pragma once 

#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h> /*for fork*/
//#include <sys/types.h> /*for pid_t*/
//#include <sys/wait.h> /*for wait*/
#include <string>
#include <vector>

using namespace std;

class qkcompile
{
private:

	string _cmd; //command name; in this case the c/c++ file
	string base_name;	// file name without the extension
	string all_args;	//string containing all arguments seperated by whitespace
	string all_flags;	//string containing all arguments seperated by whitespace

	string get_args(vector<string> arguments); //gathers all arguments into one string
	string get_flgs(vector<char> flags); //gathers all arguments into one string
	string get_base_name(string command); //strips the extension (.c or .cpp) from the file name



public:

	qkcompile(); //default contrutor
	qkcompile( string command, vector<string> arguments, vector<char> flags );//overloaded contructor
	~qkcompile(); //decontructor

	void script_call(); //fucntion that will call on a script to perform actual compiling

	


}
