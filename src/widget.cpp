#include "widget.hpp"
#include "constants.hpp"
#include <string>
using std::string;

// Constructor
Widget::Widget(int x, int y, int h, int w, std::string n) {
    updatePosition(x, y);
    height = h;
    width  = w;
    name   = n;
}

void Widget::updatePosition(int x, int y) {
    positionX = x;
    positionY = y;
}
