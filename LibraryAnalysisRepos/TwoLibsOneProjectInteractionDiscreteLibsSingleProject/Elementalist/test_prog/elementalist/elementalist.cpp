#include "fire.h"
#include "water.h"

#include <iostream>

std::string get_shout(std::string shout) { return shout; }

void handle_elementalist_stuff() {
  std::cout << get_shout("Casting fire thingy!") << std::endl;
  std::cout << get_fire_spell() << std::endl;
  std::cout << "I'm not done yet." << std::endl;

  std::cout << get_shout("Casting water stuff!") << std::endl;
  std::cout << get_water_spell() << std::endl;
  std::cout << "Now I'm done." << std::endl;
}

int main(/* int argc, char *argv[] */) {
  // do stuff
  handle_elementalist_stuff();
  return 0;
}
