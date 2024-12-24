#include<iostream>
#include<climits> 
using namespace std;
getmax(int num[],int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){ 
        if(num[i] > max){
           max = num[i];
        }
    } return max;
} 
getmin(int num[],int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(num[i]<min){
            min = num[i];
        }
    } return min;
} 
int main(){
    int size;
    cout<< "enter the size of an array";
    cin>> size;
    int num[100];
    for(int i = 0; i<size; i++){
        cin >> num[i];
    } 
    int max = getmax(num,size);
    cout<<"Max = "<< max <<  endl;
    int min = getmin(num,size);
    cout<<"Min = " << min;
    return 0;
}