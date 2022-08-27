#include<iostream>
using namespace std;
int main()
{
    int n, m,final_diff,diff;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m;i++)
        cin >> a[i];
    for (int i = 0; i < m;i++)
        for (int j = i + 1; j < m;j++)
        if(a[i]<a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    for (int i = 0; i <= m-n;i++)
    {
        diff = a[i] - a[i+n-1];
        if(i==0)
            final_diff = diff;
        if(diff<final_diff)
            final_diff = diff;
    }
    cout << final_diff;
}