/* tan example */
#include <stdio.h>      /* printf */
#include <math.h>       /* tan */
#define PI 3.14159265
int main ()
{
    double param, result;
    param = 45.0;
    result = tan ( param * PI / 180.0 );
    printf ("%f,%f\n", param, result );
 
}
