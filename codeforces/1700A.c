#include<stdio.h>
int main()
{
   long long int t, n, m;
   
   scanf("%lld",&t);
   while(t!=0)
   {
       scanf("%lld %lld",&n,&m);
       long long int result = ((m * m - m) / 2)+(m * ((n*n + n) / 2));
       printf("%lld \n", result);
       t--;
   }
   return 0;  
}