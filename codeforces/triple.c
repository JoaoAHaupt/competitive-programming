#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int respostas[t]; // aqui vamos guardar todas as respostas

    for(int caso = 0; caso < t; caso++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int achou = -1;

        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = 0; j < n; j++) {
                if(a[i] == a[j]) count++;
            }
            if(count >= 3) {
                achou = a[i];
                break;
            }
        }

        respostas[caso] = achou;
    }

    for(int i = 0; i < t; i++) {
        printf("%d\n", respostas[i]);
    }

    return 0;
}
