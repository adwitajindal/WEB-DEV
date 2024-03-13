/*
 WAP in C to calculate the overtime of 10 employees of an organization, if organization pays overtime Rs 500/- per hours to the employees.
 Input items are: number of employees and overtime for each employee.
*/

#include <stdio.h>
int main()
{

    float overtime_per_employee, pay_per_hour, total_pay;
    float overtime = 0;
    int i, no_of_employees;
    printf("Enter number of employees: ");
    scanf("%d", &no_of_employees);
    printf("Enter the value of payment per hour: ");
    scanf("%f",&pay_per_hour);
    printf("Enter overtime (in hrs) for each employee: \n");
    for (i = 1; i <= no_of_employees; i++)
    {
        printf("EMPLOYEE %d: ", i);
        scanf("%f", &overtime_per_employee);
        overtime += overtime_per_employee;
    }

    total_pay = pay_per_hour * overtime;
    printf("Total pay: %.2f ", total_pay);
}