

#include<stdio.h>
int main()
{

    int x,y,z,n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d%d%d",&x,&y,&z);
        if((x==1&&y==1)||(x==1&&z==1)||(y==1&&z==1))
            c++;
    }
    printf("%d\n",c);
    return 0;

}
