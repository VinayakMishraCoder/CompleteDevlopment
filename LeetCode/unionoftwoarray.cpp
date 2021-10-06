#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> v1, v2, v3;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    v3 = v1;
    int diff;
    if (n1 > n2)
    {
        diff = n1 - n2;
        for (int i = 0; i < n1 + diff; i++)
        {
            if (v1[i] != v2[i]&& n2>i)
            {
                v3.push_back(v2[i]);
            }
        }
    }
    else
    {
        diff = n2 - n1;
        for (int i = 0; i < n2 + diff; i++)
        {
            if (v1[i] != v2[i]&&n1>i)
            {
                v3.push_back(v2[i]);
            }
        }
    }
    cout << v3.size();

    return 0;
}