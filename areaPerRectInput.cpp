// Copyright (c) 2025 Angel All rights reserved.
// Created by: Angel
// Date: Feb.24,2025
// This program calculates the area and perimeter of a rectangle with dimensions of 2cm X 2cm.

#include <iostream>

int main() {
    // declare the variable first in C++
    int length = 2;
    int width = 2;

    std::cout << "If a  rectangle has the dimensions: ";
    std::cout << length << " x " << width << std::endl;
    std::cout << "Area is: " << length*width << std::endl;
    std::cout << "Perimeter is: " << (2 * (length + width)) << "cm" << std::endl;

}