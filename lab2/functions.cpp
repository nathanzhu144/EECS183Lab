/**
*   Nathan Zhu 
*   Lab 2, functions demonstration.
*   
*/

#include <iostream>
#include <string>

using namespace std;


//Requires: Nothing.
//Modifies: Nothing.
//Effects:  Prints "Hello world!" without quotes. 

//Requires: Nothing.
//Modifies: Nothing.
//Effects:  Returns the string "DOG" without quotes.

//Requires: Nothing.
//Modifies: Nothing.
//Effects:  Takes an int and cubes it, and returns that int.


//Requires: Nothing.
//Modifies: Nothing.
//Effects:  What is it?
void scope_challenge() {
	int x = 3;

	{
		int x = 7;
	}
}

int main() {
	scope_challenge();

	return 0;
}