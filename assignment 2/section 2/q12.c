#include<stdio.h>

int main() {
    int month, year;

   
    printf("Enter year: ");
    scanf("%d",&year);

    printf("Enter month (1-12):");
    scanf("%d",&month);
    
 
    switch (month) {
        case 1: printf("Jan ---> Number of days: 31");
        break;
        case 3: printf("Mar---> Number of days: 31");
        break;
        case 5: printf("May---> Number of days: 31");
        break;
        case 7: printf("jully---> Number of days: 31");
        break;
        case 8: printf("aug---> Number of days: 31");
        break;
        case 10: printf("oct---> Number of days: 31");
        break;
        case 12: printf("dec---> Number of days: 31");
        break;
           

        case 4: printf("apr---> Number of days: 30");
        break;
        case 6: printf("Jun---> Number of days: 30");
        break;
        case 9: printf("sep---> Number of days: 30");
        break;
        case 11: printf("Nov---> Number of days: 30");
        break;

        case 2: 
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("Number of days: 29 (Leap Year"); 
            else
                printf("Number of days: 28");  
            break;

        default:
            printf("Invalid month input!"); 
    }

    return 0;
}
