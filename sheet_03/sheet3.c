#include <stdio.h>
#include "include/functions.h"
#include <math.h>

int main(void)
{
double p0 = 0.0;
double p1 = 0.0;
double p2 = 0.0; 

double x_min = 0.0;
double y_min = 0.0;

double x_e_1 = 0.0;
double x_e_2 = 0.0;
double x_e_final = 0.0;

double d = 0.0;

scanf("%lf %lf %lf", &p0, &p1, &p2);

x_min = x_min_calc(p1,p2);
y_min = y_min_calc(p0,p1,p2);

x_e_1 = x_e_calc(p0,p1,p2,1); //uses the + in the quadratic equation
x_e_2 = x_e_calc(p0,p1,p2,2); //uses the - in the quadratic equation

x_e_final = x_e_comparator(x_e_1,x_e_2,x_min);

d = distance(x_e_final, x_min);

printf("%0.4f\n%0.4f\n%0.4f", x_min, y_min, d);

return 0;
}