#include <iostream>
#include <cstdlib>
using namespace std;

int ** alloue_matrice (int lignes, int colonnes,int val){
	int i,j; 
	int** matrice = (int**) malloc(lignes*sizeof(int *)); 
	for (i=0;i<lignes;i++) {
	matrice[i] = (int *) malloc(colonnes*sizeof(int));	
	}
	for (i=0;i<lignes;i++) {
		for(j=0;j<colonnes;j++){
			matrice[i][j]=val;
			return matrice;
		}
	}
}

void libere_matrice(int ** matrice,int lignes){
	 int i; 
	 for (i=0;i<lignes;i++){
	 	free((int *)matrice[i]);
	 }  
}


int main(int argc,char** argv){
	
         
	
}
