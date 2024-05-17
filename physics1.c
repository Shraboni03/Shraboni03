#include <stdio.h>
#include <math.h>

int main() {
        printf("Double-slit diffraction maxima formula: d * sin(theta) = n * lambda\n");
        printf("where:\n");
        printf("  d - slit separation (in nanometers)\n");
        printf("  theta - diffraction angle (in degrees)\n");
        printf("  n - order of the diffraction maximum (integer; 0 for central maximum)\n");
        printf("  lambda - wavelength of light (in nanometers)\n\n");

        printf("Enter wavelength (lambda) in nm: ");
        double wavelength;
        scanf("%lf", &wavelength);

        if (wavelength < 380 || wavelength > 750) {
            printf("\033[0;31m");
            printf("Error: Wavelength must be within the visible range (380-750 nm).\n");
            printf("\033[0m");
        } else {
            printf("Enter slit separation (d) in micrometers: ");
            double slit_separation;
            scanf("%lf", &slit_separation);

            slit_separation *= 1000;

            if (wavelength == slit_separation) {
                printf("Wavelength is equal to slit separation.\n");
            } else if (wavelength > slit_separation) {
                printf("Wavelength is greater than slit separation.\n");
            } else {
                printf("Enter diffraction angle (theta) in degrees: ");
                double diffraction_angle;
                scanf("%lf", &diffraction_angle);

                double theta_radians = diffraction_angle * M_PI / 180;

                int order = round(slit_separation * sin(theta_radians) / wavelength);
                printf("The order of the diffraction maximum is: %d\n", order);
            }
        }
}
