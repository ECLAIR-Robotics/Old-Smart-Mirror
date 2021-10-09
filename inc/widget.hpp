#include <string>
using namespace std;
#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

#ifndef WIDGET_H
#define WIDGET_H

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

        void renderWidget() {
            if (changeInRender) {
                changeInRender = false;
                render();
                glutPostRedisplay();
            }
        }

        // When a user is dragging and moving the widget elsewhere
        void updatePosition(int x, int y);

    private:
        virtual void render() {};

};

#endif