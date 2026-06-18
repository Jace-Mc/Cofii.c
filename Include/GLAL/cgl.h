#ifndef CGL_H__
    #define CGL_H__

/******************* 
 * extern "C" start ({)
 *******************/
#   if defined(__cplusplus)
        extern "C" {
#   endif

/*******************
 * The @include for all variables, and variable functions
 *******************/
#include "glvar.h"

/*******************
 * All @fn/s needed for cgl (Cofii'S OpenGL Layer).
 * They are shown in this file make sure, they are not kept very untidy.
 * LICENSE:
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
 *******************/

void InitCGL(void); // Initializes GLAL and CGL.
void CreateCGLWindow(glalInt WindowWidth, glalInt WindowHeight, const char* title, glalData WindowData, glalData ViewportData); // Creates a CGL and GLAL window.
void TerminateCGL(void); // Terminates CGL and Destorys GLAL window.
void CGLClearColor(glalUchar red, glalUchar green, glalUchar blue, glalUchar alpha); // Sets The CGL and GLAL window Background Color.
void SwapCGLBuffers(void); // Swaps CGL and GLAL buffers
void PollCGLEvents(void); // Poll CGL and GLAL events
int  CGLWindowShouldClose(void); // Checks if window should close
void CGLClear(void); // Clear GLAL color buffer bit
void CGLLoadFile(const char* FileName, const char* FileMode); // Loads file into memory via GLAL
void CGLUnloadFile(void); // Unloads File from memory via GLAL
void CGLWriteToFile(const char* FORMAT, ...); // Writes Text to file via GLAL in the mode "w"
void CGLReadFromFile(char* buffer); // Reads text from file using a buffer via GLAL

/******************* 
 * extern "C" end (})
 *******************/
#   if defined(__cplusplus)
        }
#   endif
#endif