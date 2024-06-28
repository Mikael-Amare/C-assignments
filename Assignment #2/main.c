// Copyright (c) 2024 Mikael Amare All rights reserved
//
// Created by: Mikael Amare
// Created on: Mar 2024
// This program calculates the area of a triangle
//    with height and base inputted from the user.

#include <stdio.h>

int main() {
    // this function calculates the area of a tringle with user given dimensions
    // Declarations
    double baseLength;
    double height;
    double area;

    // input
    printf("\nEnter the height of your triangle (cm): ");
    scanf("%le", &height);

    printf("Enter the base length of your triangle (cm): ");
    scanf("%le", &baseLength);

    // process
    area = (baseLength * height) / 2;

    // output
    printf("\nThe area of the triangle would be %.2f cm².\n", area);
    printf("\nDone.\n");

    return 0;
}
