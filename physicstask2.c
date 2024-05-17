#include <stdio.h>
#include <math.h>

int main() {
    double angle = 45.0;
    double radians = angle * (M_PI / 180.0);

    double ratio = 1.0 / sin(radians);
    printf("The ratio of the slit width to the wavelength for \nthe first diffraction minimum at %.2f° is: %.2f\n", angle, ratio);
}
