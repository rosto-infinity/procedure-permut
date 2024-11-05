#include <stdio.h>

// Fonction pour échanger les valeurs de deux entiers
void permut(int *a, int *b) {
    int temp = *a; // Stocker la valeur de a dans temp
    *a = *b;       // Affecter la valeur de b à a
    *b = temp;     // Affecter la valeur de temp (ancien a) à b
}

// Fonction principale pour tester la fonction permut
int main() {
    int a, b;

    // Saisir les valeurs de a et b
    printf("Saisir la valeur de a : ");
    scanf("%d", &a);
    printf("Saisir la valeur de b : ");
    scanf("%d", &b);

    // Afficher les valeurs avant permutation
    printf("Avant permutation : a = %d, b = %d\n", a, b);

    // Appeler la fonction permut
    permut(&a, &b);

    // Afficher les valeurs après permutation
    printf("Après permutation : a = %d, b = %d\n", a, b);

    return 0; // Fin du programme
}
