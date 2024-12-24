#include <iostream>
using namespace std;

class test
{
public:
    int a;
    int b;
    test(int i, int j) : a(i), b(i + j)
    {
        cout << "running a test program on initialiZation of lists in constructors" << endl;
        cout <<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};

int main()
{
    test jai(2, 8);
    return 0;
}