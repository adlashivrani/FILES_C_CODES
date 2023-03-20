#include<stdio.h>
#include<stdlib.h>
#include"struct.h"
int main()
{ 	
	struct employee *emp = (struct employee *) malloc(4 * sizeof(struct employee));
	printf("\nEnter Name:\n");
	scanf("%s", &emp->ename);
	printf("\nEnter age:\n");
	scanf("%d", &emp->age);
	printf("\nEnter salary:\n");
	scanf("%lf", &emp->salary);
	printf("\nEnter empid:\n");
	scanf("%d", &emp->empid);
	FILE *fp = fopen("employee.txt", "w+");
	if (fp == NULL) {
		printf("ERROR!");
		exit(1);
	}
	/*fprintf(fp,"%s\n",e.ename);
	fprintf(fp,"%d\n",e.age);
	fprintf(fp,"%lf\n",e.salary);
	fprintf(fp,"%d\n",e.empid);
	fprintf(fp,"%s",emp);*/
	fwrite(emp, sizeof(struct employee), 1, fp);
	if ( fwrite != 0) {
		printf("structures were written to the file");
	} else {
		printf("Error writing to the file");
	}
	printf("Data inserted into the file:");
	//fread(&emp, sizeof(struct employee), 1, fp);
	//printf("\nEmployee name: %s\nAge : %d\nSalary: %lf\nEmpId: %d\n", emp->ename, emp->age, emp->salary, emp->empid);
	fclose(fp);
	free(emp);
	emp = NULL;
	return 0;
}
