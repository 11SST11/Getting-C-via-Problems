#include <stdio.h>
int main( void )
{	int a, c;
	float f;
	char day[10]; 
 	printf( "Enter integers: " );
 	scanf( "%d %u", &a, &c);

	printf( "Enter floating-point numbers:" );
  	scanf( "%f", &f);

	printf( "%s", "Enter a string: " );
  	scanf( "%8s", day );
}
