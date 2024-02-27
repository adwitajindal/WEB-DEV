/* write a program in c to solve the following problem
a person goes to a tv shop to buy a model
price of every model is in dollars and person has cash in rupees
if price of model== money the person has in rupees he will buy that model
if he has 10% less money then also he can buy
if he has 20% less money he can consider to buy
if he has >20% less money he will not buy that*/
#include <stdio.h>
void main()
{
    float model_price, money_in_hand;
    printf("Enter the price of model (in $):");
    scanf("%f", &model_price);
    printf("Enter the money u have(in rupees):");
    scanf("%f", &money_in_hand);
    model_price = model_price * 82.97;
    
}