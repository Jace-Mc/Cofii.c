#include "CGraphics.h"
#include "CText.h"
#include "CSystem.h"
#include <GL/freeglut.h>
#include <GLAL/cgl.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(CTEXT_INCLUDED) || (CPP_CTEXT_INCLUDED)
    void Creation(void)
    {
        int Glyphs[1000] = /** The index buffer the glyphs form in a, z **/
        {
            2, 3, 5, 2, 5, 2, 1, 5, 6, 4, 3, 4,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 3, 1, 1, 3, 1, 1, 1, 1, 1, 
            1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 
            1, 1, 3, 1, 1, 2, 5, 1, 1, 1, 1, 1, 
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
            1, 1, 4, 6, 7, 1, 2, 1, 1, 1, 3, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
            1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 4, 1, 1, 4, 1, 1, 1, 5, 1, 6, 5,
            1, 1, 1, 1, 1, 5, 1, 5, 1, 1, 1, 1
        };
        printf("[GLUT]> Loaded CText\n");
        printf("[GLUT]> Initialized CText\n");
        printf("        > Loaded GLUT text: %s\n", "ID: GLAL-0XADBD325");
        printf("        > Glyphs Loaded: %d%d%d%d%d\n", 
                                                Glyphs[0], 
                                                Glyphs[1], 
                                                Glyphs[2], 
                                                Glyphs[3], 
                                                Glyphs[4]);
    }   
    
    void InitCText(int argc, char** argv)
    {
        glutInit(&argc, argv);
    }

    void CTextDrawText(Vec2 location, const char* Text)
    {
        glRasterPos2f(location.x, location.y);
        
        while(*Text)
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *Text);
            Text++;
        }
    }
#endif


void CreateWindow(int width, int height, const char* title)
{
    InitCGL();
    CreateCGLWindow(width, height, title, NULL, NULL);
    Creation();
    printf("[Cofii] info...\n");
    printf("        > Current Viewport: %d x %d\n", width, height);
    printf("        > Current Size: %d x %d\n", width, height);
    printf("        > Current Title: %s\n", title);
}

void End(void)
{
    printf("[Cofii] (If any) Clear Color Deleted\n");
    printf("[Cofii] Rendering Stopped\n");
    printf("[Cofii] window destroyed\n");
    TerminateCGL();
}

void StartRender(void)
{
    PollCGLEvents();
    SwapCGLBuffers();
    CGLClear();
}

bool WindowClosed(void)
{
    return CGLWindowShouldClose();
}

void SetBackGroundColor(CColor color)
{
    CGLClearColor(color.r, color.g, color.b, color.a);
}

void RenderCircle(Vec2 location, float radius)
{
    glBegin(GL_TRIANGLE_FAN);

    glEnd();
    glFlush();
}

void RenderTriangle(TriangleVec Vertices, CColor color)
{
    glBegin(GL_TRIANGLES);
    
    float red = (float)color.r / 255;
    float green = (float)color.g / 255;
    float blue = (float)color.b / 255;
    float alpha = (float)color.a / 255;
    
    glColor4f(red, blue, blue, alpha);
    glVertex2f(Vertices.x1, Vertices.x2);
    glVertex2f(Vertices.y1, Vertices.y1);
    glVertex2f(Vertices.z1, Vertices.z2);

    glEnd();
    glFlush();
}


#if defined (CSYSTEM_INCLUDED) || (CPP_CSYSTEM_INCLUDED) 

    void* buffalloc(size allocated)
    {
        return malloc(allocated * sizeof(char));
    }

    void pullout(void* memallocobject)
    {
        free(memallocobject);
    }

    CFile LoadFile(char* FileName, CData data)
    {
        CGLLoadFile(FileName, data.Mode);
    }

    void File(char* GetMode, char* ModeUsed)
    {
        if (GetMode == "w")
        {
            CGLWriteToFile(ModeUsed);
        }
        
        if (GetMode == "r")
        {
            CGLReadFromFile(ModeUsed);
        }

        else
        {
            printf("[CGL]> No Mode Loaded\n");
        }
    }

    void UnloadFile(CFile file)
    {
        CGLUnloadFile();
    }
#endif