#include <stdio.h>
int main() 
{
  	FILE *fp = fopen("file.txt", "r");
  	int count = 0;
	int word = 0;
  	char ch;
  	while ((ch = fgetc(fp)) != EOF) {
    	if (ch == ' ' || ch == '\n') {//CHCEKS FOR NEW LINE OR SPACE CHARACTER
      		word = 0;
      		} else {
        	if (!word){
          	count++;
          	word = 1;
        	}
      	}
   	}
  	printf("%d", count);
	fclose(fp);
  	return 0;
}
