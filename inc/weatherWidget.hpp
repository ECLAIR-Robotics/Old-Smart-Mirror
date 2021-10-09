#include "widget.hpp"
#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

using std::string;

class WeatherWidget : public Widget {

    public:
        WeatherWidget(int x, int y, int h, int w, std::string n) : Widget(x, y, h, w, n) {};
        void render();
};