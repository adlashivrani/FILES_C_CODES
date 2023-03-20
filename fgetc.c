#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp = fopen("string.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	do { 
		char ch = fgetc(fp);
 		if (feof(fp))
            break;
        printf("%c", ch);
	} while (1);
	fclose(fp);
	return(0);
}
