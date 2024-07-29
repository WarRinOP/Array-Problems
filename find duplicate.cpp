#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter your digits: ";
    int arr[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "Duplicate exists.";
    }
    else
    {
        cout << "Duplicate doesn't exist";
    }
}
