#ifndef ACTUALNUM_H
#define ACTUALNUM_H
#include <cstdlib>
#include <math.h>
#include <iostream>

// generate random num between A and B
int ActualNum(int a, int b){
    srand(time(0));
    int X = (rand() %  b - a + 1) + a;

    return X;
}

#endif