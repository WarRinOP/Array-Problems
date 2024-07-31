#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter Array size: ";
cin>>n;
vector<int>v(n);
cout<<"Enter  your digits: ";
for(int i=0;i<n;i++){
    cin>>v[i];
}
 cout<<"Enter target: ";
 int x, index=-1;
 cin>>x;
 for(int i=v.size()-1;i>=0;i--){
    if(v[i]==x){
        index=i;
        break;
    }
 }
 if(index!=-1){
    cout<<"Last occurrence is: "<<index;
 }
 else{
    cout<<"Given digit is not found.";
 }
}
