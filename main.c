#include <stdio.h>

int factorial(int n);
int big3(int a, int b, int c);
#execution started from main
int main() {
    // Factorial
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));

    // Largest of three numbers
    int a = 10, b = 25, c = 15;
    printf("Largest among %d, %d, %d is %d\n", a, b, c, big3(a, b, c));

    return 0;
}
