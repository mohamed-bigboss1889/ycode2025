#include <stdio.h>

int main() {
    int annee, choix;
    printf("Entrez une annee : ");
    scanf("%d", &annee);
    printf("1-Mois\n2-Jours\n3-Heures\n4-Minutes\n5-Secondes\n");
    scanf("%d", &choix);
    switch(choix) {
        case 1: printf("%d mois\n", annee*12); break;
        case 2: printf("%d jours\n", annee*365); break;
        case 3: printf("%d heures\n", annee*365*24); break;
        case 4: printf("%d minutes\n", annee*365*24*60); break;
        case 5: printf("%d secondes\n", annee*365*24*60*60); break;
        default: printf("Choix invalide\n");
    }
    return 0;
}
