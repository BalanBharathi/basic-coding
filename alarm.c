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
	/* Generate an Alarm signal after 5 seconds. */
	alarm(5);
	/* When an alarm signal SIGALRM was generated,
	   handle this signal with a handler.
	*/
	signal(SIGALRM, sig_handler);

	/* infinite loop, execution comes here only when
           there is no exit in sig_handler. */
	for(;;)
		sleep(1);

	return 0;
}
