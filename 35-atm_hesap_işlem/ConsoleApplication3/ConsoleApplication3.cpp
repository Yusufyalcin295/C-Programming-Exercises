#include <stdio.h>
#include <stdlib.h>



int main() 
{

	int secim, bakiye = 1000, tutar1, tutar2, tutar3;
	
	do
	{
		printf("\n1.Bakiye Sorgulama\n2.Para Yatirma\n3.Para Cekme\n4.Para Havale Etme\n5.Kart Iade\n");

		printf("\n\nSecim Yapiniz : "); scanf_s(" %d", &secim);

		switch (secim) {

		case 1:
			printf("Bakiyeniz :%d", bakiye);
			break;
		case 2:
			printf("Yatirilacak Tutari Girin:"); scanf_s("%d", &tutar1);
			bakiye += tutar1;
			printf("Yeni Bakiyeniz:%d", bakiye);
			break;
		case 3:
			printf("Cekilecek Tutari Girin:"); scanf_s("%d", &tutar2);
			if (tutar2 > bakiye) {
				printf("Bakiyeniz Yetersiz.Lutfen Yeni Tutar Girin.");
			}
			else {
				bakiye -= tutar2;
				printf("Yeni Bakiyeniz:%d", bakiye);
				break;
			}
		case 4:
			printf("Havale Edilecek Tutar:"); scanf_s("%d", &tutar3);

			if (tutar3 > bakiye) {
				printf("Bakiyeniz Yetersiz.Lutfen Yeni Tutar Girin.");
			}
			else {
				bakiye -= tutar3;
				printf("Yeni Bakiyeniz:%d", bakiye);
				break;

			}

		case 5:
			printf("Kartiniz iade ediliyor.");
			break;
		default:
			printf("Gecersiz secim , lütfen gecerli bir secim yapiniz.");

		}
	} while (secim != 5);


	return 0;
}



