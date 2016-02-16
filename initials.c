#include <stdio.h>

int main (int argc, char *argv[]) 
{
	char intitals[2];


	if (argc == 1) {
		return 1;
	}

	for (int i = 1, j = 0; i < argc; i++, j++) {
		intitals[j] = argv[i][0];
	}

	printf("\n%c\n%c\n", intitals[0], intitals[1]);

	return 0;
}


/************************************************************************
						INPUT AND OUTPUT C

* scanf: returns the number of charcaters matched
* however, when scannig over and over the last input remains in the buffer so when scanf checks
* it will see the same thing over and over, untill you flush the buffer with fflush(stdin)
* fgets gets the line untill enter or untill the 2nc paramntes (length) is reached
* sscanf(line from fgets, to match, to store in ): returns the number of matches from middle parm
********/