/*
Assignment 4, Program Design, Problem Solving and Control Structures
Author: Matthew Anthony
Date: 6/23/22
*/

#include <stdio.h>
#include <stdlib.h>

//Part 1

int main()
{
    double time, temp, h, far;
    int hour, minute;

    //Obtaining hours and minutes since outage

    printf("Lets calculate the temperature of your freezer. How many hours have passed since the power outage?\n");
    scanf("%d", &hour);
    printf("and how many minutes have passed?\n");
    scanf("%d", &minute);

    //Converting hours and minutes to a double var

    time = hour + (double)(minute)/60;

    printf("It has been %.2lf hour(s) since the power outage, therefore:\n", time);

    //Calculating temp of freezer in C based on inputted time passed since outage

    temp = (4 * (time * 2 * 2) / (time + 2)) - 18;

    printf("the temperature of the freezer is around %.1lf degrees Celcius.\n", temp);

    //Converting the C to F

    far = (temp * (9 / 5) + 32);

    printf("That is equal to %lf degrees Fahrenheit.\n", far);

    //Is ice cream spoiled?

    if (temp > -10)
        {
        printf("Your ice cream is spoiled.\n");
        }
    else
        {
        printf("Your ice cream is still good!\n");
        }

    //Is poultry and meat spoiled?

    if (temp > 4.5)
    {
        printf("Your poultry and meat is spoiled, throw it away.\n");
    }
    else
    {
        printf("Your poultry and meat is still good!\n");
    }


        return 0;

}
