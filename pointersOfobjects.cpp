#include <iostream>
using namespace std;

class complex
{
public:
    int real, imaginary;

    void getdata()
    {
        cout << "this is real " << real << endl;
        cout << "this is imaginary " << imaginary << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

// int main()
// {
//     complex *ptr = new complex;
//     (*ptr).setdata(1, 50);
//     (*ptr).getdata();
//     return 0;
// } 

// usage of arrow operator.

int main(){
    complex *ptr = new complex;
    ptr->setdata(1,50);
    ptr->getdata();
    return 0;
}