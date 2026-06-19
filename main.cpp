#include "include/main_app.h"

int main(void) {

  Bubble bub;
  Player p1(bub, 1000, 100, 100, 100);
  Timer fT;
  Timer bT;
  Timer boT;
  Timer sT;

  App app(p1, bub, fT, bT, boT, sT);

  for (;;) {
  }

  return 0;
}
