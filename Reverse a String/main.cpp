#include <iostream>
#include <string>
#include "rString.hpp"

using namespace std;


int main()
{
    string *user = new string;
    string input;
    cout << "Hello user. How are you? Please give me an input string:" << endl;
    cout << "#";
    cin >> input;
    *user = input;
    Rstring * temp = new Rstring(user);
    delete temp;
    delete user;
    return 0;
}