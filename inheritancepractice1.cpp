#include<iostream>
using namespace std;
class animal {
    public: 
    void eat(){
        cout<< " i can eat!";
    }
    void sleep(){
        cout<< " i can sleep!";
    }
};

class dog : public animal {
    public :
    void bark(){
        cout<<"  i can bark!";
    }
};
int main(){
    dog dog1;
    dog1.eat();
    dog1.bark();
    return 0;
}