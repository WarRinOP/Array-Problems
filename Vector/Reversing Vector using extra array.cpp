#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of array: ";
    cin>>n;
    vector<int>v1(n);
    cout<<"Enter your digits: ";
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        // i+j=n-1
        v2[n-1-i]=v1[i];
    }
    cout<<"Reverse of the vector is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
}