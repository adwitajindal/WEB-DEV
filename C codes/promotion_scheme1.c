/*
1 shirt - 1000/-  tax - 5%
1 pant - 1500/-   tax - 8%

1 shirt 1 pant ---> 1 shirt (FREE) tax has to be paid
2 shirt 1 pant ---> 1 shirt (FREE)
2 shirt 2 pant ---> 2 shirt (FREE)
>2 shirt >2 pant ---> 3 shirt (FREE)

total shirt:??
total pant:??
amount paid:??
*/
#include <stdio.h>
void main()
{
    int shirt, pant;
    float amount_paid, tax_shirt, tax_pant, shirt_price, pant_price;
    shirt_price = 1000;
    pant_price = 1500;
    tax_shirt = shirt_price * 0.05;
    tax_pant = pant_price * 0.08;
    printf("Enter No. of Shirts: ");
    scanf("%d", &shirt);
    printf("Enter No. of Pants: ");
    scanf("%d", &pant);
    if (shirt == 1 && pant == 1)
    {
        amount_paid = shirt * (shirt_price + tax_shirt) + pant * (pant_price + tax_pant);
        shirt += 1;
        amount_paid += tax_shirt;
        printf("TOTAL SHIRT: %d\n", shirt);
        printf("TOTAL PANT: %d\n", pant);
        printf("AMOUNT PAID: %.2f\n", amount_paid);
    }
    else if (shirt == 2 && pant == 1)
    {
        amount_paid = shirt * (shirt_price + tax_shirt) + pant * (pant_price + tax_pant);
        shirt += 1;
        printf("TOTAL SHIRT: %d\n", shirt);
        printf("TOTAL PANT: %d\n", pant);
        printf("AMOUNT PAID: %.2f\n", amount_paid);
    }
    else if (shirt == 2 && pant == 2)
    {
        amount_paid = shirt * (shirt_price + tax_shirt) + pant * (pant_price + tax_pant);
        shirt += 2;
        printf("TOTAL SHIRT: %d\n", shirt);
        printf("TOTAL PANT: %d\n", pant);
        printf("AMOUNT PAID: %.2f", amount_paid);
    }
    else if (shirt > 2 && pant > 2)
    {
        amount_paid = shirt * (shirt_price + tax_shirt) + pant * (pant_price + tax_pant);
        shirt += 3;
        printf("TOTAL SHIRT: %d\n", shirt);
        printf("TOTAL PANT: %d\n", pant);
        printf("AMOUNT PAID: %.2f\n", amount_paid);
    }
    else
    {
        amount_paid = shirt * (shirt_price + tax_shirt) + pant * (pant_price + tax_pant);
        printf("TOTAL SHIRT: %d\n", shirt);
        printf("TOTAL PANT: %d\n", pant);
        printf("AMOUNT PAID: %.2f\n", amount_paid);
    }
}