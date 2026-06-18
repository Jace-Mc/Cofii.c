#include "GLAL/cgl.h"

int main()
{
    InitCGL();
    CreateCGLWindow(400, 400, "My First Window", 0, 0);

    while(!CGLWindowShouldClose())
    {
        PollCGLEvents();
        SwapCGLBuffers();
    }

    TerminateCGL();
    return 0;
}