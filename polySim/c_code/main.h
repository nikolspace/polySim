#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdint.h>

/*  To use this exported function, include this header in your project. */

#ifdef _WIN32
    #ifdef BUILD_DLL
        #define DLL_EXPORT __declspec(dllexport)
    #else
        #define DLL_EXPORT __declspec(dllimport)
    #endif
#else
    #define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C"
{
#endif

int DLL_EXPORT generateStructure(uint16_t img[], int length, int width, int height, int nucleationRate, float growthRate, float *avramiExponent, int randomizeGrayValues);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
