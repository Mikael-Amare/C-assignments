// Copyright (c) 2024 Mikael Amare. All rights reserved.
// Created by: Mikael Amare
// Date: May 2024
// This program is calculates the fibonacci sequence
// to given number of terms


#include <stdio.h>
#include <cs50.h>


int main() {
    int counter = 2;
    int numberOfTerms;

    // initialize first and second terms
    int fibbonacciNumber = 0;
    int fibbonacciNumber1 = 0;
    int fibbonacciNumber2 = 1;

    // get no. of terms from user
    numberOfTerms = get_int("Enter the number of terms: ");

    do {
        numberOfTerms = get_int("\nPlease enter a positive number: ");
    } while (numberOfTerms < 0);

        // print the first two terms
        if (numberOfTerms == 0) {
        printf("\nNo terms to print\n");
        printf("\nDone.\n");
    } else if (numberOfTerms == 1) {
        printf("\n0\n");
        printf("\nDone.\n");
    } else {

        printf("\n0");
        printf("\n1");

        // print 3rd to nth terms
        while (counter < numberOfTerms) {
            fibbonacciNumber = fibbonacciNumber1 + fibbonacciNumber2;
            fibbonacciNumber1 = fibbonacciNumber2;
            fibbonacciNumber2 = fibbonacciNumber;
            printf("\n%d", fibbonacciNumber);
            counter++;
        }

        printf("\n\nDone.\n");
    }

    return 0;
}
