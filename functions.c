#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int services (void)
{
int selection = 0;
    int value = 0;
    printf("AVAILABLE SERVICES\n");
    printf("1: ELECTRICITY\n");
    printf("2: CABLE TV\n");

    printf("Enter service: ");
    scanf("%d", &selection);

    if (selection == 1)
    {
        printf("\n");
        printf("ELECTRIC SERVICES\n");
        printf("1: Abuja Electric - AEDC\n");
        printf("2: Eko Electric - EKEDC\n");
        printf("3: Ibadan Electric - IBEDC\n");
        printf("4: Ikeja Electric - IKEDC\n");
        printf("5: Jos Electric - JEDC\n");
        printf("6: Kaduna Electric - KEDC\n");
        printf("7: Kano Electric - KEDCO\n");
        printf("8: Port Harcourt Electric - PHED\n");

        int choice = 0;
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            value = 72;  
            break;

            case 2:
            value = 67;
            break;

            case 3:
            value = 68;
            break;

            case 4:
            value = 66;
            break;

            case 5:
            value = 71;
            break;

            case 6:
            value = 70;
            break;

            case 7:
            value = 69;
            break;

            case 8:
            value = 17;
            break;

            default:
            printf("Invalid selection\n");
            exit (-1);
            break;
        }

    }

    else 
    if (selection == 2)
    {
        printf("\n");
        printf("CABLE TV SERVICES\n");
        printf("1: DSTV\n");
        printf("2: GOTV\n");
        printf("3: Star Times\n");

        int choice = 0;
        printf("Enter selection\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            value = 63;
            break;

            case 2:
            value = 64;
            break;

            case 3:
            value = 65;
            break;

            default:
            printf("Invalid entry\n");
            exit (-1);
            break;
        }
    }

    else
    {
        printf("Invalid entry\n");
        exit (-1);
    }
    
return value;
}

