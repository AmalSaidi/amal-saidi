#include <iostream>
#include <cstdlib>
using namespace std;

int *** alloue_tableau_3D(int longueur, int largeur, int hauteur){
	int i, j;
	int*** tableau =(int ***) malloc (longueur * sizeof (int **));
	tableau[0] =(int **) malloc (longueur * largeur * sizeof (int *)); 
	tableau[0][0] =(int*) malloc (longueur * largeur * hauteur * sizeof (int));
	for (i = 0; i < longueur; i++){
		tableau[i] = tableau[0] + i * largeur;
		for (j = 0; j < largeur; j++){
			tableau[i][j] = tableau[0][0] + i * largeur * hauteur + j * hauteur;

		}
		return tableau;
	}
}

void libere_tableau_3D(int *** tableau){
	free(tableau[0][0]);
	free(tableau[0]);
	free(tableau);
}

void affiche_tableau_3D(int *** tableau,int longueur, int largeur, int hauteur){
	int i,j,k; 
	for(i=0;i<longueur;i++){
 		printf("( ");
 		for(j=0;j<largeur;j++){
 			printf("( ");
 			for(k=0;k<hauteur;k++){
 				 printf("%d",tableau[i][j][k]);
			 }
			  if(j==largeur-1) {
			  	printf(") ");
			  } else {
			  	printf(")\n ");
			  }
		 }
		  printf(" )\n\n ");
	}
}

int main(int argc,char** argv){
	
         
	
}
