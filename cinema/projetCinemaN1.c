#include <stdio.h>
#include <cs50.h>

// Niveau 1
typedef struct  // Initialisation des categories de films dans une structure "categorie"
{
    string filmCategorieEnfant, filmCategorieAdos, filmCategorieAdulte;
} categorie;

int main(void)
{
    categorie film[5][5]; // chaque element de ce tableau va etre un film, specifique a chaque categorie de film
    film[0][1].filmCategorieEnfant = "Oui-Oui";
    film[0][2].filmCategorieEnfant = "Cars";
    film[0][3].filmCategorieEnfant = "Shrek";

    film[1][1].filmCategorieAdos = "Dragons";
    film[1][2].filmCategorieAdos = "Nos etoiles contraires";
    film[1][3].filmCategorieAdos = "Divergente";

    film[2][1].filmCategorieAdulte = "Armageddon";
    film[2][2].filmCategorieAdulte = "Kingsman";
    film[2][3].filmCategorieAdulte = "John Wick";


    int age = get_int("Bonjour ! Quel age as-tu ?\n");
    if (age >= 2 && age < 11) // si la personne est agee de plus de 2 ans et a moins de 11 ans, elle peut voir les filmCategorieEnfant
    {
        printf("Tres bien donc tu as %d ans, tu peux aller voir les films %s, %s ou %s !\n", age,
               film[0][1].filmCategorieEnfant,
               film[0][2].filmCategorieEnfant,
               film[0][3].filmCategorieEnfant);
    }
    if (age >= 11 && age <= 17) // si la personne a entre 11 et 17 ans inclus, elle peut voir les filmCategorieAdos
    {
        printf("D'accord, l'adolescent(e) de %d printemps !\nTu as le droit d'aller voir les films %s, %s ou %s.\n", age,
               film[1][1].filmCategorieAdos,
               film[1][2].filmCategorieAdos,
               film[1][3].filmCategorieAdos);
    }
    else if (age >= 18 && age <= 100) // sinon si l'age est inclus entre 18 et 100 ans (esperance de vie, pour limiter l'age max)
    {
        printf("Enfin un majeur, et en plus de %d ans ! Fais toi plaisir et regarde %s, %s ou %s !\n", age,
               film[2][1].filmCategorieAdulte,
               film[2][2].filmCategorieAdulte,
               film[2][3].filmCategorieAdulte);
    }
}