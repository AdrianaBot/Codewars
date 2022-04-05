/* Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight in milliseconds.*/

#include <stdio.h>

int past(int h, int m, int s) {
    int ms = h * 60 * 60 * 1000 + m * 60 * 1000 + s * 1000;
    return ms;
}

