#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name[255];

	printf("Enter your name: ");
	fgets(name, 255, stdin);

	printf("Hello, %s!\n", name);
	return 0;
}