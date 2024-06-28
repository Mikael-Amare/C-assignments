// Copyright (c) 2024 Mikael Amare All rights reserved
//
// Created by: Mikael Amare
// Created on: Mar 2024
// This program calculates the area of a triangle
//    with height and base inputted from the user.

#include <stdio.h>
#include <cs50.h>

float areaCalculation(float height, float baseLength) {
    float area = (baseLength * height) / 2;

    return area;
}

int main() {
    // this function calculates the area of a tringle with user given dimensions
    // Declarations
    float baseLength;
    float height;
    float area;

    // input (added cs50 lib so it wont crash)
    baseLength = get_float("Enter the base length of your triangle: ");
    height = get_float("Enter the height of your triangle: ");

    // process
    area = areaCalculation(baseLength, height);

    // output
    printf("\nThe area of the triangle would be %.2f cm².\n", area);
    printf("\nDone.\n");

    return 0;
}
