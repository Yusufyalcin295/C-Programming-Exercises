#include <stdio.h>
#include <stdlib.h>

// time_t yerine Time ismini kullanarak isim çakışmasını önledik
typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

Time get_time(void);
void print_time(Time t);
Time add_times(Time t1, Time t2);

int main(void) {
    Time t1, t2, sum;

    printf("--- Birinci Zamani Giriniz ---\n");
    t1 = get_time();
    printf("\n--- Ikinci Zamani Giriniz ---\n");
    t2 = get_time();

    printf("\nZaman 1: "); print_time(t1);
    printf("\nZaman 2: "); print_time(t2);

    sum = add_times(t1, t2);
    printf("\n------------------------");
    printf("\nToplam Zaman: "); print_time(sum);
    printf("\n------------------------\n");

    return 0;
}

Time get_time(void) {
    Time t;
    printf("Saat: "); scanf_s("%d", &t.hours);
    printf("Dakika: "); scanf_s("%d", &t.minutes);
    printf("Saniye: "); scanf_s("%d", &t.seconds);
    return t;
}

void print_time(Time t) {
    // %02d formatı, sayı tek haneli ise başına 0 koyar (Örn: 05:09)
    printf("%02d:%02d:%02d", t.hours, t.minutes, t.seconds);
}

Time add_times(Time t1, Time t2) {
    Time res;
    // Saniye toplama ve taşma kontrolü
    res.seconds = (t1.seconds + t2.seconds) % 60;
    int extra_min = (t1.seconds + t2.seconds) / 60;

    // Dakika toplama ve taşma kontrolü
    res.minutes = (t1.minutes + t2.minutes + extra_min) % 60;
    int extra_hour = (t1.minutes + t2.minutes + extra_min) / 60;

    // Saat toplama
    res.hours = t1.hours + t2.hours + extra_hour;

    return res;
}