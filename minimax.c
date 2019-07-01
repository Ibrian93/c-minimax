#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "minimax.h"
#define dim 64
#define N 8

struct node{
    struct node **child;
    int n_child;
    char game[N][N];
    int value;
};

int main(void) {
    srand(time(NULL));
    int n_pieces = 0;
    NODE *p = (NODE *)malloc(sizeof(NODE));
    char tab[N][N];
    matrix_init(&p, tab, &n_pieces);
    matrix_print(&p);
}

void matrix_init(NODE**mini, char tab[N][N], int *n_pieces) {
    int i, j, pc = rand() % N;
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            tab[i][j] = ' ';
        }
    }
    tab[7][pc] = 'O';
    for(i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            (*mini)->game[i][j] = tab[i][j];
        }

        *n_pieces = dim - 1;
    }
}

void matrix_print(NODE**table) {
    int i, j;
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("| %c |", (*table)->game[i][j]);
        }
        printf("\n");
    }
}

