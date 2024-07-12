#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tail.h"

void tailN(FILE** f,char *argv,char *argt)
{
	char car;
	int n ;
	int i ;
	int j ;
	int k ;

	*f=fopen(argt,"r");

	k = atoi(argv);

	if(*f==NULL)
	{
		printf("Erreur lors de l'ouverture");
		exit (0);
	}

	else
	{
		while(!feof(*f))
		{
			if(fgetc(*f)=='\n')
			{
				n++;
			}
		}

		j=n-k;
		rewind(*f);
		
		while(!feof(*f))
		{
			if(fgetc(*f)=='\n')
			{
				i++;
				if(i>=j)
				{
					while(!feof(*f))
					{
						car=fgetc(*f);
						printf("%c",car);
					}
				}
			}
		}

		fclose(*f);
	}
}

void tailC(FILE** f,char *argv , char *argt)
{
	char car;
	char cara;
	int n ;
	int i ;
	int j ;
	int k ;
	k = atoi(argv);

	*f=fopen(argt,"r");
	if(*f==NULL)
	{
		printf("Erreur lors de l'ouverture");
		exit (0);
	}
	
	else
	{
		while((cara=fgetc(*f))!=EOF)
		{
			n++;
		}

		j=n-k;
		rewind(*f);

		while((cara=fgetc(*f))!=EOF)
		{
			i++;
			if(i>=j)
			{
				while(!feof(*f))
				{
					car=fgetc(*f);
					printf("%c",car);
				}
			}
		}

		fclose(*f);
	}

}

void tailQ1(FILE** f,char *argv)
{
	char car;

	*f=fopen(argv,"r");

	if(*f==NULL)
	{
		printf("Erreur lors de l'ouverture fic1");
		exit (0);
	}

	else
	{
		while(!feof(*f))
		{
			car=fgetc(*f);
			printf("%c",car);
		}
	}

	fclose(*f);

}

void tailQ2(FILE** f,char *argv)
{
	char car;

	*f=fopen(argv,"r");

	if(*f==NULL)
	{
		printf("Erreur lors de l'ouverture fic2");
		exit (0);
	}

	else
	{
		while(!feof(*f))
		{
			car=fgetc(*f);
			printf("%c",car);
		}
	}

	fclose(*f);
}

void helptail(FILE** f)
{
	char car;
	*f=fopen("helptail.txt","r");
	if(*f==NULL)
	{
		printf("Erreur lors de l'ouverture");
		exit (0);
	}
	else{
		while(!feof(*f))
		{
			car=fgetc(*f);
			printf("%c",car);
		}
	}
	fclose(*f);
}

void tailV(char* argv)
{
	printf("==> %s <==",argv);
}

