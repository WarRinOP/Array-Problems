#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of your array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter your digits: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter your target value: ";
    int target;
    cin >> target;
    cout<<"The following indexes can be added to get the desired target: "<<endl;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}