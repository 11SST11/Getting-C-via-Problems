#include<stdio.h>
void main()
{
    int n,r,c,sum=0,temp;
    printf("enter the value of n:-");
    scanf("%d",&n);
    temp=n;
    while (n=0);
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;

    }
    n=temp;
    if (n==sum)
    printf("armstrong");
    else;
    printf("not an armstrong");

}