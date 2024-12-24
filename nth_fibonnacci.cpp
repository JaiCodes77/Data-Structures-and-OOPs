//printing nth term of a fibonnaci series
#include<iostream>
using namespace std;
int nth(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    int nterm=nth(n-1)+nth(n-2);

    return nterm;
}
int main() {
    cout<<nth(6);
    return 0;
}