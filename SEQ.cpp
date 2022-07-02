#include <bits/stdc++.h>

using namespace std;

int a[100];

int SEQ(int l, int r, int x)
{
    int dem = 0;
    for (int i = l; i <= r; i++)
    {
        if (a[i] == x)
            dem++;
    }
    return dem;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (SEQ(1, i, a[i]) > SEQ(j, n, a[j]))
                count++;
        }
    }

    cout << count;
}