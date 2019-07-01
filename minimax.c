#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define dim 64

typedef struct node {
    struct node **child;
    int n_child;
    char game[dim];
    int value;
}Node;


int main(void) {
    srand(time(NULL));
}
