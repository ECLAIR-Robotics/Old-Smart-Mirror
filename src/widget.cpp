#include "widget.hpp"
#include "constants.hpp"
using std::string;

// Constructor
Widget::Widget(int x, int y, int h, int w, string n) {
    updatePosition(x, y);
    height = h;
    width  = w;
    name   = n;
}

void Widget::updatePosition(int x, int y) {
    positionX = x;
    positionY = y;
}
