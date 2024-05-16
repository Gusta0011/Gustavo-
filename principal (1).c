#include <stdio.h>

 int
main ()
{
  
int numero;
  
 
printf ("Digite um nC:mero inteiro positivo: ");
  
scanf ("%d", &numero);
  
 
if (numero < 0)
	{
	  
printf ("O nC:mero digitado nC#o C) positivo.\n");
	
}
  else
	{
	  
if (numero % 2 == 0)
		{
		  
printf ("O nC:mero digitado C) par.\n");
		
}
	  else
		{
		  
printf ("O nC:mero digitado C) C-mpar.\n");
		
}
	
}
  
 
return 0;

}

