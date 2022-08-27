
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i = 0,flag=0;
    scanf("%s", &str);
    if(strchr (str, 'H')!=NULL || strchr (str, 'Q')!=NULL || strchr (str, '9')!=NULL)
        printf("YES");
    else
        printf("NO");

    return 0;
}