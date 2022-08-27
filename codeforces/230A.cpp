#include<iostream>
using namespace std;
int main()
{
    int s, n,flag=1;
    cin >> s >> n;
    int dragon_strength[n], bonus[n];
    for (int i = 0; i < n;i++)
    {
        cin >> dragon_strength[i] >>bonus[i];
    }
    for (int i = 0; i < n;i++)
    {
        for (int j = i+1; j < n;j++)
        {
            if(dragon_strength[i]>dragon_strength[j])
            {
                int temp = bonus[i];
                bonus[i] = bonus[j];
                bonus[j] = temp;

                temp = dragon_strength[i];
                dragon_strength[i] = dragon_strength[j];
                dragon_strength[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s >dragon_strength[i])
        {
            s = s + bonus[i];
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag==0)
        cout << "NO";
    else
        cout << "YES";
}