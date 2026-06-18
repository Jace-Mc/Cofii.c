#ifndef GLVAR_H__
    #define GLVAR_H__

/******************** 
 * extern "C" start ({)
 ********************/
#   if defined(__cplusplus)
        extern "C" {
#   endif

/********************
 * The is glbool.h @include for C boolean functions for glal (OpenGL Abstraction Layer).
 ********************/
#include <stdbool.h>

/********************
 * @def/s (aliases) for @typedef(def), etc.
 ********************/
#define def typedef // An def (typedef) an alias
#define interface typedef struct // An interface (typedef struct) an alias
#define module typedef enum // An module (typedef enum) an alias

/********************
 * @typedef (def) for my variable types 
 ********************/
/** all variable types **/
/** Up (Unsigned Pointer) **/
/** Ip (Signed Pointer) **/
/** p (Pointer) **/

def int glalInt; // Int typedef
def int* glalpInt; // Int* typedef 
def char glalChar; // Char typedef 
def void* glalData; // Void* typedef
def float glalFloat; // float typedef 
def unsigned int glalUint; // Unsigned Int typedef
def float glalfloat; // Float typedef 
def double glaldouble; // Double typedef 
def unsigned char* glalUpChar; // Unsigned Char* typedef
def signed char* glalIpChar; // Signed Char* typedef 
def unsigned char glalUchar; // Unsigned Char typedef
def signed char glalIchar; // Signed Char typedef
def char* glalpChar; // Char* typedef

/********************
 * This is#define def typedef  the @enum that holds GLAL_TRUE & GLAL_FALSE,
 * For PROTECTION: of course
 ********************/
enum _BoolTypes
{
    GLAL_TRUE  = 1, 
    GLAL_FALSE = 0
};

/********************
 * extern "C" end (})
 ********************/
#   if defined(__cplusplus)
        }
#   endif

#endif