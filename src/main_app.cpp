#include "../include/main_app.h"

App::App(Player &p, Bubble &b) : player(p), bubble(b) {
  Timer foodT;
  Timer beerT;
  Timer boredomT;
  Timer showerT;

  foodT
      .setFunc([&]() {
        bubble.hungry();
        std::cout << "hungry test";
        foodT.restart();
      })
      ->setInterval(10000)
      ->start();

  beerT
      .setFunc([&]() {
        bubble.thirsty();
        std::cout << "beer test";
        beerT.restart();
      })
      ->setInterval(10000)
      ->start();

  boredomT
      .setFunc([&]() {
        bubble.bored();
        std::cout << "bored test";
        boredomT.restart();
      })
      ->setInterval(10000)
      ->start();

  showerT
      .setFunc([&]() {
        bubble.dirty();
        std::cout << "dirty test";
        showerT.restart();
      })
      ->setInterval(10000)
      ->start();
}