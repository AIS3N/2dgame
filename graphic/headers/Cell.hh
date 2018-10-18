#ifndef __CELL_H__
#define __CELL_H__

#include <SFML/Graphics.hpp>
#include <iostream>

class Cell
{
public:
  Cell();
  virtual ~Cell() = 0;
  virtual bool isWalkable() const = 0;
  virtual void draw(sf::RenderWindow&) const = 0;
};

#endif
