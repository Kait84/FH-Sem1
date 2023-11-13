#include <stdio.h>

typedef enum bool{
    false,
    true
}bool;

#define MAX 5


bool ist_symmetrisch(int feld[MAX][MAX]){
    int i,j, tauschmatrix[MAX][MAX];
    //spalten, zeilen tauschen
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            tauschmatrix[i][j] = feld[j][i];
        }
    }
    ausgabe(feld);
    ausgabe(tauschmatrix);

    //überprüfung auf Symmetrie
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            if(tauschmatrix[i][j] != feld[i][j]){
                return 0;
            }
        }
    }
    return 1;

}

void ausgabe(int feld[MAX][MAX]){
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            printf("%d", feld[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

int main(void){
    int i, j, Matrix[MAX][MAX];

     //int Matrix[MAX][MAX] = {{1, 6, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

    //initialisierung
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            Matrix[i][j] = j;
        }
    }

    //überprüfung auf Symmetrie, ausgabe
    if(ist_symmetrisch(Matrix)){
        printf("Die Matrix ist symmetrisch\n");
    }else{
        printf("Die Matrix ist nicht symmetrisch\n");
    }

	return 0;
}
