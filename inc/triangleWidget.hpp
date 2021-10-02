#include "widget.hpp"
#include <string>
using std::string;

#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

// Constructor
class TriangleWidget : public Widget {

    public:
        TriangleWidget(int x, int y, int h, int w, std::string n) : Widget(x, y, h, w, n) {};

        void render();
};