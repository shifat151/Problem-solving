#include <stdio.h>
#include <stdlib.h>

int maximum(int s,int b)
{
    return s>b?s:b;

}
int Knap(int item,int value[],int weight[],int maximumW)
{
    int dp[item+1][maximumW+1];

    int ip,w;
    for(ip=0; ip<=maximumW; ip++)

    {
        dp[0][ip]=0;

    }
    for(ip=0; ip<=item; ip++)
    {

        dp[ip][0]=0;
    }
    for(ip=1; ip<=item; ip++)
    {
        for(w=0; w<=maximumW; w++)
        {
            dp[ip][w] = dp[ip-1][w];
            if(w-weight[ip] >=0)

            {
                dp[ip][w] = maximum(dp[ip][w], dp[ip-1][w-weight[ip]]+value[ip]);
            }
        }
    }
    return dp[item][maximumW];
}
int main()


{
    int item,T,i,j,P,sum=0;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&item);
        int weight[item+1],value[item+1];


        int iter;
        for(iter=1; iter<=item; iter++)
        {
            scanf("%d %d",&value[iter],&weight[iter]);
        }
        int maximumW;
        scanf("%d",&P);


        for(j=1; j<=P; j++)
        {
            scanf("%d",&maximumW);
            sum = sum + Knap(item,value,weight,maximumW);
        }
        printf("%d\n",sum);
        sum = 0;


    }
    return 0;
}
