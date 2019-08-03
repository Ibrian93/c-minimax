//
// Created by Brian Icochea on 2019-08-02.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "minimax.h"
#include "pc_logic.h"
#define N 8

extern void pc_logic(NODE**game){
    (*game)->n_child = N;
    (*game)->child = malloc(60); //to be discussed
    tree_creation(game);
    minimax(game);
}

void tree_creation(NODE*game) {
    int i;
    create_node_level(game);
    for(i = 0; i < game->n_child; i++) {

    }
}

void create_node_level(NODE*parent){
    int i;
    for(i = 0; i < N; i++) {
        //creation node
    }
}

void minimax (NODE**game) {
}


