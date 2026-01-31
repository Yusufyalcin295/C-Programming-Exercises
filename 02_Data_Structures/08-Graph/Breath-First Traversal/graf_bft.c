#include <stdio.h>
#define N 6   // Graf düğüm sayısı

// Komşuluk matrisi (örnek graf)
int G[N][N] = {
    {0,1,1,0,0,1},  // A düğümü: B, C, F 
    {1,0,0,1,0,0},  // B düğümü: A, D
    {1,0,0,0,1,0},  // C düğümü: A, E
    {0,1,0,0,0,1},  // D düğümü: B, F
    {0,0,1,0,0,1},  // E düğümü: C, F
    {1,0,0,1,1,0}   // F düğümü: A, D, E
};

int visited[N] = { 0 }; // Ziyaret kontrol dizisi

// Kuyruk yapısı
int queue[N];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == N - 1) return; // Kuyruk dolu
    if (front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue() {
    if (front == -1) return -1; // Kuyruk boş
    int x = queue[front];
    if (front == rear) front = rear = -1;
    else front++;
    return x;
}

int isEmpty() {
    return front == -1;
}

// Breadth-First Traversal
void BFT(int start) {
    enqueue(start);          // Başlangıç düğümünü kuyruğa ekliyoruz
    visited[start] = 1;      // Ziyaret edildi işaretliyoruz

    while (!isEmpty()) {
        int node = dequeue();
        printf("%c ", 'A' + node); // Düğümü yazdırma

        // Komşuları kontrol ediyoruz
        for (int i = 0; i < N; i++) {
            if (G[node][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    printf("Result of BFT:\n");
    BFT(0); // A düğümünden başlıyoruz
    return 0;
}


/*           ---Özet--
***BFT (Breadth-First Traversal / BFS)***
Genişlik öncelikli arama yapar.
Başlangıç düğümünden başlar, önce tüm komşuları, sonra onların komşularını katman katman ziyaret eder.
Queue mantığıyla çalışır.
visited dizisi tekrar kuyruğa eklemeyi engeller.
Kullanım: en kısa yol bulma, seviye bazlı gezinti.
*/