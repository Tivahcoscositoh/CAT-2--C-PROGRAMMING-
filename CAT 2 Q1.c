//program to define a structure named employee that contains different fields and declare ans initialize employee variable 
/*
AUTHOR:TIVA JEPKOSGEI 
REG NO:CT101/G/23447/24
DATE:7/11/24
*/

#include <stdio.h>
#include <string.h>

// Define the employee structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize an employee variable
    struct employee emp = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Print the employee details
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
    