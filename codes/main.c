//#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include "test.h"

int d;

int main()
{
d= Test(4);

printf("d vallait 4 et maintenant d vaut %i\n",d );

return 0;
}
