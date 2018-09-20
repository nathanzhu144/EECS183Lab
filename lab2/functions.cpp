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
void print_hello_world(){
   cout << "Hello world!" << endl;
   return;                             //This line is optional
}

//Requires: Nothing.
//Modifies: Nothing.
//Effects:  Returns the string "DOG" without quotes.
string return_dog(){
    return "DOG";
}

//Requires: Nothing.
//Modifies: Nothing.
//Effects:  Takes an int and cubes it, and returns that int.
int cube_this_int(int number){
    return number * number * number;
}

int main() {
	print_hello_world();              //This line should print "Hello world!" without quotes
	cout << return_dog() << endl;     //This line should print "DOG" without quotes.
	return_dog();                     //This line should print nothing at all - why?
	
	//cout << print_hello_world();   //Why would this line result in a compiler error if uncommented?
	
	cout << cube_this_int(2) << endl; //This line should print 8.

	return 0;
}
