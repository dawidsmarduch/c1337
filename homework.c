#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double delta, x1, x2;

    // input zmiennych
    printf("Podaj współczynniki funkcji kwadratowej a, b, c:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    // delta
    delta = b * b - 4 * a * c;

    // warunki dla pierwiastkow
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\n x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Tylko jedno rozwiązanie x = %.2f\n", x1);
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        printf("rozwiązanie z liczb zespolonych to %.2f + %.2fi i %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
