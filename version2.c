#include <stdio.h>
int main()
{
 //Variables iniciales
 int A[]= {45, 23, 15, -19, -31};
 int n = sizeof(A) / sizeof(A[0]);
 int i,j, Aux;
 i = 0; //unico recorrido, primera iteración
	
 printf("vector original");
 for(int i=0; i < n; i++)
 {
  printf("\n A[%d] = %d", i, A[i]);
 }

 for(j=i+1; j <= (n-1); j++) //ciclo interno para comparaciones
 {
  printf("\n Comparacio No.%d",j);
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
  for(int i=0; i < n; i++)
  {
   printf("\n A[%d] = %d", i, A[i]);
  }

 } //fin del ciclo interno
 return 0;
}