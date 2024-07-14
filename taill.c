#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tail.h"

FILE* open(char* argv)
{
	FILE* f = NULL ;
	f=fopen(argv,"r");
	if(f==NULL)
	{
		printf("Erreur lors de l'ouverture");
		exit (0);
	}
	return f ;
}

void close (FILE** f)
{
	fclose(*f);
	printf("success\n");
}

int countline (FILE** f)
{
	int n ;
	
	while(!feof(*f))
	{
		if(fgetc(*f)=='\n')
		{
			n++;
		}
		printf("%d\n",n);
	}
	
	return n ;

}

void tailN(FILE** f,char *argv,int n)
{
	char car;

	int i ;
	int j ;
	int k ;

	k = atoi(argv);
	j=n-k;
	///rewind(*f);
	
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
}

int countchar(FILE** f)
{
	int c ;
	char cara;
	while((cara=fgetc(*f))!=EOF)
	{
		c++;
	}
	return c ;
}

void tailC(FILE** f,char *argv , int n)
{
	char car;
	char cara;
	int i ;
	int j ;
	int k ;
	k = atoi(argv);
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

}

void tailQ(FILE** f)
{
	char car;

	while(!feof(*f))
	{
		car=fgetc(*f);
		printf("%c",car);
	}

}

void tailV(char* argv)
{
	printf("==> %s <==",argv);
}
