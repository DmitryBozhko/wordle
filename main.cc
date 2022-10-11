#include <iostream>
#include <string>


int main() {
  wordle wordle;
  string answer;
  std::cout << "What is the answer";
  std::cin >> answer;
  wordle.setAnswer(answer);
  wordle.play();
}
