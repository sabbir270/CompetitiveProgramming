#include<iostream>
using namespace std;
int main()
{
    int n, m,sum=0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        if(i<m && a[i]<0)
        {
            sum = sum + a[i];
        }
    }
    if(sum>=0)
        cout << "0"<<endl;
    else
        cout << (-1 * sum)<<endl;

}