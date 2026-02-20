#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    char resposta[n][4];

    for(int i = 0; i < n; i++){
        int a, b, c, x, y;
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

        int dogs = (x > a) ? x - a : 0;
        int cats = (y > b) ? y - b : 0;

        if(dogs + cats <= c){
            sprintf(resposta[i], "YES");
        } else {
            sprintf(resposta[i], "NO");
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s\n", resposta[i]);
    }

    return 0;
}
