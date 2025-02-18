/*Program to create a data file "student.txt" 
then store name and marks of n students in the data file 
and read data from file and display in a format.*/
#include <stdio.h>

int main() {
    char name[50];
    int marks, i, num;
    FILE *fptr;

    printf("Enter number of students: ");
    scanf("%d", &num);

    // Open file for writing
    fptr = fopen("student.txt", "w");
    if (!fptr) {
        printf("Error opening file!\n");
        return 1;
    }

    // Taking input and writing to file
    for (i = 0; i < num; ++i) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(fptr, "%s %d\n", name, marks);
    }
    fclose(fptr);

    // Open file for reading
    fptr = fopen("student.txt", "r");
    if (!fptr) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    while (fscanf(fptr, "%s %d", name, &marks) != EOF) {
        printf("Name: %s, Marks: %d\n", name, marks);
    }

    fclose(fptr);
    return 0;
}

