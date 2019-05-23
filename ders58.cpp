#include<iostream>
using namespace std;

class Kompleks
{
public:
    Kompleks(int r = 0, int s = 0)
    {
        reel = r;
        sanal = s;
    }

    int getReel()
    {
        return reel;
    }

    int getSanal()
    {
        return sanal;
    }

    void setReel(int r)
    {
        reel = r;
    }

    void setSanal(int s)
    {
        sanal = s;
    }


    void print()
    {
        if(sanal > 0)
            cout << reel << " + " << sanal << "i" << endl;
        else if(sanal < 0)
            cout << reel << " - " << -sanal << "i" << endl;
        else
            cout << reel << endl;
    }


private:
    int reel;
    int sanal;
};


int main()
{
    
    return 0;
}
