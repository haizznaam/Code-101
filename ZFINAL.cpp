#include <bits/stdc++.h>
using namespace std;

int dem_so_0_tan_cung(int n)
{
    int dem = 0;
    while (n > 0)
    {
        int chu_so = n % 10;
        if (chu_so == 0)
            dem++;
        else
            break;
        n /= 10;
    }

    return dem;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b[100];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int kyluc = 0;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cnt += dem_so_0_tan_cung(b[i] * a[j]);
        }
        if (kyluc < cnt)
            kyluc = cnt;
    }

    cout << kyluc;
}