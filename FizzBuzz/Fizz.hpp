/*

MADE BY ANDREW BAUMANN

 */
#ifndef FiZZ_HPP
#include <string>

using namespace std;
class Fizz
{
private:
    string F = "Fizz";
    string B = "Buzz";
public:
    Fuzz()
    {
        ///fizzybuzzy
        printer();
    }
    ~Fuzz()
    {
    }

    void printer()
    {
        for(int i=1; i<100; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                cout << F << B << endl;
            else if(i % 3 == 0)
                cout << F << endl;
            else if (i % 5 == 0)
                cout << B << endl;
            else
                cout << i << endl;
        }

    }
};

#endif