#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
void main(int argc, char *argv[SIZE])
{
	int i;
	int sum = 0;
	printf("Argument count: %d\n", argc);
	printf("Filename: %s\n", argv[0]);
	for ( int i = 1; i < argc; i++) {
		printf("Argument %d is %s\n", i, argv[i]);
	}
	for ( int i = 1; i < argc; i++) {
		sum += atoi(argv[i]);
	}
	printf("SUM: %d\n", sum);
}
