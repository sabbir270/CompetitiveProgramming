/*
#include<iostream>
using namespace std;
int main()
{
    int n,q,m,count=0;
    cin >> n;
    int x[n];
    for (int i = 0; i < n;i++)
        cin >> x[i];
    cin >> q;
    while(q!=0)
    {
        cin >> m;
        count = 0;
        for (int i = 0; i < n;i++)
            if(m>=x[i])
                count++;
        cout << count<<endl;
        q--;
    }
}
*/
#include <algorithm> // for lower_bound, upper_bound and sort
#include <iostream>
#include <vector> // for vector
 
using namespace std;
 
int main()
{
    int gfg[] = { 5, 6, 7, 7, 6, 5, 5, 6 };
 
    vector<int> v(gfg, gfg + 8); // 5 6 7 7 6 5 5 6
 
    sort(v.begin(), v.end()); // 5 5 5 6 6 6 7 7
 
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6);
 
    cout << "lower_bound for 6 at position "<<lower<< '\n';
    cout << "upper_bound for 6 at position "
         << (upper - v.begin() + 1) << '\n';
 
    return 0;
}