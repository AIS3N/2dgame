#include "../headers/Background.hh"

BackGround::BackGround()
{
  _texture = new sf::Texture;
  if (!_texture->loadFromFile("textures/texture1.jpg", sf::IntRect(80, 80, 80, 80)))
  {
    std::cout << "Impossible de charger la texture" << std::endl;
  }
  _texture->setRepeated(true);
  _sprite = new sf::Sprite;
  _sprite->setTextureRect(sf::IntRect(560,560,560,560));
  _sprite->setTexture(*_texture);
}

void BackGround::draw(sf::RenderWindow& window)
{
  sf::RectangleShape shape(sf::Vector2f(560, 560));
  shape.setFillColor(sf::Color::Blue);
  window.clear();
  window.draw(shape);
  window.draw(*_sprite);
  window.display();
}
