// write a program in c with the help of function that calculate the customer wise cost and total cost against the shirt purchased by the customer
// the program also print the customer id
// cost of 1 shirt is 500/-

#include <stdio.h>

#define SHIRT_COST 500

float calculate_cost(int customer_id, int number_of_shirts)
{
    float total_cost = SHIRT_COST * number_of_shirts;
    printf("-----------------------------------------------------------\nCustomer ID: %d, Cost: %.2f\n\n", customer_id, total_cost);
    return total_cost;
}

int main()
{
    int customer_id, number_of_shirts;
    float total_cost = 0;

    printf("Enter the number of customers: ");
    int number_of_customers;
    scanf("%d", &number_of_customers);

    for (int i = 1; i <= number_of_customers; i++)
    {
        printf("Enter customer ID %d: ", i);
        scanf("%d", &customer_id);
        printf("Enter number of shirts for customer %d: ", i);
        scanf("%d", &number_of_shirts);

        total_cost += calculate_cost(customer_id, number_of_shirts);
    }

    printf("-----------------------------------------------------------\nTotal cost of all customers: %.2f\n-----------------------------------------------------------\n\n", total_cost);

    return 0;
}
