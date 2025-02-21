#ifndef TOTALCHANCES_H
#define TOTALCHANCES_H
#include <cstdlib>
#include <math.h>

// calculate number of chances for guessing given the range
int TotalChances(int a, int b){
    int total_chances 
        = ceil (log(b - a + 1) / log(2));

    return total_chances;
}

#endif