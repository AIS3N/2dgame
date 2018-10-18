#include "../headers/Floor.hh"

Floor::Floor(int x, int y) : Cell(), _x(x), _y(y)
{

}

bool  Floor::isWalkable() const
{
  return true;
}

void  Floor::draw(sf::RenderWindow& window) const
{
  sf::Texture _texture;
  sf::Sprite  _sprite;
  if (!_texture.loadFromFile("textures/texture2.jpg", sf::IntRect(80, 80, 80, 80)))
  {
    std::cout << "Impossible de charger la texture" << std::endl;
  }
  _sprite.setTexture(_texture);
  _sprite.setPosition(_x, _y);
  window.draw(_sprite);
}
