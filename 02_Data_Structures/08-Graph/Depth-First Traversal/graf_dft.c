#include <stdio.h>

#define N 6  // Grafın düğüm sayısı

// Adjacency Matrix (komşuluk matrisi) – örnek graf
int G[N][N] = {
    {0,1,1,0,0,1},  // A düğümü: B, C, F ile bağlı
    {1,0,1,1,0,0},  // B düğümü: A, C, D ile bağlı
    {1,1,0,0,1,0},  // C düğümü: A, B, E ile bağlı
    {0,1,0,0,1,0},  // D düğümü: B, E ile bağlı
    {0,0,1,1,0,1},  // E düğümü: C, D, F ile bağlı
    {1,0,0,0,1,0}   // F düğümü: A, E ile bağlı
};

int visited[N] = { 0 }; // Ziyaret kontrol dizisi

// DFS fonksiyonu (recursive)
void DFS(int node) {
    visited[node] = 1; // Düğüm ziyaret edildi
    printf("%c ", 'A' + node); // Düğümü yazdırma

    // Komşuları kontrol etme
    for (int i = 0; i < N; i++) {
        if (G[node][i] == 1 && visited[i] == 0) {
            DFS(i); // Komşu düğüme gidiyoruz
        }
    }
}

int main() {
    printf("DFS Traversal: ");
    DFS(0); // A düğümünden başlıyoruz
    return 0;
}
/*          --Özet--

***DFT (Depth-First Traversal / DFS)***
Derinlik öncelikli arama yapar.
Bir düğümden başlar, komşusuna gider, sonra onun komşusuna… derine indikçe devam eder.
Stack/recursive mantığıyla çalışır.
visited dizisi tekrar ziyaretleri engeller.
Kullanım: yol bulma, cycle detection, topolojik sıralama.
*/