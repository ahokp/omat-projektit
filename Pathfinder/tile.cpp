#include "tile.h"

Tile::Tile(int x, int y): x_(x), y_(y)
{

}

int Tile::get_pos()
{
    return x_, y_;
}

bool Tile::is_open()
{
    return open_;
}

void Tile::reset()
{
    open_ = true;
}
