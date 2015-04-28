/*

    MADE BY ANDREW BAUMANN
    checks if one string is a permutation of the other
 */
#ifndef PERM_HPP
#include <iostream>
#include <string>

using namespace std;

class Perm
{
private:
    
    bool Doer(string first, string second)
    {
        bool isPerm = true;

        for(int i=0; i<first.size(); i++)
        {
            char temp = first[i];
            for(int j=0; j<second.size(); j++)
            {
                if(temp == second[j])
                {
                    break;
                }
                else if(j == second.size()-1)
                {
                    return false;
                }
            }
        }
        return true;
    }
public:
    Perm(string first, string second)
    {
        if(Doer(first, second))
            cout << "It is a permutation!" << endl;
        else
            cout << "It is not a permutation." << endl;
    }
    ~Perm()
    {}
};

#endif