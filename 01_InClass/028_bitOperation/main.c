#include <stdio.h>
#include <stdlib.h>


#include "bitOperation.h"


void printBinary( unsigned int input, unsigned char nBitsToPrint );


int main( int argc, char *argv[] )
{
	unsigned char testRegister = 0;

	printBinary( testRegister, 8);
	SetBitNof8( &testRegister, 3);
	printBinary( testRegister, 8);

	return EXIT_SUCCESS;
}



void printBinary( unsigned int input, unsigned char nBitsToPrint )
{
	unsigned int i = 0;

	printf("%u = 0b", (unsigned short)input);
	
	for( i = (1 << (nBitsToPrint -1)); i > 0; i= (i>>1))
	{
		if( input & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
