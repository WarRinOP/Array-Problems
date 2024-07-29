#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number of digits: ";
    cin>>num;
    int sum[num];
    cout<<"Enter your digits: ";
    for(int i=0; i<num;i++){
        cin>> sum[i];
    }
    int result=0;
    for(int i=0;i<num;i++){
        result+= sum[i];
    }
    cout<<"Sum of the digits are "<<result;
}