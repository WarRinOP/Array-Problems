#include <iostream>
#include <vector>
using namespace std;
vector<int> sort(vector<int> &v1, vector<int> &v2)
{
    int m = v1.size(), n = v2.size();
    vector<int> sorted(m + n);
    int o = sorted.size();
    int i = m - 1, j = n - 1, k = o - 1;
    while (i >= 0 && j >= 0)
    {
        if (v1[i] >= v2[j])
        {
            sorted[k] = v1[i];
            i--;
            k--;
        }
        else if (v2[j] >= v1[i])
        {
            sorted[k] = v2[j];
            j--;
            k--;
        }
    }
    while (i >= 0)
    {
        sorted[k] = v1[i];
        i--;
        k--;
    }
    while (j >= 0)
    {
        sorted[k] = v2[j];
        j--;
        k--;
    }
    return sorted;
}
int main()

{
    int m, n;
    cout << "Enter array number of first vector: ";
    cin >> m;
    vector<int> v1(m);

    cout << "Enter your digits: ";
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    cout << "Enter array number of second vector: ";
    cin >> n;
    vector<int> v2(n);

    cout << "Enter your digits: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<int> s = sort(v1, v2);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}