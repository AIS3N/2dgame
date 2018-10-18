#ifndef __UNIT_H__
#define __UNIT_H__

#include <SFML/Graphics.hpp>
#include <iostream>

class Unit
{
protected:
  int   _x;
  int   _y;

public:
  Unit(int, int);
  virtual int GetX() const;
  virtual int GetY() const;
  virtual void SetX(bool);
  virtual void SetY(bool);
  virtual void draw(sf::RenderWindow&) const = 0;
};

#endif
