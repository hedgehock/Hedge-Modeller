#include <GLFW/glfw3.h>

void controls(GLFWwindow* window, int key, int scancode, int action, int mods);
GLFWwindow* initWindow(const int resX, const int resY);
void drawCube();
void display(GLFWwindow* window);