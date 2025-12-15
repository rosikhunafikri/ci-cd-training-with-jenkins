#include <math.h>

typedef enum{
ADD = 1,
MINUS
} OPERAND;

double x_min_calc(double p1, double p2){
return -p1/(2.0 * p2); 
}

double y_min_calc(double p0, double p1, double p2){
return (p2 * ((-p1/(2.0 * p2)) * (-p1/(2.0 * p2)))) + (p1 * (-p1/(2.0 * p2))) + p0;
}

double x_e_calc(double p0, double p1, double p2, int operand){
double quadratics = (p1 * p1) - (4 * p0 * p2);
if(operand == ADD){
return (-p1/(2*p2)) + (sqrt(quadratics)/(2*p2));
}
else if(operand == MINUS){
return (-p1/(2*p2)) - (sqrt(quadratics)/(2*p2));
}
else{
return 0.0;
}
}

double x_e_comparator(double x_e_1, double x_e_2, double x_min){
if(x_e_1 >= x_min && x_e_2 >= x_min){
return (x_e_1 > x_e_2) ? x_e_1 : x_e_2;
}
else if(x_e_1 >= x_min){
return x_e_1;
}
else{
return x_e_2;
}
} 

double distance(double x_e, double x_min){
return fabs(x_e - x_min);
}
