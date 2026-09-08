#include <bits/stdc++.h>
using namespace std;

int main()
{

    
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    // input arary +precompute simultaneously
    int a[n];
    unordered_map<int, int> m;
    cout << "Enter space separated array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }


    // input questions
    int q;
    cout << "Enter the no of questions:";
    cin >> q;

    int num;
    while (q--)
    {
        cin >> num;
        cout << "Count : " << m[num];
    }
    return 0;
}