#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int nbr_alr = 0;
    int value = 0;
    srand (time (NULL));
    nbr_alr = rand() % 100;
    printf("Devinier le nombre\n");
    scanf("%d",&value);
 
    do
    {
       printf("Deviner le nombre mystère\n");
    scanf("%d",&value);
    if (value > nbr_alr)
        printf("Le nombre à deviner est plus petit\n");
    else if (value < nbr_alr)
        printf("Le nombre à deviner est plus grand\n");
    else
        printf("Bravo!!! vous avez trouvé le nombre mystère %d\n",nbr_alr);
    } while (nbr_alr != value);
    
    return 0;
}