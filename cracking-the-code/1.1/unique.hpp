/*

    MADE BY ANDREW BAUMANN
    checks if string is all unique
 */
#ifndef UNIQUE_HPP
#include <iostream>
#include <string>

using namespace std;

class Unique
{
private:
    bool Doer(string input)
    {
        for(int i=0; i<input.size(); i++)
        {
            for(int j=i+1; j<input.size(); j++)
            {
                if(input[i] == input[j])
                {
                    cout << ("This is not unqiue.") << endl;
                    return false;
                }
            }
        }
        cout << "This is unique!" << endl;
        return true; 
    }
public:
    Unique(string input)
    {
        Doer(input);
    }
    ~Unique()
    {}
};

#endif