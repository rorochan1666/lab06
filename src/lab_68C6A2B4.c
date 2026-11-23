#include <stdio.h>

// TODO: write your code here
#define MAX_NUM_EMPLOYEE 3

struct Employee
{
    int   employeeID;
    char  name[50];
    float salary;
};

float averageSalary(struct Employee employee[])
{
    float total = 0.0f;
    int   i;

    for (i = 0; i < MAX_NUM_EMPLOYEE; i++)
    {
        total += employee[i].salary;
    }

    return total / MAX_NUM_EMPLOYEE;
}

int highestSalary(struct Employee employee[])
{
    int index = 0;
    int i;

    for (i = 1; i < MAX_NUM_EMPLOYEE; i++)
    {
        if (employee[i].salary > employee[index].salary)
        {
            index = i;
        }
    }

    return index;
}

// DO NOT change the code below
void fillInformation( struct Employee employees[] )
{
    for (int i=0; i<MAX_NUM_EMPLOYEE; i++)
    {
        printf("\nInput details for Employee:\n");
        printf("Employee ID: ");
        scanf("%d", &(employees[i].employeeID));
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &(employees[i].salary));
    }
}

void printEmployee( struct Employee employee )
{
    printf("\nEmployee with the Highest Salary:\n");
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Name: %s\n", employee.name);
    printf("Salary: %.2f\n", employee.salary);
}

#ifndef ___TEST___
int main() 
{
    struct Employee employees[3];
    int index_of_highest_salary = 0;

    fillInformation(employees);
    index_of_highest_salary = highestSalary(employees);
    printEmployee(employees[index_of_highest_salary]);
    printf("\nThe average salary = %.2f", averageSalary(employees));
    printf("\nThe size of the employees array = %d\n", sizeof(employees));
    return 0;
}
#endif
// DO NOT change the code above