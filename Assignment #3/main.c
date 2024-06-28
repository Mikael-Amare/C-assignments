// Copyright (c) 2024 Mikael Amare All rights reserved
// Created by: Mikael Amare
// Created on: Mar 2024
// This program checks if the triagnle is equilateral, isocoles, or scalene.

#include <stdio.h>

int main() {
    // This program checks if the triagnle is equilateral, isocoles, or scalene.

    int side1;
    int side2;
    int side3;

    // input
    printf("Please enter the sidelength: ");
    scanf("%d", &side1);

    printf("Please enter the second sidelength: ");
    scanf("%d", &side2);

    printf("Please enter the third sidelength: ");
    scanf("%d", &side3);

    // process
    if (side1 == side2 && side2 == side3) {
        printf("\nIt is an equilateral.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("\nIt is an isosceles.\n");
    } else {
        printf("\nIt is a scalene.\n");
    }

    printf("\nDone.\n");

    return 0;
}
