#include <stdio.h>
#include <stdlib.h>
//Rastgele erişimli dosya uygulaması 

typedef struct customer {
	int no;
	char name[20];
	char lastname[20];
	int account;

}customer;


int main() {
	
	customer emptycustomer = { 0,"","",0 };
	FILE* fp = NULL; 

	if ((fp = fopen("RecordOfCustomer.txt", "w" ))== NULL) {

		printf("Fıle is not opened\n");
	}
	else {
		for (int i = 0; i < 100; i++) {
			fwrite(&emptycustomer,sizeof(customer),1,fp);
		}
	}
	fclose(fp);

printf("Alocated for 100 customer");

// 5 müşteri kaydı için 

   if ((fp = fopen("RecordOfCustomer.txt", "r+")) == NULL) {

	printf("Fıle is not opened\n");
}
else {
	for (int i = 0; i < 5; i++) {

		printf("Enter %d.customer no,name,lastname,and accaount:", i + 1);
		scanf("%d %s %s %d", &emptycustomer.no, emptycustomer.name, emptycustomer.lastname, &emptycustomer.account);

		fseek(fp, (emptycustomer.no - 1) * sizeof(customer), SEEK_SET);

		fwrite(&emptycustomer, sizeof(customer), 1, fp);

	}
}
fclose(fp);

printf("Record of customer is completed");


	return 0;

}