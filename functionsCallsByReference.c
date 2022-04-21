#include<stdio.h>
void Increment(int *p)
{
    *p = (*p) + 1; // dereferecing p (value o a)
}
int main()
{
    int a = 10;
    Increment(&a);// call by reference
    printf("a = %d\n",a); // output = 11
}