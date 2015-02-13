/*

REVERSE STRING

ANDREW BAUMANN
 */
#ifndef RSTRING_HPP

using namespace std;

class Rstring
{
private:
    string * input;

public:

    Rstring()
    {

    }
    Rstring(string * user)
    {
        input = new string;
        *input = *user;
        reverser();
    }
    virtual ~Rstring()
    {
        delete input;
    }
    string * reverser()
    {
        string * temp = new string;
        *temp = *input;
        unsigned long iter = input->size();
        iter--;
        for(int i=0; i<temp->size(); i++)
        {
            input->at(iter) = temp->at(i);
            iter--;
        }
        cout << *input << endl;
        delete temp;
    }


};

#endif