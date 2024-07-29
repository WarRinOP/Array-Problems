#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter your digits: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int check=1;
    while(true){
        bool found=false;
        for(int i=0;i<n;i++){
            if(arr[i]==check){
                found=true;
                break;
            }
            
        }
        if(!found){
            break;
        }
        check++;
    }
    cout<<"The lowest missing integer is: "<<check;
}