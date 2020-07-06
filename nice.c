#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(int argc, char *argv[])
{
	int priority, pid;


	pid = atoi (argv[1]);
	priority = atoi(argv[2]);

	if (priority < 0 || priority > 100){
		printf(2, "Priority must be in the iverval [0, 100]\n");
		exit();
	}
	printf(1, "pid = %d, priority=%d\n", pid, priority);
	setpr(pid, priority);
	exit();
}
