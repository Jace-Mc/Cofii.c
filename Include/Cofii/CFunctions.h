#ifndef FUNCTIONS_H__
    #define FUNCTIONS_H__

typedef struct Vec2
{
    float x;
    float y;
} Vec2;

typedef struct Vec3
{
    float x;
    float y;
    float z;
} Vec3;

typedef struct Vec4
{
    float w;
    float x;
    float y;
    float z;
} Vec4;

typedef struct TriangleVec
{
    float x1; 
    float x2; 
    float y1;
    float y2;
    float z1;
    float z2;
} TriangleVec;

typedef struct CColor
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} CColor;
#endif