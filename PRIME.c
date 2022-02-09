#include<stdio.h>

int main()
{
    int n,p,i,j;
    printf("enter the number till where the prime numbers is to be found=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=0;
        for(j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            p=p+1;
        }
        }
        if(p==2)
            printf("\n%d is a prime number",i);
            else
                printf("\n%d is not a prime number",i);
    }
    return 0;
}
