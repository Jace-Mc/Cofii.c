#ifndef CTEXT_H__
    #define CTEXT_H__

#ifdef __cplusplus
    #define CPP_CTEXT_INCLUDED 0x89
#endif

/**********************************
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
 **********************************/

#define CTEXT_INCLUDED 1
#include "CFunctions.h"

void InitCText(int argc, char** argv); // Initilazes CText.
void CTextDrawText(Vec2 location, const char* Text); // Renders Text on screen, I haven't Configured A User Selected Color parameter yet.

#endif