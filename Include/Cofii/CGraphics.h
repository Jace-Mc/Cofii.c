#ifndef CGRAPHICS_H__
    #define CGRAPHICS_H__

/**************************
* Current LICENSE:
* Copyright (c) 2026 Jace McCartney

* This software is provided ‘as-is’, without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.

* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:

*       1. The origin of this software must not be misrepresented; you must not
*       claim that you wrote the original software. If you use this software
*       in a product, an acknowledgment in the product documentation would be
*       appreciated but is not required.

*       2. Altered source versions must be plainly marked as such, and must not be
*       misrepresented as being the original software.

*       3. This notice may not be removed or altered from any source
*       distribution.
***************************/

#include <stdbool.h>
#include <stdio.h>
#include "CFunctions.h"

void CreateWindow(int width, int height, const char* title); // Create Cofii Window, and CGL's OpenGL Context.
void End(void); // Ends Window Creation Loop, allowing window to close.
void StartRender(void); // Starts Rendering Window Object.
bool WindowClosed(void); // Checks if Window is closed or not, If this equals true window has closed. If this equals false window has not closed. True (WindowClosed()), if false (!WindowClosed()).
void SetBackGroundColor(CColor color); // Sets The Window Background Color with a color struct that communicates with GLAL.
void RenderCircle(Vec2 location, float radius); // Sets the Circle location and a radius
void RenderTriangle(TriangleVec Vertices, CColor color); // Draws a triangle on screen.

#endif