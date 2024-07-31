#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return;
}
int main()
{
    int n;
    cout << "Enter number of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter your digits: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "The numbers (given exactly by user) are: ";
    display(v);
    cout << endl;

    sort(v.begin(), v.end());
    cout << "The numbers in a sorted way are: ";
    display(v);
}