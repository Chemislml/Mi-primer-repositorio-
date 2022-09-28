
#include <stdio.h>

void main (void)

{
	int pix_ancho, pix_alto, Xizq, Xder, Yizq, Yder;
	float porcentaje_ancho, porcentaje_alto, Xporcentaje, Yporcentaje;

	scanf_s ("%i", &pix_ancho);
	scanf_s ("%i", &pix_alto);
	scanf_s ("%f", &Xporcentaje);
	scanf_s ("%f", &Yporcentaje);
	scanf_s ("%f", &porcentaje_ancho);
	scanf_s ("%f", &porcentaje_alto);

	Xizq = Xporcentaje * pix_ancho;
	Yizq = Yporcentaje * pix_alto;
	Xder = pix_ancho * porcentaje_ancho+Xizq;
	Yder = pix_alto * porcentaje_alto+Yizq;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", pix_ancho, pix_alto, Xporcentaje, Yporcentaje, porcentaje_ancho, porcentaje_alto, Xizq, Yizq, Xder, Yder);

}

