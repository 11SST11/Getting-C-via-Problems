#include<stdio.h>
#include<stdlib.h>
void main()
{
 float *x;
 int i,n;
 printf("how many elements do u want?");
 scanf("%d",&n);
 x=(float*)calloc(n,sizeof(float));
 if(x!=NULL)
 {
   printf("data is=\n");
   for(i=0;i<n;i++)
   printf("\n x[%d]=%d ",i,*(x+i));
 }
  else
   printf("calloc failed");
  getch();
}
