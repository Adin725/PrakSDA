#ifndef QUEUE_H
#define QUEUE_H

// Struktur Nasabah untuk antrean dan riwayat
typedef struct Nasabah {
    char nama[100];    
    char layanan[50];  
    struct Nasabah* next;
} Nasabah;

// Struktur untuk Queue
typedef struct Queue {
    Nasabah* front;
    Nasabah* rear;
} Queue;

// Fungsi untuk membuat Queue
Queue* buatQueue();

// Fungsi untuk menambah nasabah ke antrean
void enqueue(Queue* q, char* nama, char* layanan);

// Fungsi untuk menghapus nasabah dari antrean
Nasabah* dequeue(Queue* q);

// Fungsi untuk menampilkan antrean
void tampilAntrean(Queue* q);

#endif
