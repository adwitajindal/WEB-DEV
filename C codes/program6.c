#include <stdio.h>
int main()
{
    int var1, var2, var3;
    var1 = 10;
    var2 = 20;
    var3 = var1;
    var1 = var2;
    var2 = var3;
    printf("the value of first variable is %d \n", var1);
    printf("the value of second variable is %d \n", var2);

}



