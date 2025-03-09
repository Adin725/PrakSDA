#ifndef STACK_H
#define STACK_H

#include "queue.h" 

// Struktur untuk Stack
typedef struct Stack {
    Nasabah* top;
} Stack;

// Fungsi untuk membuat Stack
Stack* buatStack();

// Fungsi untuk menambah transaksi ke Stack
void push(Stack* stack, Nasabah* nasabah);

// Fungsi untuk menghapus transaksi terakhir dari Stack
Nasabah* pop(Stack* stack);

// Fungsi untuk menampilkan riwayat transaksi
void tampilRiwayat(Stack* stack);

// Fungsi untuk membatalkan transaksi terakhir (Undo)
void undo(Stack* stack, Queue* q);

#endif
