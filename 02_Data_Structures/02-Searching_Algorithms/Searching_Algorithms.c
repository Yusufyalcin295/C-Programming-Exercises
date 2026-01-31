#include <stdio.h>
#include <string.h>

// -----------------------------
// Sequential Search (Primary Key)
// -----------------------------
// Bu algoritma, dizideki her elemanı sırayla kontrol eder.
// Avantaj: Basit ve küçük veri setlerinde yeterli.
// Dezavantaj: Büyük veri setlerinde O(n) karmaşıklık nedeniyle yavaş.
int sequentialSearch(int D[], int key, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (D[i] == key) {
            return i; // bulunduğu indeks döndürülür
        }
    }
    return -1; // bulunamazsa -1 döner
}

// -----------------------------
// Sequential Search (Secondary Key)
// -----------------------------
// Örnek: Öğrenci kayıtlarında soyad araması.
// Birden fazla sonuç dönebileceği için Result[] dizisine eklenir.
typedef struct st {
    int student_id;
    char name[15];
    char surname[20];
    char department[40];
    float gpa;
} STUDENT;

int secondaryKeySearch(STUDENT D[], int N, int Result[], char* key) {
    int i = 0, k;
    for (k = 0; k < N; k++) {
        if (strcmp(D[k].surname, key) == 0) {
            Result[i] = k; // eşleşen indeks kaydedilir
            i++;
        }
    }
    return i; // bulunan kayıt sayısı döndürülür
}

// -----------------------------
// Binary Search (Primary Key)
// -----------------------------
// Sıralı dizilerde çok daha verimli: O(log n).
// Mantık: Ortadaki elemanla karşılaştır, küçükse sola, büyükse sağa git.
int binarySearch(int D[], int N, int key) {
    int left = 0;
    int right = N - 1;
    int middle;

    while (left <= right) {
        middle = (left + right) / 2;

        if (key == D[middle]) {
            return middle; // bulundu
        }
        else if (key > D[middle]) {
            left = middle + 1; // sağ yarıya bak
        }
        else {
            right = middle - 1; // sol yarıya bak
        }
    }
    return -1; // bulunamazsa -1 döner
}

// -----------------------------
// Main Fonksiyonu (Test)
// -----------------------------
int main() {
    // Sequential Search testi
    int arr[] = { 10, 20, 30, 40, 50 };
    int n = 5;
    int key = 30;
    int result = sequentialSearch(arr, key, n);
    if (result != -1)
        printf("Sequential Search: %d bulundu, indeks = %d\n", key, result);
    else
        printf("Sequential Search: %d bulunamadi\n", key);

    // Binary Search testi (dizi sıralı olmalı!)
    int sortedArr[] = { 5, 10, 15, 20, 25, 30, 35 };
    int m = 7;
    int key2 = 25;
    int result2 = binarySearch(sortedArr, m, key2);
    if (result2 != -1)
        printf("Binary Search: %d bulundu, indeks = %d\n", key2, result2);
    else
        printf("Binary Search: %d bulunamadi\n", key2);

    // Secondary Key Search testi
    STUDENT students[3] = {
        {1, "Ali", "Yilmaz", "CS", 3.1},
        {2, "Ayse", "Demir", "Math", 3.5},
        {3, "Mehmet", "Yilmaz", "Physics", 2.9}
    };
    int results[3];
    int found = secondaryKeySearch(students, 3, results, "Yilmaz");
    printf("Secondary Key Search: %d kayit bulundu\n", found);
    for (int i = 0; i < found; i++) {
        printf(" -> Indeks %d: %s %s\n", results[i], students[results[i]].name, students[results[i]].surname);
    }

    return 0;
}
