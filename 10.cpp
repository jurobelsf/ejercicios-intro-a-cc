// Ejercicio. Haga un programa que Lea el tamaño de la matriz, lea fila por fila sus elementos y luego imprima su transpuesta

#include<stdio.h>
#include<stdlib.h>

void crear(int* matrix[], int n, int &m){
    for(int i=0;i<n;i++){
        matrix[i] = new int[m];
    }
}
void llenar(int* matrix[], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &matrix[i][j]);
        }
	}
}

void imprimir_traspuesta(int* matrix[], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matrix[j][i]);
        }
    printf("\n");    
    }
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    
    int* matrix[n]; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    
    crear(matrix,n,m);
    llenar(matrix,n,m);
    imprimir_traspuesta(matrix,n,m);
    return 0;
}

