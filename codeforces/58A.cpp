#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str,str2="hello";
    cin >> str;
    int j = 0;
    for (int i = 0; i < str.size();i++)
    {
        if(str[i]==str2[j])
        {
            j++;
            if(j>=5)
            {
                cout << "YES";
                break;
            }
        }
    }
    if(j<5)
        cout << "NO";
}