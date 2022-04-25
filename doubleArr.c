#include<stdio.h>
void Double(int* a, int size) // int* a or int a[] ...it's the same...
{ // there is no way to know the size of the array inside this function, 
  // because arrays are always colled by reference never by value
    int i;
    for(i=0;i<size;i++)
    {
        a[i]=2*a[i]; // a[i] is *(a+i)
    }
}
int main()
{
    int a[]   = {1,2,3,4,5};
    int size  = sizeof(a)/sizeof(a[0]); // each element of the array has 4 bytes, so 4 * 5 = 20 bytes / 4 bytes = 5 elements  
    int i;
    Double(a,size);
    for(i=0;i<size;i++)
    {
        printf("%d ", a[i]); // 2,4,6,8,10
    }
}