#include<iostream>
using namespace std;
int main()
{
    int n, k,i,min_sum=0,window_sum,index=0;
    cin >> n >> k;
    int h[n];
    for (i = 0; i < n;i++)
        cin >> h[i];
    for (i = 0; i < k;i++)
        min_sum = min_sum + h[i];
    window_sum = min_sum;
    for (i = k; i < n;i++)
    {
        window_sum = window_sum + h[i] - h[i-k];
        if(window_sum<min_sum)
        {
            min_sum = window_sum;
            index = i-k+1;
        }
    }
    cout << index + 1;
}