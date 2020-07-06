#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
	int k, n = 5, id;
	double x = 0, z, d = 0.01;
	for (k = 0; k < n; k++){
		id = fork();
		if (id < 0){
			printf(1, "%d failed in fork!\n", getpid());
		}
		else if (id > 0){ // we are in parent
			printf(1, "Parent %d creating child %d.\n", getpid(), id);
			wait();
		}
		else{//we are in child
			printf(1, "Child %d created\n", getpid());
			for(z = 0; z < 7000000.0; z+= d){
				x+= 1;
			}
			break;
		}
	
	}

	exit();
}
