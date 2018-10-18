#ifndef __TRAP_H__
#define __TRAP_H__

#include "Cell.hh"

class Trap : public Cell
{
  int _x;
  int _y;
public:
  Trap(int, int);
  bool isWalkable() const;
  void draw(sf::RenderWindow&) const;
};

#endif
