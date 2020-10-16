#include <stdio.h>

#define MAX_LINHAS 16
#define MAX_COLUNAS 16
#define MAX_CHAR 16

int main(int argc, char *argv[]) {
    
    char board[MAX_LINHAS][MAX_COLUNAS];
    char word[MAX_CHAR];
    int num_linhas, num_colunas;
    
    void START(char board[MAX_LINHAS][MAX_COLUNAS], char word[MAX_CHAR], int num_linhas, int num_colunas);
    START(board, word, num_linhas, num_colunas);

    return 0;
}

void createBoard(char board[MAX_LINHAS][MAX_COLUNAS], int num_linhas, int num_colunas) {
    for (int i=0; i<num_linhas; i++) {
        scanf("%s", board[i]);
    }
}

int stringtam(char word[MAX_CHAR]){
    int i=0;
    while (word[i] != '\0') {
        i++;
    }
    return i;
}

int RIGHT(char word[MAX_CHAR], char board[MAX_LINHAS][MAX_COLUNAS], int num_linhas, int num_colunas) {

    for (int i=0; i<num_linhas; i++){
        for (int k=0; k<num_colunas; k++){
            int letra = 0;
            int check = 0;
            int verificador = 0;

            if(board[i][k] == word[letra]){
                check = k;
                while (board[i][check] == word[letra] && check < num_colunas) {
                    check++;
                    letra++;
                    verificador++;
                }
                if(verificador == stringtam(word)){
                    printf("%d %d DIREITA", i+1,k+1);
                    return 1;
                }              
            }
        }
    }
    return 0;
}

int LEFT(char word[MAX_CHAR], char board[MAX_LINHAS][MAX_COLUNAS], int num_linhas, int num_colunas) {

    for (int i=0; i<num_linhas; i++){
        for (int k=0; k<num_colunas; k++){
            int letra = 0;
            int check = 0;
            int verificador = 0;

            if(board[i][k] == word[letra]){
                check = k;
                while (board[i][check] == word[letra] && check >= 0) {
                    check--;
                    letra++;
                    verificador++;
                }
                if(verificador == stringtam(word)){
                    printf("%d %d ESQUERDA", i+1,k+1);
                    return 1;
                }                
            }
        }
    }
    return 0;
}

int UP(char word[MAX_CHAR], char board[MAX_LINHAS][MAX_COLUNAS], int num_linhas, int num_colunas) {

    for (int i=0; i<num_linhas; i++){
        for (int k=0; k<num_colunas; k++){
            int letra = 0;
            int check = 0;
            int verificador = 0;

            if(board[i][k] == word[letra]){
                check = i;
                while (board[check][k] == word[letra] && check < num_linhas) {
                    check++;
                    letra++;
                    verificador++;
                }
                if(verificador == stringtam(word)){
                    printf("%d %d BAIXO", i+1,k+1);
                    return 1;
                }                
            }
        }
    }
    return 0;
}

int DOWN(char word[MAX_CHAR], char board[MAX_LINHAS][MAX_COLUNAS], int num_linhas, int num_colunas) {

    for (int i=0; i<num_linhas; i++){
        for (int k=0; k<num_colunas; k++){
            int letra = 0;
            int check = 0;
            int verificador = 0;

            if(board[i][k] == word[letra]){
                check = i;
                while (board[check][k] == word[letra] && check >= 0) {
                    check--;
                    letra++;
                    verificador++;
                }
                if(verificador == stringtam(word)){
                    printf("%d %d CIMA", i+1,k+1);
                    return 1;
                }                
            }
        }
    }
    return 0;
}

void START(char board[MAX_LINHAS][MAX_COLUNAS], char word[MAX_CHAR], int num_linhas, int num_colunas)
{
    scanf("%d %d", &num_linhas, &num_colunas);

    createBoard(board, num_linhas, num_colunas);
    
    scanf("%s", word);

    int teste_direita = RIGHT(word, board, num_linhas, num_colunas);
    int teste_esquerda = LEFT(word, board, num_linhas, num_colunas);
    int teste_baixo = DOWN(word, board, num_linhas, num_colunas);
    int teste_cima = UP(word, board, num_linhas, num_colunas);

    if (teste_direita == 0 && teste_esquerda == 0 && teste_baixo == 0 && teste_cima == 0) {
        printf("NAO ACHOU");    
    }
}
