#include <stdio.h>
#include <stdlib.h>
#include"struct.h"

int main()
{
	struct employee emp;
    FILE *fp;
	char c;
    fp = fopen("employee.txt", "r");
    if (fp == NULL) {
		printf("Cannot open file \n");
        exit(0);
    }	
	fread(&emp, sizeof(struct employee), 1, fp);
	printf("Employee Name: %s\n", emp.ename);
	printf("Age: %d\n", emp.age);
	printf("Salary: %lf\n", emp.salary);
	printf("EmpID: %d\n", emp.empid);
    // Read contents from file
        /*c = fgetc(fp);
        while (c != EOF)
        {
			putchar(c);
			c = fgetc(fp);
        }*/
    fclose(fp);
    return 0;
}

