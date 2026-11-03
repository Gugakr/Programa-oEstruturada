#include<stdio.h>
#include<stdlib.h>
int main(){
    int lin,col,l,c.
    float *mat;
    printf("%i%i",&lin,&col);
    mat=(float**)malloc(lin*sizeof(float));
    if(mat==NULL){
        exit(1)
    }
    for(l=0;l<lin;l++){
        mat[l]=(float)malloc(col*sizeof(float));
        if(mat[l]==NULL){
            exit(2);
        }
    }
    printf("Digite %i numeros:\n",lin*col);
    for(l=0;l<lin;l++){
        for(c=0;c<col;c++){
            scanf("%f",&mat[l][c]);
        }
    }
    printf("\n\nMostrando matriz\n\n");
    for(l=0;l<lin;l++){
        for(c=0;c<col;col++){
            printf("%.2f\t",mat[l][c]);
        }
        printf("\n");
    }
    for(l=0;l<lin;l++){
        free(mat[l]);
    }
    free(mat);
}