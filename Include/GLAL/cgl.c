#include "cgl.h"
#include "glal.h"
#include "glad.h"
#include <stdio.h>

void InitCGL(void)
{
    InitGLAL();
}

void CreateCGLWindow(glalInt WindowWidth, glalInt WindowHeight, const char* WindowTitle, glalData WindowData, glalData ViewportData)
{
    GLviewport view = { WindowWidth, WindowHeight };
    GLtitle title = { WindowTitle };
    GLdata data = { WindowData };
    CreateGLALWindow(view, title, data);
}

void TerminateCGL(void)
{
    DestroyGLALWindow();
    TerminateGLAL();
}

void CGLClearColor(glalUchar red, glalUchar green, glalUchar blue, glalUchar alpha)
{
    GLcolor color = { red, green, blue, alpha };
    SetGLALClearcolor(color);
}

void SwapCGLBuffers(void)
{
    GLALSwapBuffers();
}

void CGLClear(void)
{
    GLALClear();
}

void PollCGLEvents(void)
{
    GLALPollEvents();
}

int CGLWindowShouldClose(void)
{
    return GLALWindowShouldClose();
}

void CGLLoadFile(const char* FileName, const char* FileMode)
{
    GLfile file = { FileName, FileMode };
    GLALLoadFile(file);
}

void CGLUnloadFile(void)
{
    GLALunloadFile();
}

void CGLWriteToFile(const char* FORMAT, ...)
{
    GLALwriteToFile("%s", FORMAT);
}

void CGLReadFromFile(char* buffer)
{
    GLALreadFromFile(sizeof(buffer), buffer);
}