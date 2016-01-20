/* main.c */
#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
	char first[255], last[255];

	askname(first, last);
	printf("Hello, %s %s!\n", first, last);
	// In this line, in another branch I added a printf statement
	
 	return 0;
}