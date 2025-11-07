#include <stdio.h>

int main() {
    int month;
    
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    
    switch(month) {
        case 1:  // January
            printf("31 days\n");
            break;
        case 2:  // February
            printf("28 or 29 days\n");
            break;
        case 3:  // March
            printf("31 days\n");
            break;
        case 4:  // April
            printf("30 days\n");
            break;
        case 5:  // May
            printf("31 days\n");
            break;
        case 6:  // June
            printf("30 days\n");
            break;
        case 7:  // July
            printf("31 days\n");
            break;
        case 8:  // August
            printf("31 days\n");
            break;
        case 9:  // September
            printf("30 days\n");
            break;
        case 10: // October
            printf("31 days\n");
            break;
        case 11: // November
            printf("30 days\n");
            break;
        case 12: // December
            printf("31 days\n");
            break;
        default:
            printf("Invalid month number! Please enter between 1-12\n");
    }
    
    return 0;
}
