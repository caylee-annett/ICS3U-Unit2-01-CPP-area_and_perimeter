// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program calculates the area and perimeter of a circle with
//    a radius of 15 mm

#include <iostream>
#include <cmath>

int main() {
// This function calculates the area and perimeter
    std::cout << "If a circle has a radius of 15 mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "The area is: " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "The perimeter is: " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
