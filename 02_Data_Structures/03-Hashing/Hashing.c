#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

// Hash tablosu
int h[TABLE_SIZE] = { 0 }; // 0 boş anlamında kullanılıyor

// Temel hash fonksiyonu
int hash1(int key) {
    return (2 * key + 3) % TABLE_SIZE;
}

// İkinci hash fonksiyonu (double hashing için)
int hash2(int key) {
    int step = (3 * key + 1) % TABLE_SIZE;
    if (step == 0) step = 1; // sıfır olmamalı
    return step;
}

// Linear Probing rehash fonksiyonu
int rehash_linear(int key, int i) {
    return (hash1(key) + i) % TABLE_SIZE;
}

// Quadratic Probing rehash fonksiyonu
int rehash_quadratic(int key, int i) {
    return (hash1(key) + i * i) % TABLE_SIZE;
}

// Double Hashing rehash fonksiyonu
int rehash_double(int key, int i) {
    return (hash1(key) + i * hash2(key)) % TABLE_SIZE;
}

// Eleman ekleme (seçilen yönteme göre)
void insert(int method) {
    int key, index, i;
    printf("\nEnter a value to insert: ");
    scanf("%d", &key);

    for (i = 0; i < TABLE_SIZE; i++) {
        if (method == 1)      index = rehash_linear(key, i);
        else if (method == 2) index = rehash_quadratic(key, i);
        else if (method == 3) index = rehash_double(key, i);
        else {
            printf("Invalid method!\n");
            return;
        }

        if (h[index] == 0) { // boş hücre bulundu
            h[index] = key;
            printf("Inserted %d at index %d\n", key, index);
            return;
        }
    }
    printf("Element cannot be inserted (table full)\n");
}

// Eleman arama
void search(int method) {
    int key, index, i;
    printf("\nEnter search element: ");
    scanf("%d", &key);

    for (i = 0; i < TABLE_SIZE; i++) {
        if (method == 1)      index = rehash_linear(key, i);
        else if (method == 2) index = rehash_quadratic(key, i);
        else if (method == 3) index = rehash_double(key, i);
        else return;

        if (h[index] == key) {
            printf("Value %d found at index %d\n", key, index);
            return;
        }
    }
    printf("Value not found\n");
}

// Tabloyu ekrana basma
void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d -> %d\n", i, h[i]);
    }
}

int main() {
    int opt, method;
    while (1) {
        printf("\nChoose collision resolution method:\n");
        printf("1. Linear Probing\n2. Quadratic Probing\n3. Double Hashing\n4. Exit\n");
        scanf("%d", &method);

        if (method == 4) exit(0);

        printf("\nPress 1.Insert  2.Display  3.Search  4.Back\n");
        scanf("%d", &opt);

        switch (opt) {
        case 1: insert(method); break;
        case 2: display(); break;
        case 3: search(method); break;
        case 4: break;
        default: printf("Invalid option\n");
        }
    }
    return 0;
}

/* -----ÖZET-----  
 ---Hashing –-- 
Amaç: Verilere çok hızlı erişim sağlamak (arama, ekleme, silme işlemleri ortalama 𝑂(1)).
Hash Fonksiyonu: Anahtarı tablo boyutuna uygun indekse dönüştürür. İyi fonksiyon → hızlı, uniform dağılım.
Çarpışma (Collision): Farklı anahtarlar aynı indeksi üretir. Kaçınılmazdır → çözüm gerekir.

Çözüm Yöntemleri:
Separate Chaining: Hücrede bağlı liste tutulur. Tablo boyutundan fazla eleman saklanabilir.
Linear Probing: Çarpışma olursa sıradaki hücreye bakılır. Basit ama primary clustering sorunu var.
Quadratic Probing: 𝑖^2 adımıyla ilerlenir. Primary clustering azalır, secondary clustering olabilir.
Double Hashing: İkinci hash fonksiyonu ile adım belirlenir. Clustering sorunlarını en iyi azaltır.

Önemli:
Hash fonksiyonu → hızlı ve dengeli olmalı.
Çarpışma çözüm yöntemleri bilinmeli.
Linear → primary clustering, Quadratic → secondary clustering, Double → en iyi dağılım
*/
 
