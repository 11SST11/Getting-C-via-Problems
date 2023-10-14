#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter values a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    printf("square root:%f",sqrt(a));
    printf("\npower:%f", pow(b,c));
    return 0;
}