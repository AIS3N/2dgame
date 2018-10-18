#include "../headers/Unit.hh"

Unit::Unit(int x, int y) : _x(x), _y(y)
{

}

int Unit::GetX() const
{
  return _x;
}

int Unit::GetY() const
{
  return _y;
}

void Unit::SetX(bool b)
{
  if (b)
    _x = _x + 80;
  else
  _x = _x - 80;
}

void Unit::SetY(bool b)
{
  if (b)
    _y = _y + 80;
  else
    _x = _x - 80;
}
