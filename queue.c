#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

// Fungsi untuk membuat Queue
Queue* buatQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = NULL;
    q->rear = NUL;
    return q;
}

// Fungsi untuk menambah nasabah ke antrean
void enqueue(Queue* q, char* nama, char* layanan) {
    Nasabah* baru = (Nasabah*)malloc(sizeof(Nasabah));
    strcpy(baru->nama, nama);
    strcpy(baru->layanan, layanan);
    baru->next = NULL;
    
    if (q->rear == NULL) {
        q->front = q->rear = baru;
        return;
    }
    
    q->rear->next = baru;
    q->rear = baru;
}

// Fungsi untuk menghapus nasabah dari antrean
Nasabah* dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("Antrean kosong!\n");
        return NULL;
    }
    Nasabah* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    return temp;
}

// Fungsi untuk menampilkan antrean
void tampilAntrean(Queue* q) {
    if (q->front == NULL) {
        printf("Antrean kosong!\n");
        return;
    }
    Nasabah* temp = q->front;
    int no = 1;
    printf("+------+----------------+------------------+\n");
    printf("| No.  | Nama Nasabah   | Layanan          |\n");
    printf("+------+----------------+------------------+\n");
    while (temp != NULL) {
        printf("| %-4d | %-14s | %-16s |\n", no, temp->nama, temp->layanan);
        temp = temp->next;
        no++;
    }
    printf("+------+----------------+------------------+\n");
    printf("Total nasabah dalam antrean: %d\n", no - 1);
}
