#include <stdio.h>
#include <stdlib.h>
/*opening a file in write only mode*/
#if 0
int main()
{
   int num;
   FILE *fptr;
   if ((fptr = fopen("program.txt","w")) == NULL){
       printf("Error!");
   }
   printf("Enter a number:");
   scanf("%d", &num);
   fprintf(fptr,"%d", num);
   fclose(fptr); 
   return 0;
}
#endif
/*opening a file in read only mode*/
#if 1
int main()
{
   int num;
   FILE *fptr;
   if ((fptr = fopen("program.txt","r")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   fscanf(fptr,"%d", &num);
   printf("Value of n= %d ", num);
   fclose(fptr); 
   return 0;
}
#endif
/*opening a file in append mode*/
#if 0
int main()
{
   int num;
   FILE *fptr;
   if ((fptr = fopen("program.txt","a")) == NULL){
       printf("Error!");
   }
   printf("Enter a number:");
   scanf("%d", &num);
   fprintf(fptr,"%d", num);
   fclose(fptr);
   return 0;
}
#endif
