#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET "\x1b[0m"

typedef struct
{
    char name[50];
    char email[30];
    char numero[14];

} contact;
int main()
{
    int choix, c, choix3;
    int i = 0;
    int number = 0;
    contact cont[50];
    char search[50];
    int found = 0;

here:
    printf(ANSI_COLOR_YELLOW " __________ Bienvenue au menu des contacts __________" ANSI_COLOR_RESET "\n\n");
    printf("s'il vous plis choisir votre choix : \n");
    printf("  1.Ajouter un contact \n");
    printf("  2.Modifier un contact \n");
    printf("  3.Suprimer un contact \n");
    printf("  4.Aficher tous les contact \n");
    printf("  5.Rechercher un contact ");
    printf("\n votre choix : ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf(ANSI_COLOR_GREEN "__________ LA PAGE D'AJOUTE __________" ANSI_COLOR_GREEN "\n\n- Entrer le nom : ");

        scanf(" %[^\n]s", &cont[number].name);
        printf("- Entrer le numero : ");
        scanf(" %[^\n]s", &cont[number].numero);
        printf("- Entrer le email : ");
        scanf("%s", &cont[number].email);
        number++;
        printf("\n\n      Ajoute avec succes         \n");
        goto here;
    case 2:

        printf(ANSI_COLOR_MAGENTA "__________ LA PAGE DE MODIFICATION __________" ANSI_COLOR_RESET "\n\n");
        printf("Ecriver le Nom de Contact \n Que vous souhaitez modifier : ");
        scanf("%s", search);
        for (int i = 0; i < number; i++)
        {
            if (strcmp(search, cont[i].name) == 0)
            {
                printf("le contacte : \n");
                printf("%s        %s        %s\n", cont[i].name, cont[i].numero, cont[i].email);
                printf("changer le numero de telephone : ");
                scanf("%s", &cont[i].numero);
                printf("changer l'adresse email : ");
                scanf("%s", &cont[i].email);
                printf("\n Modification avec succes ! \n");
                found = 1;
                break;
            }
        }
        if (found != 1)
        {
            printf("\nPardon ! il n'ya pas de contact avec ce nom (%s)!\n", search);
            goto here;
        }

    case 3:
        printf(ANSI_COLOR_RED "__________ LA PAGE DE BLOQUER/SUPRUMER LES CONTACTS __________" ANSI_COLOR_RESET " \n\n");
        printf("Ecriver le Nom de Contact \n Que vous souhaitez supremier : ");
        scanf("%s", search);
        for (int i = 0; i < number; i++)
        {
            if (strcmp(search, cont[i].name) == 0)
            {
                printf("le contacte : \n");
                printf("%s        %s        %s\n", cont[i].name, cont[i].numero, cont[i].email);
                printf("Vous Etes sur ? (1)\n");
                printf("Voulez vous signialer et \n suprimer en meme temps ? (2)\n");
                printf("Anuler l'opperation (3) \n");
                scanf("%d", &choix3);
                if (choix3 == 1)
                {
                    for (int l = 0; l < number; l++)
                    {
                        cont[i] = cont[i - 1];
                    }
                    number--;
                    printf("\n\n           Supression avec succes !\n\n");
                    found = 1;
                    goto here;
                }
                if (choix3 == 2)
                {
                    for (int l = 0; l < number; l++)
                    {
                        cont[i] = cont[i - 1];
                    }
                    number--;
                    printf("\n\n           Supression et signalement avec succes !\n\n");
                    found = 1;
                    goto here;
                }
                if (choix3 == 3)
                {

                    printf("\n\n       l'operation a ete annulee      !\n\n");
                }

                goto here;
            }
        }
        {
            if (found != 1)
            {
                printf("\nPardon ! il n'ya pas de contact avec ce nom (%s)!\n", search);
                goto here;
            }
        }
    case 4:
        printf(ANSI_COLOR_CYAN "__________ LA BOITES DES CONTACTS __________  " ANSI_COLOR_RESET "\n\n");
        for (int i = 0; i < number; i++)
        {
            printf("%s  %s   %s", cont[i].name, cont[i].numero, cont[i].email);
            printf("| Appeler | Texter | Apelle video\n");
        }
        printf("si tu veux returnee au menu taper 1(si non tapez un autre) : ");
        scanf("%d", &c);
        if (c == 1)
        {
            goto here;
        }
        else if (c != 0)
        {
            printf("_______________ AU REVOIR _______________!!\n");
            break;
        }
    case 5:
        printf(ANSI_COLOR_BLUE "__________ RECHERCHER UN CONTACT __________" ANSI_COLOR_RESET "  \n\n");
        printf("Ecrivez le Nom de contact que vous rechercher : ");
        scanf("%s", search);
        for (int i = 0; i < number; i++)
        {
            if (strcmp(search, cont[i].name) == 0)
            {
                printf("le contacte : \n");
                printf("%s        |        %s        |        %s\n", cont[i].name, cont[i].numero, cont[i].email);
                found = 1;
            }
        }
        if (found != 1)
        {
            printf("\nPardon ! il n'ya pas de contact avec ce nom (%s)!\n", search);
        }
        printf("si tu veux returnee au menu taper 1(si non tapez un autre) : ");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("\n\n\n\n");
            goto here;
        }
        else if (c != 0)
        {
            printf("_______________ AU REVOIR _______________!!\n");
            break;
        }
    default:
        break;
    }
}
