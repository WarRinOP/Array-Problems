#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cout << "Enter number of arrays: ";
    cin >> n;
    cout << "Enter your digits: ";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int noo=0,notw=0,noth=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            noo++;
        }
        else if(v[i]==2){
            notw++;
        }
        else{
            noth++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<noo){
            v[i]=1;
        }
        else if(i<(noo+notw)){
             v[i]=2;
        }
        else{
            v[i]=3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<< v[i]<<" ";
    }
    
    }