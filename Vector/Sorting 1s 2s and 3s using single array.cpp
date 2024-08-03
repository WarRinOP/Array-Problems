#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

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
    // We will be applying Dutch Flag Algorithm
    int low = 0, mid = 0, hi = n - 1;
    while (mid <= hi)
    {
        if (v[mid] == 3)
        {
            swap(v[mid], v[hi]);
            hi--;
        }
        else if (v[mid] == 1)
        {
            swap(v[mid], v[low]);
            low++;
            mid++;
        }
        else if (v[mid] == 2)
        {
            mid++;
        }
    }
    display(v);
}