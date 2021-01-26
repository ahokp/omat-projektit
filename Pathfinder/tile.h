#ifndef TILE_H
#define TILE_H


class Tile
{
public:
    Tile(int x, int y);

    int get_pos();
    bool is_open();
    void reset();



private:

    int x_;
    int y_;
    bool open_;

};

#endif // TILE_H
