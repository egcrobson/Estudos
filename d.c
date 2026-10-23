#include <stdio.h>
#include <stdlib.h>

main () {
char ip[16];
char var[100];

printf("Entre com o numero do ip: ");
scanf("%s",&ip);


sprintf(var, "ping %s", ip);
system(var);

return 0;
}
