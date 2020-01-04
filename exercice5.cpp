#include <iostream>
#include <cstdlib>
using namespace std;

//de exercice1
void affiche_vecteur(int * vecteur,int dimention){
	int i; 
	printf("( ");
	for(i=0;i<dimention;i++){
		printf("%d ",vecteur[i]);
		printf(")\n");
	}
}
//exer5
int ** alloue_matrice_pascal(int dimension) { 
	int i,j; 
	int** matrice =(int **) malloc(dimension*sizeof(int *));
	 for (i=0;i<dimension;i++){
	 	matrice[i]=(int *)malloc(i*sizeof(int)); 
		return matrice;
	 }  
} 

int ** remplit_matrice_pascal(int dimension){
	int i,j; 
	int** matrice =(int **) alloue_matrice_pascal(dimension); 
	for (i=0;i<dimension;i++) {
	matrice[i][0]=1; matrice[i][i]=1; 
	} 
	for (i=2;i<dimension;i++){
		for(j=1;j<i;j++) { 
	 	matrice[i][j]= matrice[i-1][j-1]+ matrice[i-1][j]; 
		}	
	 return matrice; }
}

void affiche_matrice_pascal(int ** matrice, int dimension) { 
	int i; 
	for(i=0;i<dimension;i++){
		affiche_vecteur(matrice[i],i+1); 
		printf("\n");
	} 
}

int main(int argc,char** argv){
	
         
	
}
