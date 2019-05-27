#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>
class Board {
    private:
        int width;
        int height;
        std::vector<char> b;
    public:
        Board();
        Board(int w, int h);
        unsigned int index(unsigned int x, unsigned int y);
        void display();

};

#endif
