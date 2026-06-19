#include "../include/bubble.h"
#include "constants.h"
#include <memory>
#include <string>

class Player {
private:
  Bubble &bubble;

  // resources
  double food;
  double beer;
  double shampoo;
  double energy;

  Money money;

public:
  Player(Bubble &bubble, Money startingMoney, double f, double b, double sh);
  bool feedBubble(double foodAmount);
  bool satiateBubble(double beerAmount);
  void playWithBubble();
  bool cleanBubble(double shampooAmount);

  bool setBubbleName(std::string newName);
};