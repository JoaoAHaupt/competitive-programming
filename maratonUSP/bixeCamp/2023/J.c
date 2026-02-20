#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    float resultado = (a - b) / 2.0;
    printf("%.0f\n", round(resultado));

    return 0;
}
