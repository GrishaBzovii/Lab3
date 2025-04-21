#include <stdio.h>
#include <math.h>

int main() {
    int s, t;
    double w;

    printf("Введіть ціле число s: ");
    scanf("%d", &s);
    printf("Введіть ціле число t: ");
    scanf("%d", &t);

    // Повна форма оператора розгалуження
    if  (s == -7) {
        w = 2 * s * t;
        printf("Результат w = %.2f\n", w);
    }
    else if (s == 7) {
        w = sqrt((double)s / t + 2 * s * t);
        printf("Результат w = %.2f\n", w);
    }
    else if (s > 7) {
        w = s * s + 2 * t;
        printf("Результат w = %.2f\n", w);
    }
    else {
        printf("Умова не передбачає обчислення для s = %d\n", s);
    }

    return 0;
}
