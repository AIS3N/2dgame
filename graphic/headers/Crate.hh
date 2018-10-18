#ifndef __CRATE_H__
#define __CRATE_H__

#include "Cell.hh"

class Crate : public Cell
{
  int _x;
  int _y;
public:
  Crate(int, int);
  bool isWalkable() const;
  void draw(sf::RenderWindow&) const;
};

#endif
