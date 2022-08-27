#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i = 0,count=1;
    scanf("%s", &str);
    for (i = 0; i < strlen(str);i++)
    {
        if(str[i]==str[i+1]&& (str[i]=='0' || str[i]=='1')){
            count = count + 1;
        }
        else{
            count = 1;
        }
        if(count>=7){
            printf("YES");
            break;
        }
    }
    if(count<7){
        printf("NO");
    }
    return 0;
}