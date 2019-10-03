// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if a number is positive, negative or 0

#include <iostream>

int main() {
    // This program checks if a number is positive, negative or 0
    int number;

    // Input
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    // Process and Output
    if (number < 0) {
        std::cout << "-" << std::endl;
    } else if (number == 0) {
        std::cout << "0" << std::endl;
    } else if (number > 0) {
        std::cout << "+" << std::endl;
    }
}
