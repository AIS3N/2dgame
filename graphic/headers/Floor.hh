#ifndef __FLOOR_H__
#define __FLOOR_H__

#include "Cell.hh"

class Floor : public Cell
{
  int _x;
  int _y;
public:
  Floor(int, int);
  bool isWalkable() const;
  void draw(sf::RenderWindow&) const;
};

#endif
