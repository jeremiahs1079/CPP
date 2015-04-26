// CS 271 - lab assignment # 2
// coffee.c
// input month, year and price and ouput to screen the max and min
// price along with the month and year it occured
// Jeremiah Smith
// January 22, 2015

#include <stdio.h>

//forward declarations
void printMonth(int);

int main()
{
    //variable deceleration
    int month = 0, year = 0, maxMonth, maxYear, minMonth, minYear;
    float price, minPrice = 1000.00f, maxPrice = 0;
    
    //loop to gather input and test to see what the max and min price
    while(month >= 0)
    {
        scanf("%d %d %f", &month, &year, &price);

        if(price > maxPrice)
        {
            maxPrice = price;
            maxMonth = month;
            maxYear = year;
        }

        if(price < minPrice)
        {
            minPrice = price;
            minMonth = month;
            minYear = year;
        }
        
    }

    //printing maximum price and month
    printf("Maximum Price\t$%6.2f    ", maxPrice);
    printMonth(maxMonth);
    printf("%6d\n", maxYear);

    //printing min month
    printf("Minimum Price\t$%6.2f    ", minPrice);
    printMonth(minMonth);
    printf("%6d\n", minYear);

}

//function to print the month is word format
//input paramater is the value assigned to max or min month
void printMonth(int m)
{
     switch(m)
    {
        case 1:
            printf("%-10s", "January");
            break;
        case 2:
            printf("%-10s", "Febuary");
            break;
        case 3:
            printf("%-10s", "March");
            break;
        case 4:
            printf("%-10s", "April");
            break;
        case 5:
            printf("%-10s", "May");
            break;
        case 6:
            printf("%-10s", "June");
            break;
        case 7:
            printf("%-10s", "July");
            break;
        case 8:
            printf("%-10s", "August");
            break;
        case 9:
            printf("%-10s", "September");
            break;
        case 10:
            printf("%-10s", "October");
            break;
        case 11:
            printf("%-10s", "November");
            break;
        case 12:
            printf("%-10s", "December");
            break;
    }   
}
