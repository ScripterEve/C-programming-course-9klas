#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(long double a,long double b, long double c){
    struct QuadraticRootsResult quadequation;
    long  d = 0;
    d = (b*b) -4*a*c;
    if(d < 0){
        quadequation.x1 = 0;
        quadequation.x2 = 0;
        quadequation.norealroots = 1;
    } else if(d = 0){
        quadequation.x1 = ((-b + sqrtl(d))/(2*a));
        quadequation.x2 = ((-b + sqrtl(d))/(2*a));
        quadequation.norealroots = 0;

    }else{
        quadequation.x1 = ((-b + sqrtl(d))/(2*a));
        quadequation.x2 = ((-b - sqrtl(d))/(2*a));
        quadequation.norealroots = 0;
    }

    }