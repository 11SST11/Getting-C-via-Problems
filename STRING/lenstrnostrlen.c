#include<stdio.h>
int main()
{
	char x[100];
	int i=0;
	printf("\n Enter String:");
	gets(x);
	while(x[i]!='\0')
        {
		i++;
	    }
	printf("\n Length of the string is:%d",i);
	return 0;
}
