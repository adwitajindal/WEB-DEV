#include <stdio.h>
#include <math.h>
int main()
{
    int v, u, a, t, H, b, p, c, S, T;
    u = 2;
    a = 8;
    t = 5;
    c = 3;
    b = 4;
    p = 6;
    v = u + (a * t);
    S = u * t + (a * t * t) / 2;
    T = 2 * a + sqrt(b + 9 * c);
    H = sqrt(b * b + p * p);
    printf("the value of v is %d \n", v);
    printf("the value of S is %d \n", S);
    printf("the value of T is %d \n", T);
    printf("the value of H is %d \n", H);
}


