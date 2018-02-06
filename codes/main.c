//#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <libadd.h>
#include <libprod.h>

int d=4;

int main()
{


printf("Adding to d gives  %i\n",addition(d) );
printf("Substraction to d gives %i\n", substraction(d) );
printf("Multiplying d gives %i\n",multiplication(d) );
printf("Dividing d gives %i\n",division(d) );

return 0;
}
