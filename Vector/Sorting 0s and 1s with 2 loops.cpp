#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of arrays: ";
    cin>>n;
    cout<<"Enter your digits: :";
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int noz=0, noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            noz++;
        }
        else{
            noo++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<noz){
            v[i]=0;
        }
        else{
            v[i]=1;
        }

    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

}
}