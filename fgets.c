#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
	char string[100];
	FILE *fptr;
	if((fptr = fopen("string.txt", "w")) == NULL)
	{
		printf("Error!");
		exit(0);
	}
	printf("Enter a string: ");
	fgets(string, SIZE, stdin);
	fprintf(fptr,"%s", string);
	fclose(fptr);
	return 0;
}
