#include "weatherWidget.hpp"
#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

void WeatherWidget::render() {

    glClearColor(0.53, 0.81, 0.92, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
    changeInRender = true;
}