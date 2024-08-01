#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return;
}
void reversepart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    display(v);
    return;
}
int main(){
    int n;
    cout<<"Enter number of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter your digits: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i,j;
    cout<<"Enter from which index you want to reverse: ";
    cin>>i;
    cout<<"Enter upto which index you want to reverse: ";
    cin>>j;
    reversepart(i,j,v);
}