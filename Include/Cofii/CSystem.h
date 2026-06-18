#ifndef CSYSTEM_H__
    #define CSYSTEM_H__

#ifdef __cplusplus
    #define CPP_CSYSTEM_INCLUDED 732
#endif

/***********************************
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
 ***********************************/

#define MODE(Type) (Type) // Used if you don't want to store the mode in a struct.

#define CSYSTEM_INCLUDED 192 // Checks if CSystem.h is included in the header file.
#define CSYSTEM_AVAIL 0x3ad32f32 // Used for Availability to OS 
#define CSYSTEM_HEX 0x323bcdf32 // Pre defined Hexedecimal code.

// This struct Stores the CFile mode
typedef struct CData 
{
    const char* Mode;
} CData;

// No data structs
typedef struct CFile CFile; // Stores the CFile functions, like: CFile LoadFile, It's like this because GLAL handles everything.
struct CFile {}; // As said this struct stores no data, :3.

typedef unsigned long size; // A typedef for unsigned long (size), used for memory allocation functions.

void* buffalloc(size allocated); // Alocates memory for a char* buffer in your code
void pullout(void* memallocobject); // pulls out (frees) the Memory allocated for the buffer, remove wasn't an option so :).
CFile LoadFile(char* File, CData mode); // Loads the File into memory.
void File(char* GetMode, char* ModeUsed); // Allows you to allocate a buffer to read from a file, or write a file, and something in it.
void UnloadFile(CFile file); // Unloads the File from memory. 

// Pre defined modes if your don't want to store it in a struct.
#define READ MODE(CData) { "r" }
#define WRITE MODE(CData) { "w" }
// No need to explain what they are they are self - explanatory.

#endif