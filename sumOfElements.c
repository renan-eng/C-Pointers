#include<stdio.h>
int SumOfElements(int* a, int size) // int* a or int a[] ...it's the same...
{ // there is no way to know the size of the array inside this function, 
  // because arrays are always colled by reference never by value
    int i, sum = 0;
    for(i=0;i<size;i++)
    {
        sum+=a[i]; // a[i] is *(a+i)
    }
    return sum;
}
int main()
{
    int a[]   = {1,2,3,4,5};
    int size  = sizeof(a)/sizeof(a[0]); // each element of the array has 4 bytes, so 4 * 5 = 20 bytes / 4 bytes = 5 elements  
    int total = SumOfElements(a, size); // a can be used for &a[0]
    printf("Sum of elements = %d\n", total); // total = 15
}