#include <stdio.h>

int main()
{
    int nombre1, nombre2;
    int pgcd = 1;  // Initialisation du PGCD à 1
	int i;
    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &nombre2);

    // Recherche du PGCD
    for (i = 1; i <= nombre1 && i <= nombre2; i++) {
        if (nombre1 % i == 0 && nombre2 % i == 0) {
            pgcd = i;
        }
    }

    printf("Le PGCD de %d et %d est : %d\n", nombre1, nombre2, pgcd);

    return 0;
}
