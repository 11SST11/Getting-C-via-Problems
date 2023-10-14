#include<stdio.h>
int sum(int a,int b);
int main()
{
    int c,a,b;
    printf("Enter values for a and b-");
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("sum is %d",c);
    return 0;
}
int sum(int a,int b)
{
    int d;
    d=a+b;
    return d;
}