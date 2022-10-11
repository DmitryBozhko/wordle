#include "wordle.h"
#include <iostream>
#include <string>

void wordle::play(){
  std::string guess;
  int numGuesses = 0; 
  int finalGreen = 0; // Check the if the answer is right 
  for (int i = 0; i < 6; i++){
    std::cout << "Please Enter Guess\n";
    std::cin >> guess;
    int green = 0; // save the green letters cuz if green letters same as word size = win
    for (int i = 0; i < answer.size(); i++){
      if (guess.at(i) == answer.at(i)) {
        std::cout << guess.at(i) << " Green\n";
        green++;
      } else if (answer.find(guess.at(i)) > answer.size() || answer.find(guess.at(i)) == 0) {
        std::cout << guess.at(i) << " Red\n";
      } else {
        std::cout << guess.at(i) << " Yellow\n";
      }
      if (green == answer.size()){
        finalGreen = green;
        break;
      }
    }
    if (finalGreen == answer.size()){
      finalGreen = green;
      break;
    }
  }
  numGuesses++;
  if (finalGreen == answer.size()){
    std::cout << "You WON, It took you " << numGuesses << " guesses" << std::endl;
  } else {
    std::cout << "You LOST, The answer was " << answer << std::endl;
  }
}
