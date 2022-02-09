#include<stdio.h>

int main()
{
    int n,rev_n,i,d,n2;
    rev_n=0;
    printf("enter a number=");
    scanf("%d",&n);
    n2=n;
    while(n>0)
    {
    d=n%10;
    rev_n=(rev_n*10)+d;
    n=n/10;
    }
    if(rev_n==n2)
        printf("\nIt is a pallindrome number");
    else
        printf("\nIt is not a pallindrome number");
    return 0;

}
