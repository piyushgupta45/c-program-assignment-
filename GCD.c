#include<stdio.h>

int main()
{
    int n1,n2,i,gd,s;
    printf("Enter the two number\n");
    scanf("%d%d",&n1,&n2);
    s=(n1>n2)?n2:n1;
    for(i=1;i<=s;i++)
    {
        if(n1%i==0 && n2%i==0)
            gd=i;
    }
    printf("THE GCD OF THE NUMBERS IS=%d",gd);
    return 0;
}

