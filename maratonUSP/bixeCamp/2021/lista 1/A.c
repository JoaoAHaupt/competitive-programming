#include <stdio.h>

int main() {
    int vezes;
    scanf("%d", &vezes);

    int arr[vezes];

    for (int i = 0; i < vezes; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[i] = a + b;
    }

    for (int i = 0; i < vezes; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
