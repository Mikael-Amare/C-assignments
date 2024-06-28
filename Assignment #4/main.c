// Copyright (c) 2024 Mikael Amare All rights reserved
// Created by: Mikael Amare
// Created on: Mar 2024
// This program identifies shape by number of sides given from user.

#include <stdio.h>
#include <cs50.h>

int main() {
    // This program assigns shape by number of sides(goes up to 20 sides).
    int numberOfSides;


    // input
    numberOfSides = get_int("Please enter the number of sides: ");

    // process
    if (numberOfSides == 3) {
        printf("This is a triangle.\n");
    } else if (numberOfSides == 4) {
        printf("This is a quadrilateral.\n");
    } else if (numberOfSides == 5) {
        printf("This is a pentagon.\n");
    } else if (numberOfSides == 6) {
        printf("This is a hexagon.\n");
    } else if (numberOfSides == 7) {
        printf("This is a heptagon.\n");
    } else if (numberOfSides == 8) {
        printf("This is a octagon.\n");
    } else if (numberOfSides == 9) {
        printf("This is a nonagon.\n");
    } else if (numberOfSides == 10) {
        printf("This is a decagon.\n");
    } else if (numberOfSides == 11) {
        printf("This is a hendecagon.\n");
    } else if (numberOfSides == 12) {
        printf("This is a dodecagon.\n");
    } else if (numberOfSides == 13) {
        printf("This is a tridecagon.\n");
    } else if (numberOfSides == 14) {
        printf("This is a tetradecagon.\n");
    } else if (numberOfSides == 15) {
        printf("This is a pentadecagon.\n");
    } else if (numberOfSides == 16) {
        printf("This is a hexadecagon.\n");
    } else if (numberOfSides == 17) {
        printf("This is a heptadecagon.\n");
    } else if (numberOfSides == 18) {
        printf("This is a octadecagon.\n");
    } else if (numberOfSides == 19) {
        printf("This is an enneadecagon.\n");
    } else if (numberOfSides == 20) {
        printf("This is a icosagon.\n");
    } else if (numberOfSides > 20) {
        printf("This is a circle.\n");
    } else {
        printf("This is an invalid shape.\n");
    }

    printf("\nDone.\n");


    return 0;
}
