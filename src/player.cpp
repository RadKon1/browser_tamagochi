#include "../include/player.h"
#include <string>

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

std::ostream &operator<<(std::ostream &os, Player &p) {
  if (os.fail()) {
    return os;
  }
  os << "==== PLAYER STATISTICS ====" << std::endl
     << "Money: " + std::to_string(p.money) << std::endl
     << "Food: " + std::to_string(p.food) << std::endl
     << "Beer: " + std::to_string(p.beer) << std::endl
     << "Shampoo: " + std::to_string(p.shampoo) << std::endl
     << "Energy: " + std::to_string(p.energy) << std::endl;
  return os;
}

std::istream &operator>>(std::istream &is, Player &p) {
  //
  return is;
}