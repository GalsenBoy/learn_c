#include <stdio.h>
#include <math.h>
int main () {
    int a = 0;
    int b = 0;
    int s = 0;
    printf("Calculatrice :\n\n");
    printf("Valeur de a : \n");
    scanf("%d",&a);
    printf("\n");
    printf("Valeur de b : \n");
    scanf("%d",&b);
    s = a + b;
    printf("\nValeur de a + b : %d\n",s); /*Affichage de la somme*/
    getchar ();
    return 0;
}