#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int 
main (int argc, char *argv[])
{
	int pid =fork(); 
	
	if (pid > 0){
		int *a = malloc(sizeof(int) * 200);
		a[0] = 10;
		cps();
	
	}
	else{
		//int *b = malloc(sizeof(int) * 1000);
 	        //b[0] = 10;

	}
	
	exit();

}
