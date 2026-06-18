#ifndef GLF_H__
    #define GLF_H__

/************************
 * extern "C" start ({)
 ************************/
#   if defined(__cplusplus)
        extern "C" {
#   endif

/************************
 * @include/s required for C/C++ coders
 ************************/
/** @include for booleans **/
#include "glvar.h" // Also includes: stdbool.h, and other variable types

/************************
* GREEETINGS: to all users of the Cofii Library,
* this is the GLAL/ directory (OpenGL abstraction layer). 
* Welcome to the OpenGL Abstraction layer Header (GLAL).
* This configures OpenGL For different Operating Systems.
* It makes sure all Operating Systems are configured correctly with OpenGL.
****
* Current @version 1.0
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
*************************/

/************************
 * @typedef/s for Variables
 ************************/ 
/** @dir: Go to glvar.h for variables **/

/************************
 * @typedef @struct/s for Better storage of data,
 * For OPENGL: of course
 *************************/
interface GLwindowData
{
    glalData Connection; // Stores Data for Connection Purposes
} GLdata;

interface GLwindowViewport
{
    glalInt ViewWidth; // The Window Viewport Width
    glalInt ViewHeight; // The Window Viewport Height
} GLviewport;

interface GLwindowTitle
{
    const glalChar* ViewTitle; // The Window Viewport Title
} GLtitle;

interface GLclearColor
{
    glalUchar red; // red
    glalUchar green; // green
    glalUchar blue; // blue
    glalUchar alpha; // alpha
} GLcolor;

interface GLfileObject
{
    const char* FileName; // The FileName used for GLALLoadFile
    const char* FileMode; // The FileMode used for GLALLoadFile
} GLfile;

/************************
 * @category Apple, MacOS, iPadOS, iOS
 ************************/
#ifdef __APPLE__
    void InitGLAL(void); // Initializes OpenGL and GLAL context
    void CreateGLALWindow(GLviewport View, GLtitle Title, GLdata Data); // Sets a Window Viewport and a Viewport Title, and Sets a Data struct
    void DestroyGLALWindow(void); // Destorys OpenGL window
    void TerminateGLAL(void); // Terminates OpenGL and GLAL
    void SetGLALClearcolor(GLcolor Color); // Sets A Background Color of the OpenGL Window
    void GLALClear(void); // Clears GLAL color Buffer Bit
    void GLALSwapBuffers(void); // Swaps OpenGL buffers
    void GLALPollEvents(void); // Poll OpenGL Events
    int  GLALWindowShouldClose(void); // Checks If OpenGL Window Should Close
    void GLALLoadFile(GLfile file); // Loads The FIle struct aka the File into memory.
    void GLALwriteToFile(const char* Text, ...); // Writes Text to a File in the WRITE mode "w"
    void GLALreadFromFile(int memallocated, char* readbuffer); // Allocates memory for a character buffers
    void GLALunloadFile(void); // Unloads File from memory
#endif

/************************
 * @category Linux Kernel, Distros (Arch Linux(What I'm using), Ubuntu, KDE Plasma, etc.)
 ************************/
#ifdef __linux__
    // These are All Functions Given to the Linux Operating System/Kernel.
    // fun fact: I made this library on Arch Linux using Hyprland.
    void InitGLAL(void); // Initializes OpenGL and GLAL context
    void CreateGLALWindow(GLviewport View, GLtitle Title, GLdata Data); // Sets a Window Viewport and a Viewport Title, and Sets a Data struct
    void DestroyGLALWindow(void); // Destorys OpenGL window
    void TerminateGLAL(void); // Terminates OpenGL and GLAL
    void SetGLALClearcolor(GLcolor Color); // Sets A Background Color of the OpenGL Window
    void GLALClear(void); // Clears GLAL color Buffer Bit
    void GLALSwapBuffers(void); // Swaps OpenGL buffers
    void GLALPollEvents(void); // Poll OpenGL Events
    int  GLALWindowShouldClose(void); // Checks If OpenGL Window Should Close
    void GLALLoadFile(GLfile file); // Loads The FIle struct aka the File into memory.
    void GLALwriteToFile(const char* Text, ...); // Writes Text to a File in the WRITE mode "w"
    void GLALreadFromFile(int memallocated, char* readbuffer); // Allocates memory for a character buffers
    void GLALunloadFile(void); // Unloads File from memory
#endif

/************************* 
 * @category Microsoft, Windows 11, Windows 10.
 *************************/
#if defined(_WIN32) || defined(_WIN64)
    // Sadly windows is not configured yet.
#endif

/************************* 
 * Extern "C" end (})
 *************************/
#   if defined(__cplusplus)
    }
#   endif

#endif