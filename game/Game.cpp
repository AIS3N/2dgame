#include "Game.hh"

std::vector<std::vector<Cell*>>      fillMap(int x, int y);

Game::Game(int x, int y, std::string name)
{
  std::vector<std::vector<Cell*>> cells;
  cells = fillMap(480, 480);
  _player = new Player(x, y, name, 0);
  _map = new Map(cells);
  std::cout << "construction de game" << std::endl;
}

void Game::move(std::string direction)
{
  int x = _player->GetX();
  int y = _player->GetY();
  if (direction == "right")
  {
    if ((x) < 400 && this->canGo(x + 80, y))
        _player->SetX(true);
  }
  else if (direction == "left")
  {
    if ((x) > 80 && this->canGo(x - 80, y))
        _player->SetX(false);
  }
  else if (direction == "up")
  {
    if ((y) > 80 && this->canGo(x, y - 80))
        _player->SetY(false);
  }
  else if (direction == "down")
  {
    if ((y) < 400 && this->canGo(x, y + 80))
        _player->SetY(true);
  }
}

bool Game::canGo(int x, int y)
{
  Cell* cell = _map->getCell(x, y);
  if (x == 400 && y == 400 && _player->GetWin() == 0)
  {
    std::cout << "You are not strong enough, go to the first door to train !" << std::endl;
    return false;
  }
  else if (x == 240 && y == 400 && _player->GetWin() > 0)
  {
    std::cout << "You are strong, go to the gold door !" << std::endl;
    return false;
  }
  if (cell->isWalkable())
    return true;
  else
    return false;
}

bool Game::win()
{
  if (_player->GetX() == 240 && _player->GetY() == 400)
  {
    std::cout << "TRANSFORM INTO GEAR 4 !" << std::endl;
    _player->SetWin();
    _player->SetX(80);
    _player->SetY(80);
    return true;
  }
  else if (_player->GetX() == 400 && _player->GetY() == 400)
  {
    std::cout << "YOU WIN !" << std::endl;
    _player->SetWin();
    return true;
  }
  else
    return false;
}

bool Game::loose()
{
  if (_player->GetX() == 240 && _player->GetY() == 320)
  {
    std::cout << "YOU LOOSE !" << std::endl;
    return true;
  }
  return false;
}

void Game::start(sf::RenderWindow& window)
{
  BackGround bg;

  bg.draw(window);
  //this->draw(window);
  _map->draw(window);
  _player->draw(window);
  window.display();
  while (window.isOpen())
  {
      sf::Event event;
      while (window.pollEvent(event))
      {
          if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            this->move("right");
          else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            this->move("left");
          else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            this->move("up");
          else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            this->move("down");
        if (event.type == sf::Event::Closed)
          window.close();
      }
      _map->draw(window);
      _player->draw(window);
      window.display();
      if (this->win())
      {
        if (_player->GetWin() > 1)
          window.close();
        _map->draw(window);
        _player->draw(window);
        window.display();
      }
      if (this->loose())
        window.close();
  }
}
