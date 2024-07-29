#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter your digits: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int large = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    int sec = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sec && arr[i] < large)
        {
            sec = arr[i];
        }
    }

    cout << "Largest number in the array is: " << large;
    cout << " and the second largest number is: " << sec;
}