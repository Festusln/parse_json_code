#include<stdio.h>
#include<string.h>

int services (void)
{
int selection = 0;
    int value = 0;
    printf("AVAILABLE SERVICES\n");
    printf("1: Abuja Electric - AEDC\n");
    printf("2: Eko Electric - EKEDC\n");
    printf("3: Ibadan Electric - IBEDC\n");
    printf("4: Ikeja Electric - IKEDC\n");
    printf("5: Jos Electric - JEDC\n");
    printf("6: Kaduna Electric - KEDC\n");
    printf("7: Kano Electric - KEDCO\n");
    printf("8: Port Harcourt Electric - PHED\n");
    printf("9: DSTV\n");
    printf("10: GOTV\n");
    printf("11: Star Times\n");

    printf("Enter Selection: ");
    scanf("%d", &selection);

    switch(selection)
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

    case 9:
    value = 63;
    break;

    case 10:
    value = 64;
    break;

    case 11:
    value = 65;
    break;


    default:
    printf("Invalid entry\n");
    break;

    }
    
return value;
}

