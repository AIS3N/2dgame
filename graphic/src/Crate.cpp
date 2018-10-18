#include "../headers/Crate.hh"

Crate::Crate(int x, int y) : Cell(), _x(x), _y(y)
{

}

bool  Crate::isWalkable() const
{
    return false;
}

void  Crate::draw(sf::RenderWindow& window) const
{
  sf::Texture _texture;
  sf::Sprite  _sprite;
  if (!_texture.loadFromFile("textures/texture3.jpg"))
  {
    std::cout << "Impossible de charger la texture" << std::endl;
  }
  _sprite.setTexture(_texture);
  _sprite.setPosition(_x, _y);
  window.draw(_sprite);
}
