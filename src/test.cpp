// Simple Console Application For Bash

// Defining What To Include And What Namespace To Use.
#include <iostream>
#include <string> /* You Need This For Strings :) */
/* You Need One Of Those For System, Forget Which :O */
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main () {
	string cmdin;
	// LOL, ima get flame for the use of goto, i just know it.
	console:
	// the basic output line.
	cout << "C++ Bash Console > ";
	// the basic input line.
	cin >> cmdin;
	// this allows the next command input to appear on a new line
	cout << "\n";
	// all of these if statements work the same way. if the string has that value, it preforms the selected command. not much explanation to it.
	if (cmdin == "clear") {
	system("clear");
	goto console;
	} else if (cmdin == "history") {
	system("history");
	goto console;
	} else if (cmdin == "times") {
	system("times");
	goto console;
	} else if (cmdin == "time") {
	system("time");
	goto console;
	} else if (cmdin == "exit") {
	system("exit");
	} else if (cmdin == "end") {
	// this allows you to end the application. :)
	return 0;
	} else {
	// this is just incase someone passes a command that doesn't exist or is unsupported
	cout << "Invalid/Unsupported Command \n";
	goto console;
	}
} 