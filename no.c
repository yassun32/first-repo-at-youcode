 #include <stdio.h>
 
   void afichage(int tab[],int nmbNote){
     printf("Les notes sont :\n");
     for(int j = 0; j < nmbNote; j++)
      {
        printf("%d \n",tab[j]);
      }
   }


   void maxv(int tab[],int nmbNote)
   {
    int max,temp1;
    max=tab[0];
    for (int i = 1; i <nmbNote; i++)
    { if ( tab[i]>max)
      max=tab[i];
    }
    printf("%d est la note maximale",max);

   }
   void moyennze(int moyenne,int nmbNote){
    int moyenne,somme;
    moyenne=somme/nmbNote;


   }
   
   int main(){ 
   int nmbNote;
     printf("entrer le nombre des notes: ");
     scanf("%d",&nmbNote);
  
    int tab[nmbNote];
    for( int i=0; i<nmbNote; i++) 
   {
      printf("Entrer la note %d: ", i+1);
      scanf(" %d", &tab[i] );
   }
   
  
    afichage(tab,nmbNote);
    maxv(tab,nmbNote);
    moyennze(moyenne,nmbNote);
    
   
   
   return 0;
 }