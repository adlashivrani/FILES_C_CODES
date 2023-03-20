#include <stdio.h>
#include <stdlib.h>
int main()
{
	char character;
	FILE *fpointer;
	fpointer = fopen("program.txt","w"); // Here "w" refers to write on file
	if(fpointer == NULL)
	{
		printf("Error! The file does not exist.");
		exit(0);
	}
	printf("Enter a character: ");
	scanf("%c",&character);
	fprintf(fpointer,"%c",character); // Use of fprintf() function
	fclose(fpointer);
	return 0;
}
