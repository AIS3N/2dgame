#include "../headers/Door.hh"

Door::Door(int x, int y) : Cell(), _x(x), _y(y)
{

}

bool  Door::isWalkable() const
{
    return true;
}

void  Door::draw(sf::RenderWindow& window) const
{
  sf::Texture _texture;
  sf::Sprite  _sprite;
  if (!_texture.loadFromFile("textures/texture40.jpg"))
    throw std::invalid_argument("Erreur chargement texture");
  _sprite.setTexture(_texture);
  _sprite.setPosition(_x, _y);
  window.draw(_sprite);
}
