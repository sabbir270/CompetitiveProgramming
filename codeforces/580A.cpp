#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],count=1,max_length=1; 
    for (int i = 0; i < n;i++)
        cin >> a[i];

    for (int i = 0; i < n-1;i++)
    {   
        if(a[i+1]>=a[i])
        {
            count++;
            if(count>max_length)
                max_length = count;
        }
        else
            count = 1;
    }
    cout << max_length;
}