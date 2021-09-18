#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>


#include "inc/hello_arpan.hpp"

void hello_arpan::drawRectangle()
{
    glColor3f(1.0, 0.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

        glBegin(GL_QUADS);
            glVertex3f(-0.5, 0.5, 0);
            glVertex3f(0.5, 0.5, 0);
            glVertex3f(0.5, -0.5, 0);
            glVertex3f(-0.5, -0.5, 0);
        glEnd();

    glFlush();
}
