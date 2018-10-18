#include "../headers/Map.hh"

//Constructeur

Map::Map(std::vector<std::vector<Cell*>> map)
{
  std::cout << "construction map" << std::endl;
  _cells = map;
}

Map::~Map()
{

}

//Construction par Copie

Map::Map(Map const& other)
{
  _cells = other._cells;
}

//Construction par déplacement

Map::Map(Map&& other)
{
  _cells = other._cells;
}

//Operateur de Copie

Map& Map::operator=(Map const &other)
{
  if (this == &other)
    return *this;
  _cells = other._cells;
  return *this;
}

//Operateur de Deplacement

Map& Map::operator=(Map&& other)
{
  if (this == &other)
    return *this;
  std::swap(_cells, other._cells);
  return *this;
}

void  Map::draw(sf::RenderWindow& window) const
{
  for (unsigned int i = 80; i < _cells.size(); i+=80)
  {
    for (unsigned int n = 80; n < _cells[i].size(); n+=80)
    {
      (_cells[i][n])->draw(window);
    }
  }
}

Cell* Map::getCell(int x, int y)
{
  return _cells[x][y];
}

std::vector<std::vector<Cell*>>      fillMap(int x, int y)
{
  std::cout << "fillmap" << std::endl;
  std::string   str;
  std::vector<std::vector<Cell*>>    map;
  map.resize(x);
  for (int i = 80; i < x; i+= 80)
  {
    map[i].resize(y);
    for (int n = 80; n < y; n+= 80)
    {
      if ((i == 160 && n == 160) || (i == 320 && n == 320))
        map[i][n] = new Crate(i, n);
      else if (i == 240 && n == 320)
        map[i][n] = new Trap(i, n);
      else if (i == 240 && n == 400)
        map[i][n] = new Door(i, n);
      else if (i == 400 && n == 400)
        map[i][n] = new Door2(i, n);
      else
        map[i][n] = new Floor(i, n);
    }
  }
  std::cout << "fin de fillmap" << std::endl;
  return map;
}
