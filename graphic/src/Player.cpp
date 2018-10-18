#include "../headers/Player.hh"

Player::Player(int x, int y, std::string name, int win) : Unit(x, y), _name(name), _win(win)
{
  std::cout << "construction player" << std::endl;
}

const std::string&  Player::getName() const
{
  return _name;
}

void  Player::draw(sf::RenderWindow& window) const
{
  sf::Texture _texture;
  sf::Sprite  _sprite;
  if (_win == 0)
  {
    if (!_texture.loadFromFile("textures/texture8.jpg"))
    {
      std::cout << "Impossible de charger la texture" << std::endl;
    }
  }
  else if (_win == 1)
  {
    if (!_texture.loadFromFile("textures/texture7.jpg"))
    {
      std::cout << "Impossible de charger la texture" << std::endl;
    }
  }
  _sprite.setTexture(_texture);
  _sprite.setPosition(_x, _y);
  window.draw(_sprite);
}

void Player::SetX(bool b)
{
  if (b)
    _x = _x + 80;
  else
  _x = _x - 80;
}

void Player::SetY(bool b)
{
  if (b)
    _y = _y + 80;
  else
    _y = _y - 80;
}

void Player::SetX(int nbr)
{
  if (nbr > 0)
    _x = nbr;
}

void Player::SetY(int nbr)
{
  if (nbr > 0)
    _y = nbr;

}

int Player::GetX() const
{
  return _x;
}

int Player::GetY() const
{
  return _y;
}

int Player::GetWin() const
{
  return _win;
}

void Player::SetWin()
{
  _win = _win + 1;
}
