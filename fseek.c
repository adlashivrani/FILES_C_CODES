#include <stdio.h>
#if 0
int main()
{
	FILE *fp;
	fp = fopen("program.txt", "r");
	// Moving pointer to end
	fseek(fp, 0, SEEK_END);
	// Printing position of pointer
	printf("%ld", ftell(fp));
	return 0;
}
#endif
#if 0
// C Program to demonstrate the use of fseek()
int main()
{
	FILE *fp;
	fp = fopen("program.txt", "r");
	// Moving pointer to end
	fseek(fp, 0, SEEK_SET);
	// Printing position of pointer
	printf("%ld", ftell(fp));
	return 0;
}
#endif
#if 1
int main()
{
	FILE *fp;
	fp = fopen("program.txt", "r");
	// Moving pointer to end
	fseek(fp, 12, SEEK_CUR);
	// Printing position of pointer
	printf("%ld", ftell(fp));
	return 0;
}
#endif
