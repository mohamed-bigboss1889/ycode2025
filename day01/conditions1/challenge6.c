#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    if (n > 0) printf("Positif\n");
    else if (n < 0) printf("Negatif\n");
    else printf("Nul\n");
    return 0;
}
