#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

#include "constants.hpp"
#include "triangleWidget.hpp"

using namespace glm;
TriangleWidget triangle = TriangleWidget(100, 100, 500, 500, "Triangle Widget");

void drawWidgets() {
    triangle.renderWidget();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Creating a triangle");

    glutDisplayFunc(drawWidgets);
    glutMainLoop();
    return 0;
}