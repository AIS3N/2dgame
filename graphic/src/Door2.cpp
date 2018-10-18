#include "../headers/Door2.hh"

Door2::Door2(int x, int y) : Cell(), _x(x), _y(y)
{

}

bool  Door2::isWalkable() const
{
    return true;
}

void  Door2::draw(sf::RenderWindow& window) const
{
  sf::Texture _texture;
  sf::Sprite  _sprite;
  if (!_texture.loadFromFile("textures/texture42.jpg"))
    throw std::invalid_argument("Erreur chargement texture");
  _sprite.setTexture(_texture);
  _sprite.setPosition(_x, _y);
  window.draw(_sprite);
}
