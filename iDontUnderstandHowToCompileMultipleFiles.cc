#include <iostream>
#include <string>

class wordle {
  public:
    void setAnswer (std::string answer){answer_ = answer;}
    void play (){
      std::string guess;
      int numGuesses = 0; 
      int finalGreen = 0; // Check the if the answer is right 
      for (int i = 0; i < 6; i++){
        std::cout << "Please Enter Guess\n";
        std::cin >> guess;
        int green = 0; // save the green letters cuz if green letters same as word size = win
        for (int i = 0; i < answer_.size(); i++){
          if (guess.at(i) == answer_.at(i)) {
            std::cout << guess.at(i) << " Green\n";
            green++;
          } else if (answer_.find(guess.at(i)) > answer_.size() || answer_.find(guess.at(i)) == 0) {
            std::cout << guess.at(i) << " Red\n";
          } else {
            std::cout << guess.at(i) << " Yellow\n";
          }
          if (green == answer_.size()){
            finalGreen = green;
            break;
          }
        }
        if (finalGreen == answer_.size()){
          finalGreen = green;
          break;
        }
      }
      numGuesses++;
      if (finalGreen == answer_.size()){
        std::cout << "You WON, It took you " << numGuesses << " guesses" << std::endl;
      } else {
        std::cout << "You LOST, The answer was " << answer_ << std::endl;
      }
    }
  private:
  std::string answer_;
};

int main()
{
  wordle wordle;
  std::string answer;
  std::cout << "What is the answer\n";
  std::cin >> answer;
  wordle.setAnswer(answer);
  wordle.play();
}
