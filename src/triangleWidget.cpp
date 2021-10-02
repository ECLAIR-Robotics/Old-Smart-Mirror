#include "triangleWidget.hpp"

#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

void TriangleWidget::render() {
    glClearColor(0.4, 0.4, 0.4, 0.4);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    glBegin(GL_TRIANGLES);
            glVertex3f(-0.7, 0.7, 0);
            glVertex3f(0.7, 0.7, 0);
            glVertex3f(0, -1, 0);
    glEnd();

    glFlush();
    changeInRender = false;
}