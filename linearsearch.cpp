#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter your digits: ";
    for(int i=0; i<n;i++){
       cin>> arr[i];
    }
    int search;
    cout<<"Enter the value which you want to find: ";
    cin>>search;
    bool flag=false;

    for(int i=0;i<n;i++){
        if(arr[i]==search){
            flag=true;
            break;
           
    }

}
if(flag==true){
    cout<<"The given value is present.";
}
else{
    cout<<"404 not found.";
}
}