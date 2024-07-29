#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of your digits: ";
    cin>>num;
    cout<<"Enter your digits: ";
    int product[num];
    for(int i=0; i<num; i++){
        cin>> product[i];
    }
    int res=1;
    for(int i=0;i<num;i++){
        res*=product[i];
    }
    cout<<"Your product is: "<<res;
}