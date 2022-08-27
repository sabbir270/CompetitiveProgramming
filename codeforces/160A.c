#include<stdio.h>
int main()
{
    int total_coin,i,j,temp=0,sum=0;
    scanf("%d", &total_coin);
    int coin_value[total_coin];
    for (i = 0; i < total_coin; i++)
    {
        scanf("%d", &coin_value[i]);
        sum = sum + coin_value[i];
    }
    for ( i = 0; i < total_coin; i++)
    {
        for (j = 0; j < total_coin;j++){
            if(coin_value[i]>coin_value[j]){
                temp = coin_value[i];
                coin_value[i] = coin_value[j];
                coin_value[j] = temp;
            }

        }
    }
    int min_value = 0, min_coin = 0;
    for (i = 0; i < total_coin;i++){
        sum = sum - coin_value[i];
        min_value = min_value + coin_value[i];
        min_coin++;
        if(min_value>sum){
            printf("%d", min_coin);
            break;
        }
    }
    return 0;
}