#ifndef __DOOR2_H__
#define __DOOR2_H__

#include "Cell.hh"

class Door2 : public Cell
{
  int _x;
  int _y;
public:
  Door2(int, int);
  bool isWalkable() const;
  void draw(sf::RenderWindow&) const;
};

#endif
