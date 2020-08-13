#include <stdio.h>
void prize() {
	int pen = 10;
	int ruler = 5;
	int book = 22;
	int eraser = 5;
	int pencil = 5;
	int ppen, rruler, bbook, eeraser, ppencil, tpen, truler, tbook, teraser, tpencil;
	float Vat, Total, real;
	printf("pen volume : ");
	scanf_s("%d", &ppen);
	printf("ruler volume : ");
	scanf_s("%d", &rruler);
	printf("book volume : ");
	scanf_s("%d", &bbook);
	printf("eraser volume : ");
	scanf_s("%d", &eeraser);
	printf("pencil volume : ");
	scanf_s("%d", &ppencil);
	printf("-----------------\n");
	tpen = pen * ppen;
	printf("pen : %d \n", tpen);
	truler = ruler * rruler;
	printf("ruler : %d \n", truler);
	tbook = book * bbook;
	printf("book : %d \n", tbook);
	teraser = eraser * eeraser;
	printf("eraser : %d \n", teraser);
	tpencil = pencil * ppencil;
	printf("pencil : %d \n", tpencil);
	Total = tpen + truler + tbook + teraser + tpencil;
	printf("-----------------\n");
	printf("Totals = %.2f baht", Total);
	printf("\n-----------------\n");
	if (Total > 50) {
		printf("Congrat you can get Coupon 20 baht!!!");
	}
	else {
		printf("No coupon");
	}
	printf("\n-----------------\n");
	Vat = ((Total * 7) / 100);
	printf("Vat 7 : %.2f", Vat);
	printf("\n-----------------\n");
	real = Total - Vat;
	printf("After VAT = %.2f", real);
	printf("\n-----------------\n");
	printf("Thank you for using the service");
	printf("\n-----------------\n");
}
int main() {
	prize();
	return 0;
}