#include <stdio.h>
#include <math.h>

int main() {
    double alpha;
    double z1, z2;

    printf("Enter value alpha (in radian): ");
    scanf("%lf", &alpha);


    double num_den = cos(alpha) + sin(alpha);
    if (fabs(num_den) < 1e-9) {
        printf("Error: Denominator for z1 is zero. z1 is undefined.\n");
        z1 = NAN;
    } else {
        z1 = num_den / num_den;
    }


    double two_alpha = 2.0 * alpha;
    double cos_2a = cos(two_alpha);
    if (fabs(cos_2a) < 1e-9) {
        printf("Error: cos(2*alpha) is zero. z2 is undefined.\n");
        z2 = NAN;
    } else {
        z2 = tan(two_alpha) + (1.0 / cos_2a);
    }

    printf("\nCalculation Results:\n");

    if (!isnan(z1)) {
        printf("z1 = %.10lf\n", z1);
    } else {
        printf("z1 = Undefined\n");
    }

    if (!isnan(z2)) {
        printf("z2 = %.10lf\n", z2);
    } else {
        printf("z2 = Undefined\n");
    }
    return 0;
}