#include<stdio.h>
int main(){
    int i,j,m1[5][5],m2[5][5],m3[5][5];
    printf("Primeira matriz\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Matriz 1 [%d][%d]: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nSegunda matriz\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Matriz 2 [%d][%d]: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(m1[i][j]>m2[i][j]){
                m3[i][j]=m1[i][j];
            }else{
                m3[i][j]=m2[i][j];
            }
        }
    }
    printf("\nMATRIZ 1\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",m1[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIZ 2\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",m2[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIZ DOS MAIORES VALORES\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}