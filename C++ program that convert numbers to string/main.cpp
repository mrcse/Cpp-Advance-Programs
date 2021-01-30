// C++ code to demonstrate string stream method
// to convert number to string.
#include<iostream>
#include <sstream> // for string streams
using namespace std;
int main()
{
	int num = 2019;

	// declaring output string stream
	ostringstream str1;

	// Sending a number as a stream into output
	// string
	str1 << num;

	// the str() coverts number into string
	string geek = str1.str();

	// Displaying the string
	cout << "The newly formed string from number is : ";
	cout << geek << endl;

	return 0;
}
