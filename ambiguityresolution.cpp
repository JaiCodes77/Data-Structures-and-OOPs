#include <iostream>
using namespace std;

class base1{
    public :
    void greet(){
        cout<<"how are you?"<<endl;
    }
};

class base2{
    public :
    void greet(){
        cout<<"kaise ho?"<<endl;
    }
}; 

class derived : public base1, public base2{
    int a;
    public :
    void greet(){
        base1 :: greet(); // resolving ambiguity in multiple inheritance.
    }
};

int main(){
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet(); 
    derived der;
    der.greet();
    return 0;
} 
