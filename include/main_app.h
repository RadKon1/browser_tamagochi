#pragma once
#include "bubble.h"
#include "player.h"
#include "timer.h"
#include <memory>
#include <vector>

class App {
private:
  Player &player;
  Bubble &bubble;
  std::vector<std::unique_ptr<Timer>> timers;

public:
  // here start all the timers...
  App(Player &p, Bubble &b);

  void startApp();
};