#include <iostream>
#include <SFML/Graphics.hpp>
#include "game/Game.hh"

int main()
{
  sf::RenderWindow window(sf::VideoMode(560, 560), "The Veterans!");
  std::cout << "creation window" << std::endl;
  Game game(80, 80, "Dems");
  std::cout << "game est appelé" << std::endl;
  game.start(window);
  std::cout << "fin du jeu" << std::endl;
  return (0);
}
