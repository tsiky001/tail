#include <tail.h>


int main(int argc , char* argv[]){
	FILE* f = NULL ;

	if(strcmp(argv[1],"-n")==0)
	{
		tailN(&f,argv[2],argv[3]);
	}

	else if(strcmp(argv[1],"-c")==0)
	{
		tailC(&f,argv[2],argv[3]);
	}

	else if(strcmp(argv[1],"-q")==0)
	{
		tailQ1(&f , argv[2]);
		tailQ2(&f , argv[3]);
	}

	else if(strcmp(argv[1],"--help")==0)
	{
		helptail(&f);
	}

	else if(strcmp(argv[1],"-v")==0)
	{
		tailV(argv[2]);
		tailQ1(&f , argv[2]);
	}
	else
	{
		exit(1);
	}
	return 0 ;
}

