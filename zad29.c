// Program ce izvrsit bubble sort polja.

#include<stdio.h>

int main(){

   int brojac, temp, i, j, polje[30];

   printf("Koliko brojeva ces unijeti u polje: ");
   scanf("%d",&brojac);

   printf("Unesi %d brojeve: ",brojac);

   for(i=0;i<brojac;i++)
   scanf("%d",&polje[i]);

   /* Buuble sort algoritam
    */
   for(i=brojac-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(polje[j]>polje[j+1]){
           temp=polje[j];
           polje[j]=polje[j+1];
           polje[j+1]=temp;
        }
      }
   }

   printf("Sortirano polje: ");
   for(i=0;i<brojac;i++)
      printf(" %d",polje[i]);

   return 0;
}
