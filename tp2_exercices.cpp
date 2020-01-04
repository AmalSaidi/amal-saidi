// exercice 1 :
void affiche vecteur(int * vecteur, int dimension)
{
int i;
printf("( ");
for(i=0;i<dimension;i++)
printf("%d ",vecteur[i]);
printf(")\n");
}
void affiche matrice(int ** matrice, int lignes,int colonness)
{
int i;
for(i=0;i<lignes;i++)
1affiche vecteur(matrice[i],colonnes);
printf("\n");
}




// exercice 2 :
int *alloue vecteur(int dimension, int val)
{
int i;
int * vecteur = malloc(dimension∗sizeof(int));
for(i=0;i<dimension;i++)
vecteur[i]=val;
return vecteur;
}
void libere vecteur(int * vecteur)
{
free(vecteur);
}


//exercice 3:
int ** alloue matrice (int lignes, int colonnes,int val)
{
int i,j;
int∗∗ matrice = malloc(lignes∗sizeof(int *));
for (i=0;i<lignes;i++)
matrice[i]= malloc(colonnes∗sizeof(int));
for (i=0;i<lignes;i++)
for(j=0;j<colonnes;j++)
matrice[i][j]=val;
return matrice;
}
void libere matrice(int ** matrice,int lignes)
{
int i;
for (i=0;i<lignes;i++)
free((int *)matrice[i]);
}



//exercice 4:
int ** alloue matrice zero(int lignes, int colonnes)
{
int i;
int** matrice = calloc(lignes,sizeof(int *));
for (i=0;i<lignes;i++)
matrice[i]= calloc(colonnes,sizeof(int));
return matrice;
}
int **genere matrice identite(int dimension)
{
int i;
int **identite = alloue matrice zero(dimension,dimension);
for (i=0;i<dimension;i++)
identite[i][i]=1;
affiche matrice(identite,dimension,dimension);
return identite;
}


//exercice 5;

int **alloue matrice pascal(int dimension)
{
int i,j;
int** matrice = malloc(dimension∗sizeof(int *));
for (i=0;i<dimension;i++)
matrice[i]= malloc(i∗sizeof(int));
return matrice;
}
int **remplit matrice pascal(int dimension)
{
int i,j;
int** matrice = alloue matrice pascal(dimension);
for (i=0;i<dimension;i++)
{
matrice[i][0]=1;
matrice[i][i]=1;
}
for (i=2;i<dimension;i++)
for(j=1;j<i;j++)
{
matrice[i][j]= matrice[i−1][j−1]+ matrice[i−1][j];
}
return matrice;
}

