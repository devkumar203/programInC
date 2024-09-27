#include<stdio.h>
int main(){
    int a;
    printf("Enter the number to check weather it is even or odd:");
    scanf("%d", &a);

    if(a % 2==0){
        printf("Even number.");
    }else
    printf("Odd number.");
}