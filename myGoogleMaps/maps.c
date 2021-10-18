// inclusion of three libraries needed to run the code below !
#include <stdio.h> // library used to run 'scanf' and 'printf
#include <cs50.h> // library used to facilitate the use of certain pieces of code
#include <string.h> // library for 'strcmp'

typedef struct // definition of a structure called "infos"
{
    string name, walkingtime, cyclingtime, drivingtime; // initialization of variables that will later contain information
    string kilometers1, kilometers2, kilometers3;
}
infos; // name of the container where the data is encapsulated

int main(int argc, char *argv[])
{
    infos city[3]; // Each element of this array will be a city

    // path between Dinard and Pleurtuit
    city[0].name = "Dinard";
    city[0].kilometers1 = "6.1";  // numbers of kilometers between by walking/cycling/driving
    city[0].walkingtime = "1H19"; // walking time between these twice cities by walk
    city[0].cyclingtime = "23";   // cycling time between these twice cities by bicycle
    city[0].drivingtime = "9";    // driving time between these twice cities by car

    // path between Dinard and Saint-Malo
    city[1].name = "Saint-Malo";
    city[1].kilometers1 = "8"; // numbers of kilometers by walking
    city[1].walkingtime = "1H45";
    city[1].kilometers2 = "10.4"; // numbers of kilometers by cycling/driving
    city[1].cyclingtime = "37";
    city[1].drivingtime = "15";

    // path between Pleurtuit and Saint-Malo
    city[2].name = "Pleurtuit";
    city[2].kilometers1 = "10.3"; // numbers of kilometers by walking
    city[2].walkingtime = "2h09";
    city[2].kilometers2 = "11.6"; // numbers of kilometers by cycling
    city[2].cyclingtime = "39";
    city[2].kilometers3 = "12"; // numbers of kilometers by driving
    city[2].drivingtime = "16";

    printf("Welcome to our trip management tool !\n"); // a message is advertised
    printf("---------------------\n"); // decoration
    printf("Do you want to see our cities in our database ?\n(yes or no)\n"); // a question is asked
    scanf("%s", argv[0]); // answer is entered

    if ((strcmp(argv[0], "Yes") == 0) || (strcmp(argv[0], "yes") == 0))
        // if the answer is yes, we continue the code
    {
        printf("There are three cities : %s, %s and %s\n", city[0].name, city[1].name, city[2].name);
        printf("---------------------\n");
    }
    else if ((strcmp(argv[0], "No") == 0) || (strcmp(argv[0], "no") == 0))
        // else if the answer is no, go to the next step
    {
        printf("Ok, let's go to the next step !\n");
        printf("---------------------\n");
    }

    printf("Where do you live ?\n");
    scanf("%s", argv[0]);

    if ((strcmp(argv[0], "Dinard") == 0) || (strcmp(argv[0], "dinard") == 0))
        // if the answer is Dinard then we validate
    {
        printf("OK you're living in %s, 35800, France.\n", argv[0]); // validation
        printf("---------------------\n");
        printf("How do you move around ?\n");
        scanf("%s", argv[0]);

        // if the answer is related to --WALKING--
        if (((strcmp(argv[0], "walking") == 0)) || (strcmp(argv[0], "Walking") == 0)
            || (strcmp(argv[0], "walk") == 0) || (strcmp(argv[0], "Walk") == 0))
        {
            printf("It's very healthy ! But to long ...\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[0].name, city[2].name);
            printf("2- %s and %s\n", city[0].name, city[1].name);
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Dinard and Pleurtuit
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0)) // if first choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[0].walkingtime, city[0].kilometers1);
                printf("---------------------\n");
            }
            // if between Dinard and Saint-Malo
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0)) // if 2nd choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[1].walkingtime, city[1].kilometers1);
                printf("---------------------\n");
            }
        }
        // else if the answer is related to --CYCLING--
        else if (((strcmp(argv[0], "cycling") == 0)) || (strcmp(argv[0], "Cycling") == 0)
                 || (strcmp(argv[0], "bike") == 0) || (strcmp(argv[0], "Bike") == 0)
                 || (strcmp(argv[0], "Bicycle") == 0) || (strcmp(argv[0], "bicycle") == 0))
            // if the answer is related to cycling
        {
            printf("It's very ecological for the planet !\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[0].name, city[2].name);
            printf("2- %s and %s\n", city[0].name, city[1].name);
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Dinard and Pleurtuit
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0)) // if first choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[0].cyclingtime, city[0].kilometers1);
                printf("---------------------\n");
            }

            // if between Dinard and Saint-Malo
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0)) // if 2nd choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[1].cyclingtime, city[1].kilometers2);
                printf("---------------------\n");
            }
        }

        // if the answer is related to --DRIVING--
        else if (((strcmp(argv[0], "driving") == 0)) || (strcmp(argv[0], "Driving") == 0)
                 || (strcmp(argv[0], "drive") == 0) || (strcmp(argv[0], "Drive") == 0)
                 || (strcmp(argv[0], "car") == 0) || (strcmp(argv[0], "Car") == 0))
            // if the answer is related to driving
        {
            printf("This is not good for the planet! But so many more personal benefits ...\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[0].name, city[2].name);
            printf("2- %s and %s\n", city[0].name, city[1].name);
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Dinard and Pleurtuit
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0)) // if first choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[0].drivingtime, city[0].kilometers1);
                printf("---------------------\n");
            }

            // if between Dinard and Saint-Malo
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0)) // if 2nd choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[1].drivingtime, city[1].kilometers2);
                printf("---------------------\n");
            }
        }
    }
    /*----------------------------------------------------------------------------------------------------------------------------------*/
    // else if it's Saint-Malo, do the same
    else if ((strcmp(argv[0], "Saint-Malo") == 0) || (strcmp(argv[0], "st-malo") == 0) || (strcmp(argv[0], "saint-malo") == 0))
        // else if the answer is Saint-Malo then we also validate
    {
        printf("OK you're living in %s, 35400, France.\n", argv[0]); // validation
        printf("---------------------\n");
        printf("How do you move around ?\n");
        scanf("%s", argv[0]);

        // if the answer is related to --WALKING--
        if (((strcmp(argv[0], "walking") == 0)) || (strcmp(argv[0], "Walking") == 0)
            || (strcmp(argv[0], "walk") == 0) || (strcmp(argv[0], "Walk") == 0))
        {
            printf("It's very healthy ! But to long ...\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[1].name, city[0].name); //  Saint-Malo and Dinard
            printf("2- %s and %s\n", city[1].name, city[2].name); // Saint-Malo and Pleurtuit
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Saint-Malo and Dinard
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0)) // if first choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[1].walkingtime, city[1].kilometers1);
                printf("---------------------\n");
            }
            // if between Saint-Malo and Pleurtuit
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0)) // if 2nd choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[2].walkingtime, city[2].kilometers1);
                printf("---------------------\n");
            }
        }
        // else if the answer is related to --CYCLING--
        else if (((strcmp(argv[0], "cycling") == 0)) || (strcmp(argv[0], "Cycling") == 0)
                 || (strcmp(argv[0], "bike") == 0) || (strcmp(argv[0], "Bike") == 0)
                 || (strcmp(argv[0], "Bicycle") == 0) || (strcmp(argv[0], "bicycle") == 0))
            // if the answer is related to cycling
        {
            printf("It's very ecological for the planet !\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[1].name, city[0].name); //  Saint-Malo and Dinard
            printf("2- %s and %s\n", city[1].name, city[2].name); // Saint-Malo and Pleurtuit
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Saint-Malo and Dinard
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0))
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[1].cyclingtime, city[1].kilometers2);
                printf("---------------------\n");
            }

            // Saint-Malo and Pleurtuit
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0))
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[2].cyclingtime, city[2].kilometers2);
                printf("---------------------\n");
            }
        }

        // if the answer is related to --DRIVING--
        else if (((strcmp(argv[0], "driving") == 0)) || (strcmp(argv[0], "Driving") == 0)
                 || (strcmp(argv[0], "drive") == 0) || (strcmp(argv[0], "Drive") == 0)
                 || (strcmp(argv[0], "car") == 0) || (strcmp(argv[0], "Car") == 0))
            // if the answer is related to driving
        {
            printf("This is not good for the planet! But so many more personal benefits ...\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[1].name, city[0].name); //  Saint-Malo and Dinard
            printf("2- %s and %s\n", city[1].name, city[2].name); // Saint-Malo and Pleurtuit
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Saint-Malo and Dinard
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0)) // if first choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[1].drivingtime, city[1].kilometers2);
                printf("---------------------\n");
            }

            // if between Saint-Malo and Pleurtuit
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0)) // if 2nd choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[2].drivingtime, city[2].kilometers3);
                printf("---------------------\n");
            }
        }
    }
    /*----------------------------------------------------------------------------------------------------------------------------------*/
    // else if it's Pleurtuit, do the same
    else if ((strcmp(argv[0], "Pleurtuit") == 0) || (strcmp(argv[0], "pleurtuit") == 0))
        // else if the answer is Pleurtuit then we validate too
    {
        printf("OK you're living in %s, 35730, France.\n", argv[0]);
        printf("---------------------\n");
        printf("How do you move around ?\n");
        scanf("%s", argv[0]);

        // if the answer is related to --WALKING--
        if (((strcmp(argv[0], "walking") == 0)) || (strcmp(argv[0], "Walking") == 0)
            || (strcmp(argv[0], "walk") == 0) || (strcmp(argv[0], "Walk") == 0))
        {
            printf("It's very healthy ! But to long ...\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[2].name, city[0].name); //  Pleurtuit and Dinard
            printf("2- %s and %s\n", city[2].name, city[1].name); // Pleurtuit and Saint-Malo
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Pleurtuit and Dinard
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0)) // if first choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[0].walkingtime, city[0].kilometers1);
                printf("---------------------\n");
            }
            // if between Pleurtuit and Saint-Malo
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0)) // if 2nd choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[2].walkingtime, city[2].kilometers1);
                printf("---------------------\n");
            }
        }
        // else if the answer is related to --CYCLING--
        else if (((strcmp(argv[0], "cycling") == 0)) || (strcmp(argv[0], "Cycling") == 0)
                 || (strcmp(argv[0], "bike") == 0) || (strcmp(argv[0], "Bike") == 0)
                 || (strcmp(argv[0], "Bicycle") == 0) || (strcmp(argv[0], "bicycle") == 0))
            // if the answer is related to cycling
        {
            printf("It's very ecological for the planet !\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[2].name, city[0].name); //  Pleurtuit and Dinard
            printf("2- %s and %s\n", city[2].name, city[1].name); //if between Pleurtuit and Saint-Malo
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Pleurtuit and Dinard
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0))
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[0].cyclingtime, city[0].kilometers1);
                printf("---------------------\n");
            }

            // if between Pleurtuit and Saint-Malo
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0))
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[2].cyclingtime, city[2].kilometers2);
                printf("---------------------\n");
            }
        }

        // if the answer is related to --DRIVING--
        else if (((strcmp(argv[0], "driving") == 0)) || (strcmp(argv[0], "Driving") == 0)
                 || (strcmp(argv[0], "drive") == 0) || (strcmp(argv[0], "Drive") == 0)
                 || (strcmp(argv[0], "car") == 0) || (strcmp(argv[0], "Car") == 0))
            // if the answer is related to driving
        {
            printf("This is not good for the planet! But so many more personal benefits ...\n\n");
            printf("Possible routes are twice\n1- %s and %s\n", city[2].name, city[0].name); //  Pleurtuit and Dinard
            printf("2- %s and %s\n", city[2].name, city[1].name); // Pleurtuit and Saint-Malo
            printf("---------------------\n");

            printf("Which one do you choose?\n(the first or the second)\n");
            scanf("%s", argv[0]);

            // if between Pleurtuit and Dinard
            if ((strcmp(argv[0], "first") == 0) || (strcmp(argv[0], "First") == 0) || (strcmp(argv[0], "1") == 0)) // if first choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[0].drivingtime, city[0].kilometers1);
                printf("---------------------\n");
            }

            // if between Pleurtuit and Saint-Malo
            else if ((strcmp(argv[0], "second") == 0) || (strcmp(argv[0], "Second") == 0) || (strcmp(argv[0], "2") == 0)) // if 2nd choice
            {
                printf("The travel time is %s minutes and %s kilometers.\n", city[2].drivingtime, city[2].kilometers3);
                printf("---------------------\n");
            }
        }
    }
    else
    {
        printf("NOT OK, you're city named %s isn't in our database\n", argv[0]);
        // otherwise it isn't one of the three, it is refused
        return 1;
    }
}