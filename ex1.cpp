#include <iostream>

using namespace std;

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

int main(int argc,char** argv){
	
         
	
}
