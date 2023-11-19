#include "stdio.h"

int matriz(int n){   
    int i, j, M[n][n], diagonal_superior;
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
           scanf("%d", &M[i][j]);
        }
    }
   
    diagonal_superior = 1;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i > j && M[i][j] != 0){
                diagonal_superior = 0;
            }
        }
    }
    
    return diagonal_superior;
} 

int main(){
    int n, diagonal_superior;
   
    scanf("%d ", &n);
    diagonal_superior = matriz(n);
    
    printf("%d", diagonal_superior);
    
    return 0;
}