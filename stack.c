#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

// Fungsi untuk membuat Stack
 Stack* buatStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

// Fungsi untuk menambah transaksi ke Stack
void push(Stack* stack, Nasabah* nasabah) {
    Nasabah* temp = (Nasabah*)malloc(sizeof(Nasabah));
    strcpy(temp->nama, nasabah->nama);
    strcpy(temp->layanan, nasabah->layanan);
    temp->next = stack->top;
    stack->top = temp;
}

// Fungsi untuk menghapus transaksi terakhir dari Stack
Nasabah* pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Riwayat transaksi kosong!\n");
        return NULL;
    }
    Nasabah* temp = stack->top;
    stack->top = stack->top->next;
    return temp;
}

// Fungsi untuk menampilkan riwayat transaksi
void tampilRiwayat(Stack* stack) {
    if (stack->top == NULL) {
        printf("Riwayat transaksi kosong!\n");
        return;
    }
    Nasabah* temp = stack->top;
    printf("+-------------------+-------------------+\n");
    printf("| Nama Nasabah      | Jenis Layanan     |\n");
    printf("+-------------------+-------------------+\n");
    while (temp != NULL) {
        printf("| %-17s | %-17s |\n", temp->nama, temp->layanan);
        temp = temp->next;
    }
    printf("+-------------------+-------------------+\n");
}

// Fungsi untuk membatalkan transaksi terakhir (Undo)
void undo(Stack* stack, Queue* q) {
    Nasabah* terakhir = pop(stack);
    if (terakhir != NULL) {
        printf("Transaksi terakhir: %s - %s\n", terakhir->nama, terakhir->layanan);
        printf("Transaksi dibatalkan. Nasabah dikembalikan ke antrean.\n");
        enqueue(q, terakhir->nama, terakhir->layanan);
        free(terakhir);
    }
}
