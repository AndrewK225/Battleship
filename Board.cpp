#include <iostream>
#include "Board.h"
Board::Board()
    : width(6),height(6),b(width*height)
{
    for(auto i = b.begin(); i != b.end(); ++i) {
        *i = ' ';
    }

}

Board::Board(int w, int h)
    : width(w),height(h),b(width*height)
{
    for(auto i = b.begin(); i != b.end(); ++i) {
        *i = ' ';
    }

}

void Board::display() {
    bool sep = true;
    std::cout << "|";
    for(int i = 0; i < width*height; ++i) {
        std::cout << b[i] << "|";
        if(i != 0 && (i+1)%width == 0) 
            std::cout << std::endl << "|";
        
    }
}

unsigned int Board::index(unsigned int x, unsigned int y) {
    return x+y*width;
}
