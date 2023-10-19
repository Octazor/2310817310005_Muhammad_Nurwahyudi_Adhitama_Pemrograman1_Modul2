#include <stdio.h>

int main() {

    double a, b, i, j, x, y;

    scanf("%lf", &a);

    scanf("%lf", &b);

    scanf("%lf", &i);

    scanf("%lf", &j);

    scanf("%lf", &x);

    scanf("%lf", &y);

    double hasil = (a - b) * (i / j) - (x + y);

    printf("%.3lf\n", hasil);

    return 0;
}
