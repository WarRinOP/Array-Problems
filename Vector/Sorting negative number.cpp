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
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] < 0)
        {
            i++;
        }
        else if (v[j] >= 0)
        {
            j--;
        }
        else if (v[i] >= 0 && v[j] < 0)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    display(v);
}