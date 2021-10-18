#include <stdio.h>
#include <cs50.h>

// Niveau 2
typedef struct  // Initialisation d'une categorie de films dans une structure "categorie"
{
    string filmCategorieAdulte;
} categorie;

int main(void)
{
    categorie film[1][4]; // chaque element de ce tableau va etre un film, specifique a chaque categorie de film

    film[0][1].filmCategorieAdulte = "The Shining";
    film[0][2].filmCategorieAdulte = "La Nonne";
    film[0][3].filmCategorieAdulte = "Conjuring";


    char age = get_char("Bonjour ! Tu as bien 20 ans ? (o ou n)\n"); // On questionne la personne sur son age

    if (age == 'o' || age == 'O') // si l'age est bien de 20 ans, alors on lui offre un choix film par film
    {
        printf("Super, nous avons une offre de films rien que pour toi. ");

        // propose le premier element du tableau*/
        char rep1 = get_char("Est-ce que %s t'interesses ? (o ou n)\n", film[0][1].filmCategorieAdulte);

        if (rep1 == 'o' || rep1 == 'O') // si rep positive alors laisser passer
        {
            printf("Super, voici ta place ! Bon film.\n");
        }
        else if (rep1 == 'n' || rep1 == 'N') // sinon si rep negative alors redirection vers autre proposition
        {
            printf("Tu n'as pas envie de voir %s.", film[0][1].filmCategorieAdulte);
            char rep2 = get_char("Est-ce que %s t'interesses ? (o ou n)\n", film[0][2].filmCategorieAdulte);

            if (rep2 == 'o' || rep2 == 'O')
            {
                printf("Super, voici ta place ! Bon film.\n");
            }
            else if (rep2 == 'n' || rep2 == 'N')
            {
                printf("Tu n'as pas envie de voir %s.", film[0][2].filmCategorieAdulte);
                char rep3 = get_char("Est-ce que %s t'interesses ? (o ou n)\n", film[0][3].filmCategorieAdulte);

                if (rep3 == 'o' || rep3 == 'O')
                {
                    printf("Super, voici ta place ! Bon film.\n");
                }
                else if (rep3 == 'n' || rep3 == 'N')
                {
                    printf("Tu n'as pas envie de voir %s. C'est inutile que tu sois venu, rentres chez toi !\n", film[0][3].filmCategorieAdulte);
                }
            }
        }
    }
    else if (age == 'n' || age == 'N')
    {
        printf("Dommage, tu rates de bons films d'horreurs...mais t'as pas l'age !\n");
    }

}