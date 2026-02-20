#include <stdio.h>

int main() {

    int n;
    int h;

    scanf("%d %d", &n, &h);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ok = 1;

    for (int j = 0; j < n; j++) {
        if (h >= arr[j]) {
            h += arr[j];
        } else {
            ok = 0;
            break;
        }
    }

    if (ok)
        printf("SIM\n");
    else
        printf("NAO\n");

    return 0;
}
