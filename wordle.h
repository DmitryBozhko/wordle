#include <iostream>
#include <string>

class wordle {
  public:
    void setAnswer (string answer);{answer_ = answer}
    void play ();
  private:
    string answer_;
}
