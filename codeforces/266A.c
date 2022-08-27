#include<stdio.h>
int main()
{
    char str[50];
    int i,n,c=0;
    scanf("%d",&n);
    scanf("%s",str);
    for(i=0; i<n; i++)
    {
        if(str[i]==str[i+1])
            c++;
    }
    printf("%d\n",c);
    return 0;
}
