#include <stdio.h>
#define PI 3.1415926535

int main(void){
    float durchmesser, drehzahl1, drehzahl2, radumfang, geschwindigkeitms, geschwindigkeitkmh;
	durchmesser = 0.7; 	// in m/s
	drehzahl1 = 10.0;		// in Umdr./s
	drehzahl2 = 8.0;		// in Umdr./s

	radumfang = durchmesser*PI;
	geschwindigkeitms = (radumfang*drehzahl1 + radumfang*drehzahl2)/2;
	geschwindigkeitkmh = geschwindigkeitms*3.6;
	printf("Die Geschwindigkeit ist %.2f Meter/Sekunde bzw.\n\t\t\t%.0f km/h \n", geschwindigkeitms, geschwindigkeitkmh);

	return 0;
}
