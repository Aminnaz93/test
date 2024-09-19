#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

int main() {
    double sum = add(2.42, 3.23);
    printf("%f\n", sum);  // Utskrift av summan

    return 0;
} 