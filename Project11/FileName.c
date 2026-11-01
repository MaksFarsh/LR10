#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
double square(double x_mx, double y_mx);

void main() {
	setlocale(LC_ALL, "RUS");
	double x_mx, y_mx;

	puts("Введите абсциссу точки: ");
	scanf("%lf", &x_mx);

	puts("Введите ординату точки: ");
	scanf("%lf", &y_mx);

	printf("Площадь данной фигуры равна: %lf", square(x_mx, y_mx));
	printf("\n");
	draw_figure(x_mx, y_mx);
}

double square(double x_mx, double y_mx) {
	double s_sq, s_tr1, s_tr2, s_f;
	s_sq = x_mx * y_mx;
	s_tr1 = x_mx * y_mx / 2;
	s_tr2 = (x_mx - 2) * (y_mx - 4) / 2;
	s_f = s_sq - s_tr1 - s_tr2;
	return s_f;
}

int draw_figure(double x_mx, double y_mx) {
	double y1, y2, x1, x2;
	for (double y = y_mx; y >= 0; y--) {
		for (double x = 0; x <= x_mx; x++) {
			y1 = - 2 * x - 6;
			y2 = - x + 6;
			x1 = (y - 4) / -2;
			x2 = 6 - y;
			if ((x >= x1 && y >= y1) && (x <= x2 && y <= y2))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}