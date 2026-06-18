#include "glal.h" // Includes the File that holds all the GLAL function
#include <stdio.h>

#define DGL_SILENCE_DEPRECATION // Silencing deprecation for Darwin.
#define GL_SILENCE_DEPRECATION // Silencing deprecation for Linux user/windows users.

/********************
 * WELCOME: to the glal.c file that holds all NEEDED:
 * library @fn this is the source file.
 ********************/

/******************** 
 * THESE: are all @include/s needed.
 ********************/
// None needed yet...

/********************
 * THESE: are @typedef @struct for only glal.c (.c = core file for the library) file purposes
 ********************/
// None needed yet...

/********************
 * These all needed @fn/s for different OSes.
 ********************/
#ifdef __APPLE__
    #include <GLFW/glfw3.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

        /** The GLFWwindow @struct object **/
    GLFWwindow* window;

    /** The FILE @struct object **/
    FILE* file_obj;

    

    void InitGLAL(void)
    {
        glfwInit();
        printf("[GLAL]> Started Diagnostics\n");
        printf("[GLAL]> Showing...\n");
        printf("\n");
        printf("[GLAL]> Initialized OpenGL\n");
        printf("[GLAL]> Backends Started\n");
        printf("[GLAL]> Initialized Cofii\n");
        printf("[Cofii]> Backends Started\n");
        printf("[Cofii]> Current Backend... GLAL\n");
        printf("[GLAL]> Current Backend... GLFW\n");
        printf("[GLAL]> Swapped Buffers\n");
        printf("[GLAL]> Loaded Buffers\n");
        printf("[GLAL]> Polled Events\n");
        printf("[GLAL]> Loaded Events\n");
        printf("[GLAL]> Showing Window\n");
        printf("[GLAD]> Loaded...\n");
        printf("[GLAD]> Extensions loaded...\n");
        printf("         > Loaded... freeglut\n");
        printf("         > Loaded... OpenGL\n");
        printf("         > Loaded... GLAL\n");
        printf("         > Loaded... glf\n");
        printf("         > Loaded... cgl\n");
        printf("         > Loaded... Cofii\n");
        printf("         > Loaded... CGraphics\n");
        printf("         > Loaded... GLALFileManager\n");
        printf("         > Loaded... CText\n");
    }

    void CreateGLALWindow(GLviewport View, GLtitle Title, GLdata Data)
    {
        printf("[GLAL]...\n");
        printf("[MSG]: Created window\n");
        printf("[MSG]: Current Viewport...\n");
        printf("       > Current Size: %d x %d\n", View.ViewWidth, View.ViewHeight);
        printf("       > Current Title: %s\n", Title.ViewTitle);
        printf("       > Current Data: %p\n", Data.Connection);
        printf("[GLAL] backends...\n");
        printf("       > GLAL Backend: GLFW-3.4\n");
        printf("       > Cofii Backend: GLAL-1.0\n");
        printf("       > cgl: GLAL-1.0\n");
        printf("       > glf: GLAL-1.0\n");
        window = glfwCreateWindow(View.ViewWidth, View.ViewHeight, Title.ViewTitle, NULL, NULL);
        glfwMakeContextCurrent(window);
    }

    void GLALClear(void)
    {
        glClear(GL_COLOR_BUFFER_BIT);
    }

    void GLALSwapBuffers(void)
    {
        glfwSwapBuffers(window);
    }

    void GLALPollEvents(void)
    {
        glfwPollEvents();
    }

    void DestroyGLALWindow(void)
    {
        printf("[GLAD]> Unloaded All extensions/backends\n");
        printf("[GLAD]> Glphys Destoryed\n");
        printf("[GLAD]> Glphys Unloaded\n");
        printf("[GLAD]> freeglut unloaded\n");
        printf("[GLAL]> Deleted File\n");
        printf("[GLAL]> Unloaded File\n");
        printf("[GLAL]> Closed Window\n");
        printf("[GLAL]> Unloaded OpenGL extensions\n");
        printf("[GLAL]> Unloaded GLAD\n");
        printf("[GLAL]> Window Buffers reversed\n");
        printf("[GLAL]> Window Events Unpolled\n");
        printf("[GLAL]> Window Destroyed!\n");
        glfwDestroyWindow(window);
    }

    void TerminateGLAL(void)
    {
        glfwTerminate();
    }

    void SetGLALClearcolor(GLcolor Color)
    {
        float rd = (float)Color.red / 255;
        float gr = (float)Color.green / 255;
        float bl = (float)Color.blue / 255;
        float al = (float)Color.alpha / 255;
        glClearColor(rd, gr, bl, al);
    }

    int GLALWindowShouldClose(void)
    {
        return glfwWindowShouldClose(window);
    }

    bool FileCallBack(const char* FileName);

    void GLALLoadFile(GLfile file)
    {
        if(FileCallBack(file.FileName) == false)
        {
            printf("[GLAL].error> GLALFileManager.service\n");
            printf("[GLAL]      > File Not Loaded\n");
            printf("[GLAL]      > File: %s\n", file.FileName);
            printf("[GLAL]      > Stoping File from Loading\n");
            printf("[GLAL]      > Load a supported File\n");
            return;
        }

        printf("[GLAL]> Loaded File Succesfully\n");
        printf("[GLAL]> extension supported [:)]\n");
        printf("[GLAL]> file Loaded info...\n");
        printf("[GLAL]         > File Mode: %s\n", file.FileMode);
        printf("[GLAL]         > File Name: %s\n", file.FileName);

        file_obj = fopen(file.FileName, file.FileMode);

        if (file.FileName == NULL)
        {
            printf("[ERROR]> no file given\n");
            return;
        }
    }

    bool FileCallBack(const char* FileName)
    {
        const char* SupportedReadWriteExtensions[] =
        {
            ".c",
            ".zig",
            ".go",
            ".text",
            ".cpp",
            ".d",
            ".md",
            ".html",
            ".css",
            ".js"
        };

        const char* SupportedFileModes[] =
        {
            "w",
            "r"
        };

        const char* file_ext = strrchr(FileName, '.');

        if(!file_ext)
        {
            return false; 
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[0]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[1]) == 0)
        {
            return true; 
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[2]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[3]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[4]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[5]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[6]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[7]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[8]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[9]) == 0)
        {
            return true;
        }

        return false;
    }

    void GLALwriteToFile(const char* Text, ...)
    {
        printf("[GLAL]             > Text written to file: %s\n", Text);
        fprintf(file_obj, "%s\n", Text);
    }

    void GLALreadFromFile(int memallocated, char* readbuffer)
    {
        readbuffer = malloc(memallocated * sizeof(char));

        fgets(readbuffer, memallocated, file_obj);
        
        free(readbuffer);
    }

    void GLALunloadFile(void)
    {
        if (file_obj == NULL)
        {
            printf("[GLAL]> File Was Unloaded due to errors\n");
            return;
        }

        fclose(file_obj);
        printf("[GLAL]> File Unloaded and closed Successfully\n");
    }
#endif

#ifdef __linux__
    #ifdef PROTECT
        #define PROTECT
    #endif
    #include <GLFW/glfw3.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    /** The GLFWwindow @struct object **/
    GLFWwindow* window;

    /** The FILE @struct object **/
    FILE* file_obj;

    

    void InitGLAL(void)
    {
        glfwInit();
        printf("[GLAL]> Started Diagnostics\n");
        printf("[GLAL]> Showing...\n");
        printf("\n");
        printf("[GLAL]> Initialized OpenGL\n");
        printf("[GLAL]> Backends Started\n");
        printf("[GLAL]> Initialized Cofii\n");
        printf("[Cofii]> Backends Started\n");
        printf("[Cofii]> Current Backend... GLAL\n");
        printf("[GLAL]> Current Backend... GLFW\n");
        printf("[GLAL]> Swapped Buffers\n");
        printf("[GLAL]> Loaded Buffers\n");
        printf("[GLAL]> Polled Events\n");
        printf("[GLAL]> Loaded Events\n");
        printf("[GLAL]> Showing Window\n");
        printf("[GLAD]> Loaded...\n");
        printf("[GLAD]> Extensions loaded...\n");
        printf("         > Loaded... freeglut\n");
        printf("         > Loaded... OpenGL\n");
        printf("         > Loaded... GLAL\n");
        printf("         > Loaded... glf\n");
        printf("         > Loaded... cgl\n");
        printf("         > Loaded... CGraphics\n");
        printf("         > Loaded... GLALFileManager\n");
        printf("         > Loaded... CText\n");
    }

    void CreateGLALWindow(GLviewport View, GLtitle Title, GLdata Data)
    {
        printf("[GLAL]...\n");
        printf("[MSG]: Created window\n");
        printf("[MSG]: Current Viewport...\n");
        printf("       > Current Size: %d x %d\n", View.ViewWidth, View.ViewHeight);
        printf("       > Current Title: %s\n", Title.ViewTitle);
        printf("       > Current Data: %p\n", Data.Connection);
        printf("[GLAL] backends...\n");
        printf("       > GLAL Backend: GLFW-3.4\n");
        printf("       > Cofii Backend: GLAL-1.0\n");
        printf("       > cgl: GLAL-1.0\n");
        printf("       > glf: GLAL-1.0\n");
        window = glfwCreateWindow(View.ViewWidth, View.ViewHeight, Title.ViewTitle, NULL, NULL);
        glfwMakeContextCurrent(window);
    }

    void GLALClear(void)
    {
        glClear(GL_COLOR_BUFFER_BIT);
    }

    void GLALSwapBuffers(void)
    {
        glfwSwapBuffers(window);
    }

    void GLALPollEvents(void)
    {
        glfwPollEvents();
    }

    void DestroyGLALWindow(void)
    {
        printf("[GLAD]> Unloaded All extensions/backends\n");
        printf("[GLAD]> Glphys Destoryed\n");
        printf("[GLAD]> Glphys Unloaded\n");
        printf("[GLAD]> freeglut unloaded\n");
        printf("[GLAL]> Deleted File\n");
        printf("[GLAL]> Unloaded File\n");
        printf("[GLAL]> Closed Window\n");
        printf("[GLAL]> Unloaded OpenGL extensions\n");
        printf("[GLAL]> Unloaded GLAD\n");
        printf("[GLAL]> Window Buffers reversed\n");
        printf("[GLAL]> Window Events Unpolled\n");
        printf("[GLAL]> Window Destroyed!\n");
        glfwDestroyWindow(window);
    }

    void TerminateGLAL(void)
    {
        glfwTerminate();
    }

    void SetGLALClearcolor(GLcolor Color)
    {
        float rd = (float)Color.red / 255;
        float gr = (float)Color.green / 255;
        float bl = (float)Color.blue / 255;
        float al = (float)Color.alpha / 255;
        glClearColor(rd, gr, bl, al);
    }

    int GLALWindowShouldClose(void)
    {
        return glfwWindowShouldClose(window);
    }

    bool FileCallBack(const char* FileName);

    void GLALLoadFile(GLfile file)
    {
        if(FileCallBack(file.FileName) == false)
        {
            printf("[GLAL].error> GLALFileManager.service\n");
            printf("[GLAL]      > File Not Loaded\n");
            printf("[GLAL]      > File: %s\n", file.FileName);
            printf("[GLAL]      > Stoping File from Loading\n");
            printf("[GLAL]      > Load a supported File\n");
            return;
        }

        printf("[GLAL]> Loaded File Succesfully\n");
        printf("[GLAL]> extension supported [:)]\n");
        printf("[GLAL]> file Loaded info...\n");
        printf("[GLAL]         > File Mode: %s\n", file.FileMode);
        printf("[GLAL]         > File Name: %s\n", file.FileName);

        file_obj = fopen(file.FileName, file.FileMode);

        if (file.FileName == NULL)
        {
            printf("[ERROR]> no file given\n");
            return;
        }
    }

    bool FileCallBack(const char* FileName)
    {
        const char* SupportedReadWriteExtensions[] =
        {
            ".c",
            ".zig",
            ".go",
            ".text",
            ".cpp",
            ".d",
            ".md",
            ".html",
            ".css",
            ".js"
        };

        const char* SupportedFileModes[] =
        {
            "w",
            "r"
        };

        const char* file_ext = strrchr(FileName, '.');

        if(!file_ext)
        {
            return false; 
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[0]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[1]) == 0)
        {
            return true; 
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[2]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[3]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[4]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[5]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[6]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[7]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[8]) == 0)
        {
            return true;
        }

        if (strcmp(file_ext, SupportedReadWriteExtensions[9]) == 0)
        {
            return true;
        }

        return false;
    }

    void GLALwriteToFile(const char* Text, ...)
    {
        printf("[GLAL]             > Text written to file: %s\n", Text);
        fprintf(file_obj, "%s\n", Text);
    }

    void GLALreadFromFile(int memallocated, char* readbuffer)
    {
        readbuffer = malloc(memallocated * sizeof(char));

        fgets(readbuffer, memallocated, file_obj);
        
        free(readbuffer);
    }

    void GLALunloadFile(void)
    {
        if (file_obj == NULL)
        {
            printf("[GLAL]> File Was unloaded due to errors\n");
            return;
        }

        fclose(file_obj);
        printf("[GLAL]> File Unloaded and closed Successfully\n");
    }
#endif

#if defined(_WIN32) || (_WIN64)
    #ifdef PROTECT
        #define PROTECT
    #endif
    #include <direct.h>
    #include <GLFW/glfw3.h>
    #include <stdio.h>

#endif
