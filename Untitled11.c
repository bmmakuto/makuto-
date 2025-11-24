//We’ll write a simple program helping us to
// solve a trigonometry problem for right-angled triangles. 
//The program will calculate the length of the hypotenuse using the lengths of the legs.

#include <math.h>
#include <stdio.h>

int main(void) {
    float a, b, a_sqr, b_sqr, c;

    printf("A?\n");
    scanf("%f", &a);
    a_sqr = a * a;
    printf("B?\n");
    scanf("%f", &b);
    b_sqr = b * b;
    c = sqrt(a_sqr +  b_sqr);
    printf("The length of the hypotenuse is: %f\n", c);
    return 0;
}
