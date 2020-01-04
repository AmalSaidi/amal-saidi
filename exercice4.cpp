#include <iostream>
#include <cstdlib>
using namespace std;

//d'apres exercice1
void affiche_vecteur(int * vecteur,int dimention){
	int i; 
	printf("( ");
	for(i=0;i<dimention;i++){
		printf("%d ",vecteur[i]);
		printf(")\n");
	}
}

void affiche_matrice(int ** matrice, int lignes,int colonness){
	int i; 
	for(i=0;i<lignes;i++){
		affiche_vecteur(matrice[i],colonness);
		 printf("\n");
	}

}
//exo4
int ** alloue_matrice_zero(int lignes, int colonnes) { 
    int i; 
	int** matrice = (int **) calloc(lignes,sizeof(int *));
	for (i=0;i<lignes;i++){
		matrice[i]= (int *) calloc(colonnes,sizeof(int)); 
		return matrice; 	
	} 
}

int ** genere_matrice_identite(int dimension) { 
	int i;
	int ** identite =(int **) alloue_matrice_zero(dimension,dimension); 
	for (i=0;i<dimension;i++){
		identite[i][i]=1; 
		affiche_matrice(identite,dimension,dimension);
		return identite; 
	} 
}

int main(int argc,char** argv){
	
         
	
}
