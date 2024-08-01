#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cout << "Enter number of arrays: ";
    cin >> n;
    cout << "Enter your digits: :";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] == 0)
        {
            i++;
        }
        else if (v[j] == 1)
        {
            j--;
        }
        else if (v[i] == 1 && v[j] == 0)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}