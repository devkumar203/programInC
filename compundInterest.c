#include <stdio.h>
#include <math.h>

int main() {
    double A;
    double P = 5.0; 
    double r = 5.0 / 100; 
    int n = 2; 
    int t = 12; 


    A = P * pow((1 + r/n), n*t);
    printf("The amount after %d years is: %f\n", t, A);
    
    return 0;
}
