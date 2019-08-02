struct node{
    struct node **child;
    int n_child;
    char game[8][8];
    int value;
};
typedef struct node NODE;
void matrix_init(NODE**mini, char tab[8][8], int *);
void matrix_print(NODE**table);
void player_game(NODE**play, int *, int *, int *);