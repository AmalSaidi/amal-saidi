#include <iostream>
#include <cstdlib>
using namespace std;

//exercice1
int * alloue_vecteur(int dimension, int val){
	 int i; 
	 int *vecteur;
	 vecteur = (int*) malloc(dimension*sizeof(int)); 
	 for(i=0;i<dimension;i++) {
	 	vecteur[i]=val;
	 	 return vecteur;
	 }

}

//exer6
int* recupere_n_entier(int n) {
	int i;
	int * tableau = alloue_vecteur(n,0);
	 for(i=0;i<n;i++){
	 	scanf("%d",&tableau[i]);
		 return tableau; 
	 }
} 

int * recupere_entiers(int n,int taille_max){
	int i;
	int * tableau = (int *) alloue_vecteur(n,0);
	for(i=0;i<taille_max;i++){ 
	 if(i == n){ 
		n+=n;
		tableau= (int *)realloc((void *)tableau, sizeof(int) * n);
	 } 
	scanf("%d",&tableau[i]); 
	} 
	return tableau; 
}
int main(int argc,char** argv){
	
         
	
}

