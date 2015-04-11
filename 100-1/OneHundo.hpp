/*

    MADE BY ANDREW BAUMANN
    prints 100-1 

 */
#ifndef ONEHUNDO_HPP

using namespace std;

class OneHundo
{
private:
public:
    OneHundo()
    {
        doer();
    }
    ~OneHundo()
    {
    }

    void doer()
    {
        for(int i=0; i!=-100; i--)
        {
            int temp = i;
            temp += 100;
            cout << temp << endl;
        }
    }
};

#endif