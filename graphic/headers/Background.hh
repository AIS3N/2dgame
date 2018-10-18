#ifndef __BACKGROUND_H__
#define __BACKGROUND_H__

#include <SFML/Graphics.hpp>
#include <iostream>

class BackGround
{
  sf::Texture*  _texture;
  sf::Sprite*   _sprite;

public:
  BackGround();
  void draw(sf::RenderWindow& window);
};

#endif
