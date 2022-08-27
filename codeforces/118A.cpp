#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size();i++)
    {
        if(str[i]=='y'|| str[i]=='Y'|| str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {    
            str.erase(i, 1);
            i--;
        } 
       
    }
    for (int i = 0; i < str.size();i++)
        str[i]=tolower(str[i]);
    
    int length = str.length();    
    for (int j = 0; j <length*2;j=j+2)
    {
        str.insert(j,".");
    }
    cout << str;
    return 0;
}