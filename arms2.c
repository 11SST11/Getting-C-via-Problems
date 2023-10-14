#include<stdio.h>
#include<math.h>
int main()
{
    int n,power,count=0,temp,r,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=temp;
    
    temp=n;
    while(n>0)
    {
        r=n%10;
        power=pow(r,count);
        sum=sum+power;
        n=n/10;
    }
    n=temp;
     printf("sum is %d\n",n);
    if(n==sum)
    printf("%d is a Armstrong number");
    else
    printf("%d is Not an Armstrong number");
   
    return 0;
}