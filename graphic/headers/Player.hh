#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Unit.hh"

class Player : Unit
{
  std::string   _name;
  int           _win;
public:
  Player(int, int, std::string, int);
  const std::string& getName() const;
  void draw(sf::RenderWindow&) const;
  virtual void SetX(bool);
  virtual void SetY(bool);
  virtual void SetX(int);
  virtual void SetY(int);
  int GetX() const;
  int GetY() const;
  int  GetWin() const;
  void SetWin();
};

#endif
