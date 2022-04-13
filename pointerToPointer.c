#include<stdio.h>
int main()
{
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p; // int** q é uma forma de delcarar um variável que irá apontar para outro ponteiro
    int*** r = &q; // int*** r é um ponteiro que aponta pra outro ponteiro sucessivamente
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",*(*q));
    printf("%d\n",*(*r));
    printf("%d\n",*(*(*r)));
    ***r = 10;
    printf("x = %d\n",x);
    **q = *p + 2;
    printf("x = %d\n",x);
    return 0;
}