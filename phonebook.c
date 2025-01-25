#include <stdio.h>
#include <string.h>

struct info
{
    char name[50];
    char number[50];
};

void list(int cont_count, char n[], struct info person[])
{

    printf("\n\t--------------- Contact List -------------------\n");
    printf("\t| %-3s | %-20s | %-15s |\n", "No", "Name", "Number");
    printf("\t-------------------------------------------------\n");
    for (int i = 0; i < cont_count; i++)
    {
        printf("\t| %-3d | %-20s | %-15s |\n", i + 1, person[i].name, person[i].number);
    }
    printf("\t-------------------------------------------------\n");
}

int main()
{
    struct info person[30];
    int contact_count = 3, i;

    // Already saved contacts
    strcpy(person[0].name, "parnavo");
    strcpy(person[0].number, "9831723515");

    strcpy(person[1].name, "Nilkantha");
    strcpy(person[1].number, "9273938383");

    strcpy(person[2].name, "buli");
    strcpy(person[2].number, "6291673836");

    int choise, open;
    char nam[50];

    printf("\n\t-------you have two options-------\n");
    printf("\n");
    printf("\t1. create new contact \n\t2. search for contact\n\t3. contact list\n");
    printf("\n");
    printf("\tif you want to create new contact type 1 and hit enter\n");
    printf("\tif you want to search for some saved contact type 2 and hit enter...");
    printf("\n\tif you want to open phone number list type 3 and hit enter...");
    printf("\n");
    printf("\n");

    printf("\tso what do you choose ? : ");
    scanf("%d", &choise);
    printf("\n");

    if (choise == 1)
    {
        printf("\t---------creating new contact---------");
        printf("\n\tEnter the name of the person: ");
        scanf("%s", person[contact_count].name);
        printf("\n\tEnter the number of the person: ");
        scanf("%s", person[contact_count].number);
        printf("\n\t-------Number is successfully saved---------\n\n");

        contact_count++;

        printf("\tnow do you want to see your contact list ?? \n\tif yes, press_4\n \tif not, enter 3\n");
        printf("\n\tso what do you choose ? :");
        scanf("%d", &open);
        printf("\n");

        if (open == 4)
        {
            list(contact_count, nam, person);
        }
        else if (open == 3)
        {
            printf("\n\t----------------- thank you for using phonebook.c -----------------");
        }
        else
        {
            printf("\n\t------------ invalid choice -------------\n");
        }
    }

    else if (choise == 2)
    {
        printf("\n\t------------------ search mode ---------------------\n");
        printf("\n\twhat is the contact name you are looking for ?:");
        scanf("%s", nam);
        for (i = 0; i < contact_count; i++)
        {
            if (strcmp(person[i].name, nam) == 0)
            {
                printf("\n\tnumber is:%s", person[i].number);
                return 0;
            }
        }
        printf("\n\t............ not found ...............");
        return 1;
    }

    else if (choise == 3)
    {
        list(contact_count, nam, person);
    }
}
