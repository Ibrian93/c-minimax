//
// Created by  on 2019-08-01.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minimax.h"
#include "pc_logic.h"
#define N 8

extern void pc_logic(NODE**game) {
    (*game)->child = malloc(60); //let's ask why this
    (*game)->n_child = N;
    //tree_creation(game);
    //minimax(game); //let's create the minimax algorithm in another c file https://en.wikipedia.org/wiki/Minimax
}