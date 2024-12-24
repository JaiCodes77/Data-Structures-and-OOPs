#include <iostream>
using namespace std;

class employee{
    int id;
    public:
    float salary;
    employee(int inpId){
        id = inpId;
        salary = 34.0;
    }
}; 
class programmer : public employee{
    public :
    int spriha = 9;
    int spriha2 = 10;
};


int main(){
    employee jai(1),amritesh(2);
    cout<<jai.salary<<endl;
    cout<<amritesh.salary<<endl;
    return 0;
}
