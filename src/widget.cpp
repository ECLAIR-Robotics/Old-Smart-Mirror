#include "widget.hpp"
#include <string>
using std::string;

// Constructor
Widget::Widget(int x, int y, int h, int w, std::string n) {
    updatePosition(x, y);
    height = h;
    width  = w;
    name   = n;
    changeInRender  = true;
    selectedByMouse = false;
}

void Widget::updatePosition(int x, int y) {
    positionX = x;
    positionY = y;
}