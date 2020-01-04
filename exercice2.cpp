#include <iostream>
#include <cstdlib>
using namespace std;

int * alloue_vecteur(int dimension, int val){
	 int i; 
	 int *vecteur;
	 vecteur = (int*) malloc(dimension*sizeof(int)); 
	 for(i=0;i<dimension;i++) {
	 	vecteur[i]=val;
	 	 return vecteur;
	 }

}

void libere_vecteur(int * vecteur){
      free(vecteur); 	
} 

int main(int argc,char** argv){
	
         
	
}
