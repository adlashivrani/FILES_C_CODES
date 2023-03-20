#include <stdio.h>
#include <stdlib.h>
struct example
	{
		int x;
	};
int main()
{
	int i;
	FILE *pointer;
	struct example e;
	e.x = 10;
	pointer = fopen("example.bin","rb"); // Here "rd" denotes read binary file
	if(!pointer)
	{
		printf("Error! The file does not exist.");
		exit(0);
	}
    // for loop to display the value of e.x 5 times	
	fread(&e, sizeof(struct example),1 , pointer);
	printf("%d\n",e.x);
	fclose(pointer);
	return 0;
}
