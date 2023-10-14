#include <stdio.h>
void cubeByReference(int *nPtr); //function prototype
int main( void )
{
   int number = 5; 
	 printf("The original value of number is %d", number);
   cubeByReference( &number ); //pass address of number
   printf("\nThe new value of number is %d\n", number);
} // end main

//calculate cube of *nPtr; actually modifies number in main
void cubeByReference( int *nPtr )                              
{                                                              
   *nPtr = *nPtr * *nPtr * *nPtr;  //cube *nPtr            
}
