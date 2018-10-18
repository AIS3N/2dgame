#include "../headers/Trap.hh"

Trap::Trap(int x, int y) : Cell(), _x(x), _y(y)
{

}

bool  Trap::isWalkable() const
{
    return true;
}

void  Trap::draw(sf::RenderWindow& window) const
{
  sf::Texture _texture;
  sf::Sprite  _sprite;
  if (!_texture.loadFromFile("textures/texture6.jpg"))
  {
    std::cout << "Impossible de charger la texture" << std::endl;
  }
  _sprite.setTexture(_texture);
  _sprite.setPosition(_x, _y);
  window.draw(_sprite);
}
