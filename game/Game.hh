#ifndef __GAME_H__
#define __GAME_H__

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "../graphic/headers/Map.hh"
#include "../graphic/headers/Player.hh"
#include "../graphic/headers/Unit.hh"
#include "../graphic/headers/Background.hh"

class Game
{
  Player* _player;
  Map*    _map;
public:
  Game(int, int, std::string);
  void start(sf::RenderWindow&);
  void move(std::string);
  bool canGo(int ,int);
  bool win();
  bool loose();
};

#endif
