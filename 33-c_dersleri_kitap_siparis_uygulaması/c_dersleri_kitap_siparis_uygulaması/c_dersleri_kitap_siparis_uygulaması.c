#include <stdio.h>
#include <stdlib.h>

int main() {
    int bookPrice = 20;
    int orderQuantity = 0;
    float discountRate = 0.0, noDiscountPrice, discountAmount, totalSum;

    printf("Kac adet kitap siparis edeceksiniz: ");
    scanf_s("%d", &orderQuantity);

    // İndirim oranlarını belirleme (Daha temiz yapı)
    if (orderQuantity >= 60) {
        discountRate = 0.30;
    }
    else if (orderQuantity >= 30) {
        discountRate = 0.20;
    }
    else if (orderQuantity >= 10) {
        discountRate = 0.12;
    }
    else {
        discountRate = 0.02;
    }

    noDiscountPrice = (float)bookPrice * orderQuantity;
    discountAmount = noDiscountPrice * discountRate;
    totalSum = noDiscountPrice - discountAmount;

    printf("\n--- Siparis Ozeti ---\n");
    printf("Indirimsiz Tutar: %.2f TL\n", noDiscountPrice);
    printf("Uygulanan Indirim (%%%.0f): %.2f TL\n", discountRate * 100, discountAmount);
    printf("Toplam Odenecek: %.2f TL\n", totalSum);

    return 0;
}