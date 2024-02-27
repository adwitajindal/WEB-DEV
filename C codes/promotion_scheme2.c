/*
    1 shirt + 1 pant = 10% discount
    2 shirt + 2 pant = 20% discount
    3 shirt + 2 pant = 30% discount
    3 shirt + 3 pant = 50% discount
    shirt price = 1000/-
    pant price = 1500/-
*/
#include <stdio.h>
void main()
{

    float price_of_shirt, price_of_pant, discount, no_of_shirt, no_of_pant, total_amount;
    price_of_shirt = 1000;
    price_of_pant = 1500;
    printf("Enter the no. of shirt: ");
    scanf("%f", &no_of_shirt);
    printf("Enter the no. of pant: ");
    scanf("%f", &no_of_pant);
    if (no_of_shirt == 1 && no_of_pant == 1)
    {
        discount = 0.1;
    }
    else if (no_of_shirt == 2 && no_of_pant == 2)
    {
        discount = 0.2;
    }
    else if (no_of_shirt == 3 && no_of_pant == 2)
    {
        discount = 0.3;
    }
    else if (no_of_shirt >= 3 && no_of_pant >= 3)
    {
        discount = 0.5;
    }
    else
    {
        printf("No valid discount");
    }
    printf("%.1f \n", discount);
    total_amount = ((no_of_shirt * price_of_shirt) + (no_of_pant * price_of_pant));
    total_amount -= total_amount * discount;
    printf("Total amount to be paid: %.2f", total_amount);
}
