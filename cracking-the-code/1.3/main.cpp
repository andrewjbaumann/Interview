#include "Perm.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first, second;
	cout << "Hello. Give me two strings, and I will test if the first is a permutation" << endl;
	cout << "of the second." << endl;
	cout << "$ ";
	getline(cin, first);
	cout << "$ ";
	getline(cin, second);
	Perm * DRAGON = new Perm(first, second);
	delete DRAGON;
	return 0;
}