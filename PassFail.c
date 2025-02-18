/*Write a C program to input the marks of five students
 in a subject and determine the 
 number of students who passed and failed.*/
#include <stdio.h>

int main() {
    int marks[5], i, pass = 0, fail = 0;
    
    // Input marks of 5 students
    printf("Enter marks of 5 students: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    
    // Check pass and fail count (Assuming pass mark is 40)
    for (i = 0; i < 5; i++) {
        if (marks[i] >= 40) {
            pass++;
        } else {
            fail++;
        }
    }
    
    // Print results
    printf("Number of students passed: %d\n", pass);
    printf("Number of students failed: %d\n", fail);
    
    return 0;
}

