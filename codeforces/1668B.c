#include<stdio.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    while(testcase>0){
    int n,m, x=0,z=0,tmp,i,j;
    scanf("%d%d",&n,&m);

    int emptyChair[n];
    for (i=0;i<n;i++){
        scanf("%d", &emptyChair[i]);
    }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (emptyChair[j] < emptyChair[j + 1]) {
                tmp = emptyChair[j];
                emptyChair[j] = emptyChair[j + 1];
                emptyChair[j + 1] = tmp;
            }


    for (i=0;i<n;i++){
        if(i==0){
            x=x+emptyChair[i]*2+1;
        }
        else {
            x=x+emptyChair[i]+1;
        }

        if(x>m){
            x=x-emptyChair[i];
            if(x>m){
                z=1;
                printf("no\n");
                break;
            }
            else {
                x=x+emptyChair[i];
            }
        }
    }
    if(z==0){
        printf("yes\n");
    }
    testcase--;
        }
        return 0;
}