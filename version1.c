#include <stdio.h>
int main()
{
 //Variables iniciales
 int A[]= {45, 23, 15, -19, -31};
 int n = sizeof(A) / sizeof(A[0]);
 int i,j, Aux;

 //imprimir el vector original
 printf("\n vector original:");
 for(int l=0; l < n; l++)
 {
  printf("\n A[%d] = %d", l, A[l]);
 }

 for(i=0; i < (n-1); i++) //ciclo externo para iteraciones
 {
  printf("\n --- Iteracion No. %d ---", i+1);

  for(j=i+1; j <= (n-1); j++) //ciclo interno para comparaciones
  {
   printf("\n Comparacio No.%d",j-i);
   if(A[i] > A[j]) //ordenar de forma Ascendente
   {
    printf("\n hay intercambio");
    Aux = A[i];
    A[i] = A[j];
    A[j] = Aux;
    printf("\n se intercambio A[%d] y A[%d]",i,j);
   }
   else
   {
    printf("\n no hay intercambio");
   }
   printf("\n el vector queda: ");

   //imprimir el vector una vez ordenado
   for(int k=0; k < n; k++)
   {
    printf("\n A[%d] = %d", k, A[k]);
   }

  } //fin del ciclo interno
        
 }// fin del cilo externo
 return 0;
}