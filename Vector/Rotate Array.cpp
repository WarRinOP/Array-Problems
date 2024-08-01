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
    cout<<"Enter how many steps you want to rotate: ";
    int k;
    cin>>k;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}