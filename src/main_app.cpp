#include "../include/main_app.h"

App::App(Player &p, Bubble &b) : player(p), bubble(b) {
  Timer foodT;
  Timer beerT;
  Timer boredomT;
  Timer showerT;

  foodT
      .setFunc([&]() {
        bubble.hungry();
        foodT.restart();
      })
      ->setInterval(10000)
      ->start();

  beerT
      .setFunc([&]() {
        bubble.thirsty();
        beerT.restart();
      })
      ->setInterval(10000)
      ->start();

  boredomT
      .setFunc([&]() {
        bubble.bored();
        boredomT.restart();
      })
      ->setInterval(10000)
      ->start();

  showerT
      .setFunc([&]() {
        bubble.dirty();
        showerT.restart();
      })
      ->setInterval(10000)
      ->start();
}