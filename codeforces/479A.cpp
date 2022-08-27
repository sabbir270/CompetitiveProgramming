#include<iostream>
using namespace std;
int main()
{
    int a, b, c,p,q,r,s,t,u,result=0;
    cin >> a >> b >> c;
    p = a + b + c;
    result = p;

    q = (a + b) * c;
    if(q>result)
        result = q;

    r = (a * b) + c;
    if(r>result)
        result = r;

    s = a + (b * c);
    if(s>result)
        result = s;

    t = a * (b + c);
    if(t>result)
        result = t;

    u = a * b * c;
    if(u>result)
        result = u;
    cout << result;
}