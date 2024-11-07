//C program to define a structure named employee
/*
application to declare a variable of the structure type and initialize it with the data
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:07/11/2024
*/

// Declare the structure 'employee'
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Create and initialize an 'employee' variable
    struct employee emp = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Show the values of each field
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
