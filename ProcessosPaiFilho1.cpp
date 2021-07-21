#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int value = 5;
int main()
{ pid_t
pid;
pid = fork();
if (pid == 0) { /* processo-filho */
value += 15;
return 0;
}
else if (pid > 0) { /* processo-pai */
3.1
3.2
3.3
3.4
3.5
a.
b.
c.
3.6
3.7
wait(NULL);
printf(“PARENT: value = %d”,value); /* LINHA A */
return 0;
}
}
