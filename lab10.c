#include <stdio.h>
int main(){

    /*declarando variaveis*/
    int vetor1[2], dias, i, j, controleDia;

    /*lendo tamanho da matriz inicial*/
    scanf("%d %d",&vetor1[0], &vetor1[1]);

    /*declarando tamanho da matriz inicial*/
    int linha = vetor1[0], coluna = vetor1[1];
    int matriz1[linha+2][coluna+2];
    int matriz2[linha+2][coluna+2];

    /*lendo numero de dias*/
    scanf("%d",&dias);

    /*zerando as bordas da matriz*/
    for(i=0;i<(linha+1);i++){
        matriz1[i][0] = 0;
        matriz1[i][coluna+1] = 0;
        matriz2[i][0] = 0;
        matriz2[i][coluna+1] = 0;

    }
    for(i=0;i<(coluna+1);i++){
       matriz1[0][i] = 0;
        matriz1[linha+1][i] = 0;
        matriz2[0][i] = 0;
        matriz2[linha+1][i] = 0;
    }

    /*lendo matriz inicial*/
    for(i=1; i<(linha+1); i++){
        for(j=1; j<(coluna+1); j++){
            scanf("%d",&matriz1[i][j]);
        }
    }

    /*imprimindo interacao 0*/
    printf("iteracao 0\n");
    for(i=1; i<(linha+1); i++){
        for(j=1; j<(coluna+1); j++){
            printf("%d",matriz1[i][j]);
        }
        printf("\n");
    }

    /*fazendo interacoes ate os dias acabarem*/
    for(controleDia=1;controleDia<=dias;controleDia++){
        /*interacoes para cada matriz*/
        for(i=1; i<(linha+1); i++){
            for(j=1; j<(coluna+1); j++){

                /*SE FOR HUMANO*/
                if(matriz1[i][j]==1){
                    /*se houver pelo menos um zumbi, vira zumbi*/
                    if(matriz1[i-1][j-1]==2 || matriz1[i-1][j]==2 || matriz1[i-1][j+1]==2 || matriz1[i][j-1]==2 || matriz1[i][j+1]==2 || matriz1[i+1][j-1]==2 || matriz1[i+1][j]==2 || matriz1[i+1][j+1]==2){
                        matriz2[i][j] = 2;
                    }
                    else{matriz2[i][j] = matriz1[i][j];}
                }


                /*SE FOR VAZIO*/
                else if(matriz1[i][j]==0){
                    if(matriz1[i-1][j-1]==1 && matriz1[i-1][j]==1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]==1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]==1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]==1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]==1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]==1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]==1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]==1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]==1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]==1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]==1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]==1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]==1){
                        matriz2[i][j]=1;
                    }


                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]==1 && matriz1[i-1][j+1]==1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]==1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]==1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]==1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]==1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]==1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]==1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]==1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]==1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]==1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]==1){
                        matriz2[i][j]=1;
                    }


                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]==1 && matriz1[i][j-1]==1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]==1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]==1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]==1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]==1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]==1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]==1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]==1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]==1){
                        matriz2[i][j]=1;
                    }



                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]==1 && matriz1[i][j+1]==1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]==1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]==1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]==1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]==1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]==1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]==1){
                        matriz2[i][j]=1;

                    }


                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]==1 && matriz1[i+1][j-1]==1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]==1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]==1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]==1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]==1){
                        matriz2[i][j]=1;

                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]==1 && matriz1[i+1][j]==1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=1;
                    }
                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]==1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]==1){
                        matriz2[i][j]=1;

                    }

                    else if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]==1 && matriz1[i+1][j+1]==1){
                        matriz2[i][j]=1;

                    }

                    else{matriz2[i][j]=matriz1[i][j];}
                }


                /*SE FOR ZUMBI*/
                else if(matriz1[i][j]==2){
                    /*se nao houver nenhum humano*/
                    if(matriz1[i-1][j-1]!=1 && matriz1[i-1][j]!=1 && matriz1[i-1][j+1]!=1 && matriz1[i][j-1]!=1 && matriz1[i][j+1]!=1 && matriz1[i+1][j-1]!=1 && matriz1[i+1][j]!=1 && matriz1[i+1][j+1]!=1){
                        matriz2[i][j]=0;
                    }
                    /*se nao entrou no if anterior, ha pelo menos um humano*/
                    else {
                            /*se houver um segundo humano*/
                        if((matriz1[i-1][j-1]==1 && matriz1[i-1][j]==1) ||
                             (matriz1[i-1][j-1]==1 && matriz1[i-1][j+1]==1) ||
                             (matriz1[i-1][j-1]==1 && matriz1[i][j-1]==1) ||
                             (matriz1[i-1][j-1]==1 && matriz1[i][j+1]==1) ||
                             (matriz1[i-1][j-1]==1 && matriz1[i+1][j-1]==1) ||
                             (matriz1[i-1][j-1]==1 && matriz1[i+1][j]==1) ||
                             (matriz1[i-1][j-1]==1 && matriz1[i+1][j+1]==1) ||
                            (matriz1[i-1][j]==1 && matriz1[i-1][j+1]==1) ||
                             (matriz1[i-1][j]==1 && matriz1[i][j-1]==1) ||
                             (matriz1[i-1][j]==1 && matriz1[i][j+1]==1) ||
                             (matriz1[i-1][j]==1 && matriz1[i+1][j-1]==1) ||
                             (matriz1[i-1][j]==1 && matriz1[i+1][j]==1) ||
                             (matriz1[i-1][j]==1 && matriz1[i+1][j+1]==1) ||
                           (matriz1[i-1][j+1]==1 && matriz1[i][j-1]==1) ||
                             (matriz1[i-1][j+1]==1 && matriz1[i][j+1]==1) ||
                             (matriz1[i-1][j+1]==1 && matriz1[i+1][j-1]==1) ||
                             (matriz1[i-1][j+1]==1 && matriz1[i+1][j]==1) ||
                             (matriz1[i-1][j+1]==1 && matriz1[i+1][j+1]==1) ||
                           (matriz1[i][j-1]==1 && matriz1[i][j+1]==1) ||
                             (matriz1[i][j-1]==1 && matriz1[i+1][j-1]==1) ||
                             (matriz1[i][j-1]==1 && matriz1[i+1][j]==1) ||
                             (matriz1[i][j-1]==1 && matriz1[i+1][j+1]==1) ||
                           (matriz1[i][j+1]==1 && matriz1[i+1][j-1]==1) ||
                             (matriz1[i][j+1]==1 && matriz1[i+1][j]==1) ||
                             (matriz1[i][j+1]==1 && matriz1[i+1][j+1]==1) ||
                           (matriz1[i+1][j-1]==1 && matriz1[i+1][j]==1) ||
                             (matriz1[i+1][j-1]==1 && matriz1[i+1][j+1]==1) ||
                           (matriz1[i+1][j]==1 && matriz1[i+1][j+1]==1)){matriz2[i][j]=0;}
                        /*se nao houver o segundo humano*/
                        else{matriz2[i][j]= matriz1[i][j];}

                        }
                    }

                }
            }

            /*imprimindo a interacao do dia*/
            printf("iteracao %d\n",controleDia);
            for(i=1; i<(linha+1); i++){
                for(j=1; j<(coluna+1); j++){
                    printf("%d",matriz2[i][j]);
                }
                printf("\n");
            }

            /*transformando matriz2 em matriz1*/
            for(i=1; i<(linha+1); i++){
                for(j=1; j<(coluna+1); j++){
                    matriz1[i][j]=matriz2[i][j];
                }
            }

        }
    }

