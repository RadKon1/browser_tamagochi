#include "../include/player.h"
#include <stdexcept>

Player::Player(Bubble &bubble, Money startingMoney, double f, double b,
               double sh)
    : bubble(bubble), money(startingMoney), food(f), beer(b), shampoo(sh),
      energy(100) {}

bool Player::feedBubble(double foodAmount) {
  if (foodAmount < 0) {
    return false;
  }
  bubble.feed(foodAmount);
  return true;
}

bool Player::satiateBubble(double beerAmount) {
  if (beerAmount < 0) {
    return false;
  }
  bubble.drink(beerAmount);
  return true;
}

bool Player::setBubbleName(std::string newName) {
  for (auto x : newName) {
    if (!std::isalnum(x)) {
      return false;
    }
  }
  bubble.setName(newName);
  return true;
}

bool Player::cleanBubble(double shampooAmount) {
  if (shampooAmount < 0) {
    return false;
  }
  bubble.shower(shampooAmount);
  return true;
}

void Player::playWithBubble() { bubble.play(); }