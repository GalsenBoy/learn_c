#include <stdio.h>
#include <math.h>

int main(){
    int a,b,lhypo;
    a = 0;
    b=0;
    lhypo=0;
    printf("Saisir la valeur de a\n");
    scanf("%d",&a);
    printf("Saisir la valeur de b\n");
    scanf("%d",&b);
    lhypo = sqrt((a*a)+(b*b));
    printf("La longueur de l'hypoténuse vaut %d\n",lhypo);
    return 0;
}