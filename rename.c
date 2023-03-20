#include<stdio.h>
int main()
{
	int success = 0;
	success = rename("hello.txt", "hell.txt");
	if ( success != 0) {
		printf("\n file is not renamed");
	}  else {
		printf("File is renamed\n");
	}
	return 0;
}
