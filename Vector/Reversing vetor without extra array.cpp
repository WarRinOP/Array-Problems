#include <iostream>
#include <vector>
using namespace std;
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
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    cout << "Reverse of the vector is: ";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
