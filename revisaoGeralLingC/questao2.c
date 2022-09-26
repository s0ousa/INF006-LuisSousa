#include <stdio.h>

int
main ()
{


  int pessoasComMenos21 = 0;
  int pessoasComMais50 = 0;
  int idadeAtual =-1;

  while (idadeAtual < 0)
    {
      printf ("Digite a idade de alguC)m. Digite valores negativos para parar \n ");
      scanf ("%i", &idadeAtual);

      if (idadeAtual > 50)
	{
	  pessoasComMais50++;
	}

      if (idadeAtual < 21)
	{
	  pessoasComMenos21++;
	}



    }

  printf ("Pessoas com menos de 21 : %i \n", pessoasComMenos21);
  printf ("Pessoas com mais de 50 : %i \n", pessoasComMais50);

  return 0;
}
