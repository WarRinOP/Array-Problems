#include <iostream>
#include <vector>
using namespace std;
   void sort(vector<int>& a, vector<int>& b){
    int n=a.size(), m=b.size();
    int i=(n-m-1), j=m-1, k=n-1;
    while(j>=0){
        if(i>=0 && a[i]>=b[j]){
            a[k]=a[i];
            i--;
            k--;
        }
        else {
            a[k]=b[j];
            k--;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return;
   }

int main()
{
    int n, m;
    cout << "Enter number of your first array: ";
    cin >> n;
    cout << "Enter number of your second array: ";
    cin >> m;
    vector<int> v1(n), v2(m);
    cout << "Enter your digits of first vector: ";
    
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    cout << "Enter your digits of second vector: ";
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    sort(v1, v2);
}