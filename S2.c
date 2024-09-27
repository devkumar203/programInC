#include<stdio.h>
int main(){
    int a = 4, b = 6;

    a = a + b;   
    b = a - b; 
    a = a - b;

    printf("After swapping the number of a :%d\n", a);
    printf("After swapping the number of b  :%d", b);
    return 0;
}