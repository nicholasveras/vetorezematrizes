// 1) Escreva uma função, que  copie  o  conteúdo  da string  A  para  a  string  B, usando vetores. //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char stringA[50] = {"ConteudoA"}; 
    char stringB[50] = {"ConteudoB"};

    printf("\ncopia_string:\nstringA: %s\nstringB: %s\n", stringA, stringB);
    strcpy(stringB, stringA);

    printf("\ncopia_string:\nstringA: %s\nstringB: %s\n", stringA, stringB);

    return 0;
}

// 2) Escreva um programa que recebe uma matriz quadrada, de qualquer tamanho e retorne os valores das somas dos seguintes elementos: //
#include <stdio.h>
#include <stdlib.h>

int main() {

    int size = 3;
    int i, j, mat[size][size];
    int result1 = 0;
    int result2 = 0;


    strand(time(NULL));

    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            mat[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            printf("%2d", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nDiagonal Principal: ")
    for(i = 0; i< size; i++)
    {
        printf("%d", mat [i][i]);
    }

    printf("\n\nSoma Diagonal Principal: ")
    for(i = 0; i< size; i++)
    {
        result1 += mat[i][i];
    }
    printf("%d", result1);

    printf("\n\nDiagonal Secundaria: ")
    for(i = 0; i< size; i++)
    {
        printf("%d", mat[i[size - 1 - i]]);
    }

    printf("\n\nSoma Diagonal Secundaria: ")
    for(i = 0; i< size; i++)
    {
        result2 += mat[i][size -1 -i];
    }
    printf("%d", result2);
}

// 3) Escreva um programa que receba duas Matrizes, do mesmo tamanho, e responda se elas são Matrizes Opostas. //
#include <stdio.h>

int main(void) {
    
    int i, j,  A[3][3] = {1,-1,9,7,14,-8,0,-5,-5},
               B[3][3] = {-1,1,-9,-7,-14,8,0,5,5};
    int result; 
    
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result = A[i][j] + B[i][j];
        }
    }
    
    if(result == 0)
    {
        printf("\n\n As matrizes sao opostas!");
    }
    else {
        printf("\n\n As matrizes nao sao opostas!");
    }
    
    printf("\n\n");
    
    return 0;
}

// 4) Escreva um programa que receba uma matriz, de qualquer tamanho e faça a sua transposição linhas vs colunas e imprima na tela a nova matriz. //
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sizeL = 5, sizeC = 4;
    int l, c, mat[sizeL][sizeC], trans[sizeC][sizeL];

    srand(time(NULL));

    for(l = 0; l < sizeL; l++){
        for(c = 0; c < sizeC; c++){
            mat[l][c] = rand() % 500;
        }
    }

    printf("\n Matriz gerada: \n");
        for(l = 0; l < sizeL; l++){
        for(c = 0; c < sizeC; c++){
            printf(" %3d ", mat[l][c]);
        }
        printf("\n");
        }

    for(l = 0; l < sizeL; l++){
        for(c = 0; c < sizeC; c++){
            trans[c][l] = mat[l][c];
        }
    }

    printf("\n Transposicao da Matriz: \n");
    for(l = 0; l < sizeC; l++)
        for(c = 0; c < sizeL; c++) {
            printf("%3d", trans[l][c]);
        }
        printf("\n");

    return 0;

}
