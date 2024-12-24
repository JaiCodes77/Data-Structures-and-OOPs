#include <iostream>
using namespace std;

class A{
    int a;
    public :
    void setdata(int a){
        this-> a = a;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    // THIS POINTER IS A KEYWORD WHICH IS A POINTER WHICH POINTS TO THE OBJECT WHICH INVOKES THE MEMBER FUNCTION.
    A a;
    a.setdata(6);
    a.getdata();
    return 0;
}
