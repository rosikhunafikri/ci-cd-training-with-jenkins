# Sheet 3 - Deep into the Water

This is a program to find the x and y-coordinates of the minimum point where the ball lies,
and the horizontal distance from the shore to that minimum point.

## Repository Structure

```
sheet3
│
├── include
│   └── functions.h
│    
├── Makefile
├── functions.c
└── sheet3.c

```

## Function Explanations

1. **double x_min_calc(double p1, double p2)**:
- Usage: calculates the x-coordinates
- Parameters: takes the p2 and p1 based on the quadratic equation
- Output: x-coordinate of minimum point (x_min)

2. **double y_min_calc(double p0, double p1, double p2)**:
- Usage: calculates the y-coordinates
- Parameters: takes the p2, p1, p0 based on the quadratic equation
- Output: y-coordinate of minimum point (y_min)

3. **double x_e_calc(double p0, double p1, double p2, OPERAND op)**:
- Usage: finds the possible x-coordinates of the distance x_e
- Parameters: takes the p2, p1, p0 based on the quadratic equation, and the OPERAND to get both +/- results
- Output: x-coordinate based on OPERAND

4. **double x_e_comparator(double x_e_1, double x_e_2, double x_min)**:
- Usage: finds the valid x-coordinate
- Parameters: takes x_e_1 (+) and x_e_2 (-) coordinates, and x-coordinate of minimum point
- Output: furthest x-coordinate from x-coordinate of minimum point (x_e_final)

5. **double distance(double x_e, double x_min)**:
- Usage: finds the distance between x_e_final and x_min
- Parameters: takes x_e_final and x_min
- Output: distance between them both



