#ifndef __MAP_H__
#define __MAP_H__

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Cell.hh"
#include "Floor.hh"
#include "Crate.hh"
#include "Trap.hh"
#include "Door.hh"
#include "Door2.hh"

class Map
{
protected:
  std::vector<std::vector<Cell*>>  _cells;

public:
  Map(std::vector<std::vector<Cell*>>);
  ~Map();
  Map(Map const& other);
  Map(Map&& other);
  Map& operator=(Map const &other);
  Map& operator=(Map&& other);
  void draw(sf::RenderWindow&) const;
  Cell* getCell(int, int);
};

#endif
