//Exercice 4 : écrire un programmer qui permet
//d'écrire dans un fichier CSV,le modèle de la voiture
//et sa plaque d'immatriculation.

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //ouvre un fichier CSV
    FILE *file = fopen("phonebook35.csv", "a");
    //premier arg est le nom du fichier
    //deuxieme arg est soit r, soit w, soit a
    if (!file)
    {
        return 1;
    }

    //obtenir la marque de voiture et la plaque
    char *name = get_string("Marque : ");
    char *number = get_string("Plaque : ");

    //ecrire dans le fichier csv
    fprintf(file, "%s, %s\n", name, number);

    //fermer le fichier CSV
    fclose(file);
}
/*--------------------------------------------------------*/
//Exercice 3 : écrire un programme qui
//affiche le plus grand de trois entiers saisis.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int MAX = 0;

    printf("Saisie du 1er nombre :\n");
    scanf("%i", &number1);

    printf("Saisie du 2eme nombre :\n");
    scanf("%i", &number2);

    printf("Saisie du 3eme nombre :\n");
    scanf("%i", &number3);

    if (number1 > number2)
    {
        MAX = number1;
    }
    else if (number2 > number3)
    {
        MAX = number2;
    }
    else
    {
        MAX = number3;
    }
    printf("Le nombre le plus grand est : %i\n", MAX);
}



/*--------------------------------------------------------*/
//Exercice 2 : écrire un programme qui échange
//deux entiers saisis.
//afficher les entiers avant et après l'échange.
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 0;
    int b = 0;
    int tmp = 0;

    printf("Saisie a : ");
    scanf("%i", &a); // on saisie le premier entier
    printf("x : %i\n", a);

    printf("Saisie b : ");
    scanf("%i", &b); // on saisie le deuxieme entier
    printf("x : %i\n", b);

    printf("a vaut %i and b vaut %i\n", a, b);
    swap(&a, &b);
    printf("maintenant a vaut %i et b vaut %i\n", a, b);
}
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*--------------------------------------------------------*/
//Exercice 1 : écrire un programme qui saisit deux entiers
//et affiche leur produit.
#include<stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
    int a = 0;
    int b = 0;
    printf("Saisie 1 : ");
    scanf("%i", &a); // on saisie le premier entier
    printf("x : %i\n", a);

    printf("Saisie 2 : ");
    scanf("%i", &b); // on saisie le deuxieme entier
    printf("x : %i\n", b);

    printf("Produit : %i\n", a * b);
}