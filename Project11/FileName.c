#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
double square_figure(double x_mx);

void main() {
	setlocale(LC_ALL, "RUS");
	double x_mx;

	puts("Введите абсциссу и ординату точки: ");
	scanf("%lf", &x_mx);
	printf("Площадь данной фигуры равна: %lf", square_figure(x_mx));
	printf("\n");
	draw_figure(x_mx, x_mx);
}

double square_figure(double x_mx) {
	double s_f , s_c, s_tr;
	s_c = (1.0 / 4.0) * pi * pow(x_mx,2);
	s_tr = (1.0 / 2.0) * pow(3, 2);
	s_f = s_c - s_tr;
	return s_f;
}

int draw_figure(double x_mx, double y_mx) {
	double y1, y2, x1, x2;
	for (double y = y_mx; y >= 0; y--) {
		for (double x = 0; x <= x_mx; x++) {
			y1 = -x + 3;
			y2 = sqrt(36 - pow(x, 2));
			x1 = -y + 3;
			x2 = sqrt(36 - pow(x, 2));
			if ((x >= x1 && y >= y1) && (x <= x2 && y <= y2))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}