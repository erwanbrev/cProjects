#include <stdio.h>
#include <math.h>
int main(void)
{
    float AB, BC, hypo, hypoCarre;
    printf("Quelle est la longueur de AB ?");
    scanf("%f", &AB);
    printf("Quelle est la longueur de BC ?");
    scanf("%f", &BC);
    hypoCarre = (AB * AB) + (BC * BC); // calcul de l'hypothenuse
    hypo = sqrt(hypoCarre); // racine carre de l'hypothenuse
    printf("La longueur hypo : %f\n", hypo);
}