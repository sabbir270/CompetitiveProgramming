#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t!=0)
    {   
        long long int n, k,i,count=0,res=0;
        cin >> n >> k;
        string str;
        cin >> str;
        for (i = 0; i < k;i++)
            if(str[i]=='W')
                count++;
        res = count;
        for (i = k; i < n;i++)
        {
            if(str[i]=='W')
                count++;
            if(str[i-k]=='W')
                count--;
            res = min(res, count);
        }
        cout << res<<endl;
        t--;
    }
}