// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: March. 23, 2022
//  This program asks the user for a number 1-9
// then if check if they guessed it right or wrong
// and tell them the right number


#include <iostream>
#include <cmath>


int main() {
// const for the number
  const int THE_NUMBER = 5;

// ask user for the a number between 1-9
  std::cout << "guess a number between 1-9 ";
  int right_number;
  std::cin >> right_number;

// line space
  std::cout << "" << std::endl;

// check if they guess the number right

  if (right_number == THE_NUMBER) {
      std::cout << "You guessed the right number!" << std::endl;
  } else {
      std::cout << "You guessed the wrong number.The right number was "
      << THE_NUMBER << std::endl;
  }
  }
