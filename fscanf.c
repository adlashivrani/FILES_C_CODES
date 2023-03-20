#include <stdio.h>
#include <stdlib.h>
int main()
{
	char character;
	FILE *fpointer;
	if ((fpointer = fopen("program.txt","r")) == NULL)
	{
		printf("Error! The file does not exist.");
		exit(0);
	}
	fscanf(fpointer,"%c", &character);
	printf("The character is: %c", character);
	fclose(fpointer);
	return 0;
}
