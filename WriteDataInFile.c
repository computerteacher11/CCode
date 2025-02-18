/*C program to enter an employee's ID, name, and post, 
store them in existing file named "emp.txt", and 
then display the stored records.*/
#include <stdio.h>

int main() {
    FILE *file;
    int id;
    char name[50], post[50];

    // Writing to file
    file = fopen("emp.txt", "a");    
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);
    
    printf("Enter Employee Post: ");
    scanf("%s", post);

    fprintf(file, "%d %s %s", id, name, post);
    fclose(file);
    
    // Reading from file
    file = fopen("emp.txt", "r");
    if (!file) return 1;
    
    printf("\nEmployee Records:\nID\tName\tPost\n");
    while (fscanf(file, "%d %s %s", &id, name, post) != EOF) {
        printf("%d\t%s\t%s\n", id, name, post);
    }
    fclose(file);

    return 0;
}

