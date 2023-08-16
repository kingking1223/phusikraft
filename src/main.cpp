#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include "shader.h"

int main() 
{
    Display display(800, 600, "test3");

    Shader shader("./res/testShader");

    while (!display.IsClosed()) {
        display.Clear(0.0f, 0.25f, 0.6f, 1.0f);
        display.Update();
    }
    return 0;
}