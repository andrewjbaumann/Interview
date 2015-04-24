#include "unique.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cout << "Hello. Give me a string, and I will test if it is all unique." << endl;
	getline(cin, input);

	cout << ("Give me a moment.") << endl;
	Unique * DRAGON = new Unique(input);
	delete DRAGON;
	return 0;
}