/*Program to create a data file "student.txt" 
then store name and marks of n students in the data file 
and display them in a format.*/

#include <stdio.h>

int main()

{

char name [50];

int marks, i, num;

printf("Enter number of students: ");

scanf("%d", &num);

FILE *fptr;

fptr= (fopen("student.txt", "w"));

for(i=0; i<num; ++i)

{

printf("Enter name:");

scanf("%s", name);

printf("Enter marks:");

scanf("%d", &marks);

fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
}
for(i=0;i<num;i++)
{
	printf("\nName: %s \nMarks=%d \n", name, marks);
}

fclose(fptr);

return 0;

}
