#include <stdio.h>

int main( void )
{
	// Receiving a number:
	int n;
	printf("Enter a number: ");
	
	scanf("%d", &n);
	
	

	// variables:
	int count = 0;
	int countFlag = 0;
	int max = 0;

	// loop until number equals zero
	// and in every loop delete 
	// the rightmost bit:
	   
	{
		// if the rightmost bit is one:
		if( n % 2 )
		{
			// set maximum:
			if( count > max ) 
				max = count;

			// restart count:
			count = 0;

			// raise the count flag:
			countFlag = 1;
		}
		// else if it's a zero and count flag
		// is raised, increment count:
		else if ( countFlag )
			count++;
	}

	printf("Max. number of zeros between two ones is %d\n", max);

	printf("\n");
	return 0;
}