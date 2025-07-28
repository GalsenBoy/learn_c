#include <stdio.h>
#include <math.h>

int main(){
    char lettre = ' ';
    printf("Saisir une lettre\n");
    scanf("%s",&lettre);
    if (lettre == 'a' || lettre == 'A' || lettre == 'e' || lettre == 'E' || lettre == 'u' || lettre == 'U' || lettre == 'i' || lettre == 'I' || lettre == 'o' || lettre == 'O')
        printf("Lettre est une voyelle\n");
    else
        printf("Lettre est une consonne\n");
    return 0;
    
}