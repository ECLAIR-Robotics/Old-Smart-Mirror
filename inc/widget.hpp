#include <string>

using std::string;

class Widget{
    public:
        // Dimension and locations for each widget
        // Positions are from the bottom left of the screen
        int positionX;
        int positionY;

        int height;
        int width;

        std::string name;

        bool selectedByMouse;

        // specifies if there's a change in this frame and it
        // needs to be re-rendered
        bool changeInRender;

        Widget(int x, int y, int h, int w, std::string n);

        void render();

        // When a user is dragging and moving the widget elsewhere
        void updatePosition(int x, int y);
};