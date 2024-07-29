#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter your digits: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0, x;
    cout << "Enter reference digit: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    cout << "There are " << count << " elements larger than " << x;
}