/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  int n=0;
  int i;
  int j = 0;
  int vetor [20000];

  FILE *pipe_sort;
  pipe_sort = popen("sort -n -r", "w");

  while (vetor[j]!= -1)
	{
	  j++;
	  scanf("%d", &vetor[j]);
	}
  for(int cont = 0; cont<j ; cont++)
	{
	  if(vetor[cont]==1)
		{
		  fprintf(pipe_sort, "%d\n", vetor[cont]);
		}
	  i=2;
	  for(i=2;i<=(vetor[cont]/2);i++)
		{
	  	  if(vetor[cont]%i==0)
			{
		  	  fprintf(pipe_sort, "%d\n", vetor[cont]);
		  	  break;
			}
		}
	  if(vetor[cont]==-1)
		{
		  break;
		}
	}


  pclose(pipe_sort);	
  return 0;
}
