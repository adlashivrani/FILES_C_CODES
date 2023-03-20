#include <stdio.h>
#include <stdlib.h>
int main()
{
        FILE *fptr1;
        FILE *fptr2;
        char c;
        fptr1 = fopen("file1.txt", "r");
        if (fptr1 == NULL)
        {
                printf("Cannot open file \n");
                exit(0);
        }
        fptr2 = fopen("file2.txt", "a");
        if (fptr2 == NULL)
        {
                printf("Cannot open file\n");
                exit(0);
        }
        // Read contents from file
        c = fgetc(fptr1);
        while (c != EOF)
        {
                fputc(c,fptr2);
                c = fgetc(fptr1);
        }
        printf("\nContents copied to file2.txt");
        fclose(fptr1);
        fclose(fptr2);
        return 0;
}
