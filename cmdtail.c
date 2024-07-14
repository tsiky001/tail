#include "tail.h"

int main(int argc , char* argv[]){
	int n = 0 ;
	int c= 0 ;
	FILE* f = NULL ;


	if(strcmp(argv[1],"-n")==0)
	{
		f=open(argv[3]); 
		n=countline (&f);
		
		tailN(&f,argv[2],n);
		///printf("Okayyy");
		close(&f);
	}

	else if(strcmp(argv[1],"-c")==0)
	{
		f=open(argv[3]);
		c=countchar(&f);
		tailC(&f,argv[2],c);
		close(&f);
	}

	else if(strcmp(argv[1],"-q")==0)
	{
		f=open(argv[2]);
		tailQ(&f );
		close(&f);
		f=open(argv[3]);
		tailQ(&f);
		close(&f);
	}

	else if(strcmp(argv[1],"--help")==0)
	{
		f=fopen("helptail.txt","r");
		tailQ(&f);
		close(&f);
	}

	else if(strcmp(argv[1],"-v")==0)
	{
		tailV(argv[2]);
		f=open(argv[2]);
		tailQ(&f);
		close(&f);
	}
	else
	{
		exit(1);
	}

	return 0 ;
}
