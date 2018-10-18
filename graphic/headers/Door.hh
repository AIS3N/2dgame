#ifndef __DOOR_H__
#define __DOOR_H__

#include "Cell.hh"

class Door : public Cell
{
  int _x;
  int _y;
public:
  Door(int, int);
  bool isWalkable() const;
  void draw(sf::RenderWindow&) const;
};

#endif
