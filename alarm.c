#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>	

void sig_handler(int signum)
{
	printf("Signal error number is %d\n",signum);
	exit(0);
}



int main()
{
	alarm(5);
	signal(SIGALRM, sig_handler);

	for(;;)
		sleep(1);

	return 0;
}
