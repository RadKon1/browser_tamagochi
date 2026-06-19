#include "../include/main_app.h"

App::App(Player &p, Bubble &b, Timer &fT, Timer &bT, Timer &boT, Timer &sT)
    : player(p), bubble(b), foodT(fT), beerT(bT), boredomT(boT), showerT(sT) {

  foodT
      .setFunc([&]() {
        bubble.hungry();
        std::cout << "hungry test\n\n";
      })
      ->setInterval(TIME_PERIOD)
      ->start();

  beerT
      .setFunc([&]() {
        bubble.thirsty();
        std::cout << "beer test\n\n";
      })
      ->setInterval(TIME_PERIOD)
      ->start();

  boredomT
      .setFunc([&]() {
        bubble.bored();
        std::cout << "bored test\n\n";
      })
      ->setInterval(TIME_PERIOD)
      ->start();

  showerT
      .setFunc([&]() {
        bubble.dirty();
        std::cout << "dirty test\n\n";
      })
      ->setInterval(TIME_PERIOD)
      ->start();
}