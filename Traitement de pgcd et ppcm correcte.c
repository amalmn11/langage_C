#include <stdio.h>

int pgcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int ppcm(int a, int b) {
    int result = (a * b) / pgcd(a, b);
    return result;
}

int main() {
    int a, b, PPCM;
    printf("Entrer deux nombres : ");
    scanf("%d %d", &a, &b);
    PPCM = ppcm(a, b);
    printf("Le PPCM de %d et %d est : %d\n", a, b, PPCM);
    return 0;
}

