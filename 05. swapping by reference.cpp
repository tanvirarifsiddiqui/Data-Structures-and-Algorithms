#include<stdio.h>
#include<iostream>

void swapf(int &x, int &y){ // swapping by reference
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("Before swapping Value:\na: %d\nb: %d",a,b);
    swapf(a,b);
    printf("\nSwapped Value:\na: %d\nb: %d",a,b);

    return 0;
}


