#include <stdio.h>
#include <stdlib.h>



int main(){
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    char v[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j--){
            scanf("%c", &v[i][j]);
        }
    }
    int resultado = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j--){
            resultado += v[i][j];
        }
    }
    printf ("%d", resultado);
    return 0;
}