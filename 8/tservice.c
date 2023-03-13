/* wap to call telecome service*/
#include <stdio.h>

void main()
{
    int a, b;
    printf("\nWelcome to tele service\n\n");
    printf(" gujrati mate 1 dabavo\n");
    printf(" hindi ke liye 2 dabaye\n");
    printf(" for English press 3\n");
    printf(" your reply is ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("\n khata ni jankari mate ek dabavo 1 dabavo \n");
        printf(" tamara balance ni chakasani mate 2 dabavo \n");
        printf(" tamara any prasahno mate 3 dabavo \n");
        printf(" krupya koi pan ek pasand karo ");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nkhata ni mahiti mate  ");
            break;
        case 2:
            printf("\nkhata ma upalabdh balance mate");
            break;
        case 3:
            printf("\n koi pan  prashno na hal mate ");
            break;
        default:
            printf("\nkrupa kari ne sachi mahiti janva aapela number mathi number select karo ");
            break;
        }
        break;
    case 2:
        printf("\n aapke khate ki jankari ke liye 1 dabaye \n");
        printf("aapke khate ki uplabdh rashi ke liye 2 dabaye \n");
        printf("aapke  dusre prashno ke liye 3 dabaye \n");
        printf(" krupya koi number dale ");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nkhate ke jankari ke liye  ");
            break;
        case 2:
            printf("\n khate me bachi huyi rashi ke liye  ");
            break;
        case 3:
            printf("\nhamare custmer adhikari ke sath bat karne ke liye ");
            break;
        default:
            printf("\n aapne galat number enter kiya hai krupa sahi number dale  ");
            break;
        }
        break;
    case 3:
        printf("\n for your account details \n");
        printf(" for your check balance \n");
        printf(" for your others problem \n");
        printf("Choode any number");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\n for account details");
            break;
        case 2:
            printf("\n account pending balance ");
            break;
        case 3:
            printf("\n for the remaining balance  ");
            break;
        default:
            printf("\n you enter wrong details  ");
            break;
        }
        break;

    default:
        printf("wrong select..");
        break;
    }
}