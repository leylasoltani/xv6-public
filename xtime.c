#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

	int pid;
	int status, a = 0, b = 0;	
  fork();
	
  status = waitx(&a, &b);
 	  
 	printf(1, "Wait Time = %d\n Run Time = %d with Status %d \n", a, b, status); 
 	exit();
}
