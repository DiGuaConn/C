/* cos example */
#include <stdio.h>      /* printf */
#include <math.h>       /* cos */
#define PI 3.14159265
main ()
{
    double param, result;
    param = 60.0;
    result = cos ( param * PI / 180.0 );
    printf ("%f,%f\n", param, result );
    
}
