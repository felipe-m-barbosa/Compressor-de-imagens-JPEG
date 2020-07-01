#ifndef CONDIFICACAO_H
#define CODIFICACAO_H

//Marizes com os coeficientes das tabelas de prefixo AC
//S�o usadas para comparar soemnte com as sequencias de mesmo tamanho da sequancia que esta sendo lida do buffer
static const int coef_AC_2[2][2] = {{0,1},{0,2}};

static const int coef_AC_3[1][2] = {{0,3}};

static const int coef_AC_4[3][2] = {{0,0},{0,4},{1,1}};

static const int coef_AC_5[2][2] = {{0,5},{2,1}};

static const int coef_AC_6[4][2] = {{0,6},{1,2},{3,1},{4,1}};

static const int coef_AC_7[4][2] = {{0,7},{1,3},{5,1},{6,1}};

static const int coef_AC_8[3][2] = {{2,2},{7,1},{8,1}};

static const int coef_AC_9[5][2] = {{1,4},{3,2},{9,1},{10,1},{11,1}};

static const int coef_AC_10[5][2] = {{0,8},{2,3},{4,2},{5,2},{12,1}};

static const int coef_AC_11[5][2] = {{1,5},{3,3},{6,2},{7,2},{13,1}};

static const int coef_AC_12[2][2] = {{14,1},{15,0}};

static const int coef_AC_15[126][2] = {{0,9},{0,10},{1,6},{1,7},{1,8},{1,9},{1,10},
                                       {2,4},{2,5},{2,6},{2,7},{2,8},{2,9},{2,10},
                                       {3,4},{3,5},{3,6},{3,7},{3,8},{3,9},{3,10},
                                       {4,3},{4,4},{4,5},{4,6},{4,7},{4,8},{4,9},{4,10},
                                       {5,3},{5,4},{5,5},{5,6},{5,7},{5,8},{5,9},{5,10},
                                       {6,3},{6,4},{6,5},{6,6},{6,7},{6,8},{6,9},{6,10},
                                       {7,3},{7,4},{7,5},{7,6},{7,7},{7,8},{7,9},{7,10},
                                       {8,2},{8,3},{8,4},{8,5},{8,6},{8,7},{8,8},{8,9},{8,10},
                                       {9,2},{9,3},{9,4},{9,5},{9,6},{9,7},{9,8},{9,9},{9,10},
                                       {10,2},{10,3},{10,4},{10,5},{10,6},{10,7},{10,8},{10,9},{10,10},
                                       {11,2},{11,3},{11,4},{11,5},{11,6},{11,7},{11,8},{11,9},{11,10},
                                       {12,2},{12,3},{12,4},{12,5},{12,6},{12,7},{12,8},{12,9},{12,10},
                                       {13,2},{13,3},{13,4},{13,5},{13,6},{13,7},{13,8},{13,9},{13,10},
                                       {14,2},{14,3},{14,4},{14,5},{14,6},{14,7},{14,8},{14,9},{14,10},
                                       {15,1},{15,2},{15,3},{15,4},{15,5},{15,6},{15,7},{15,8},{15,9},{15,10}
                                       };

//Estrutura para guiar o zigzag nos blocos 8x8
static const int SCAN[64][2] = {{0,0},{0,1},{1,0},{2,0},{1,1},{0,2},{0,3},{1,2},
                         {2,1},{3,0},{4,0},{3,1},{2,2},{1,3},{0,4},{0,5},
                         {1,4},{2,3},{3,2},{4,1},{5,0},{6,0},{5,1},{4,2},
                         {3,3},{2,4},{1,5},{0,6},{0,7},{1,6},{2,5},{3,4},
                         {4,3},{5,2},{6,1},{7,0},{7,1},{6,2},{5,3},{4,4},
                         {3,5},{2,6},{1,7},{2,7},{3,6},{4,5},{5,4},{6,3},
                         {7,2},{7,3},{6,4},{5,5},{4,6},{3,7},{4,7},{5,6},
                         {6,5},{7,4},{7,5},{6,6},{5,7},{6,7},{7,6},{7,7}
                        };

typedef struct{
    char prefix_bits[10]; //string de bits
    int tam_total; //int para contar tamanho da string de bits
}PREFIX;

typedef struct{
    char prefix_bits[17]; //string de bits
    int tam_total; //int para contar tamanho da string de bits
}PREFIX_AC;

void define_PrefixTables(PREFIX *prefix_table);
void define_PrefixTablesAC(PREFIX_AC **prefix_table);
void exibe_binario(int n, int tamanho);
void desfaz_zigzag(int **zigzag, int num_blocos, int ***blocos);

#endif // CONDIFICACAO

