
#include<stdio.h>
int main()
{
    char a[10];
    int x=0,n,i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%s",a);
        if(a[1]=='+')
            x++;
        else
            x--;

    }
    printf("%d\n",x);
    return 0;

}
