#include<stdio.h>
void Increment(int a)
{
    a = a + 1;
    printf("Address of variable a in increment = %d\n",&a);
}
int main()
{
    int a = 10;
    Increment(a);// call by value
    printf("Address of variable a in main = %d\n",&a);
    printf("a = %d\n",a); // output = 10
}