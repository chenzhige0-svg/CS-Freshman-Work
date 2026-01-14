#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdalign.h>
#include "struct.h"
#undef MIN 
#define MIN 8
#define LOOP 4


#ifndef MAX
#define MAX 10
#endif
#if  MAX==LOOP
int li(int a,int b);
#elif MAX>LOOP
int ki(int a,int b);
#else
    #error "error"
#endif
#if MIN<LOOP
#error "error"
#endif
