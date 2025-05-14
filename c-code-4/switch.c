#include <stdio.h>
int main() {
    // int day;
    // printf("Enter The (1-7) : ");
    // scanf("%d",&day);
    // switch (day) {
    //     case 1 :  printf("Monday");
    //     break;
    //     case 2 :  printf("Tuesday");
    //     break;
    //     case 3 : printf("Wednesday");
    //     break;
    //     case 4 : printf("Thursday");
    //     break;
    //     case 5 : printf("Friday");
    //     break;
    //     case 6 : printf("Saturday");
    //     break;
    //     case 7 : printf("Sunday");
    //     break;
    //     default: printf("Invalid");
    //     break;
    // }
    char day;
    printf("Enter The  : ");
    scanf("%c",&day);
    switch (day) {
        case 'm' :  printf("Monday");
        break;
        case 't' :  printf("Tuesday");
        break;
        case 'w' : printf("Wednesday");
        break;
        case 'T' : printf("Thursday");
        break;
        case 'f' : printf("Friday");
        break;
        case 's' : printf("Saturday");
        break;
        case 'S' : printf("Sunday");
        break;
        default: printf("Invalid");
        break;
    }
}