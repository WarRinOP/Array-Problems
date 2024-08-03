#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permit(vector<int> &v)
{
    int n = v.size();
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }
    reverse(v.begin()+idx+1,v.end());
    
    for(int i=idx+1;i<n;i++){
        if(v[idx]<v[i]){
             int temp=v[idx];
             v[idx]=v[i];
             v[i]=temp;
             break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return;
}
int main()
{
    int n;
    cout << "Enter array number: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter your digits: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout<<"Next largest permutation of the array is: "<<endl;
    permit(v);
}