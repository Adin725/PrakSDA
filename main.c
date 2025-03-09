#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "stack.h"

int main() {
    Queue* antrean = buatQueue();
    Stack* riwayat = buatStack();
    int pilihan;
    char nama[100];
    char layanan[50];
    
    do {
        printf("\n--- Sistem Antrean Bank ---\n");
        printf("1. Tambah Nasabah ke Antrean\n");
        printf("2. Proses Nasabah\n");
        printf("3. Tampilkan Antrean Saat Ini\n");
        printf("4. Tampilkan Riwayat Layanan\n");
        printf("5. Batalkan Transaksi Terakhir (Undo)\n");
        printf("6. Keluar\n");
        printf("Pilihan Anda: ");

        // Menangani input yang tidak valid (misalnya huruf atau karakter selain angka)
        if (scanf("%d", &pilihan) != 1) {
            printf("Harap pilih angka antara 1 dan 6..\n");
            while (getchar() != '\n');  // Membersihkan buffer input
            continue;
        }
        
        switch (pilihan) {
            case 1:
                printf("Masukkan nama nasabah: ");
                scanf("%s", nama);
                printf("Pilih jenis layanan:\n");
                printf("1. Setor Tunai\n2. Tarik Tunai\n3. Pembukaan Rekening\n");
                printf("Pilihan (1-3): ");

                // Menangani input untuk pilihan layanan
                int pilihanLayanan;
                if (scanf("%d", &pilihanLayanan) != 1) {
                    printf("Pilihan layanan tidak valid! Harap masukkan angka yang sesuai.\n");
                    while (getchar() != '\n');  // Membersihkan buffer input
                    break;
                }

                switch (pilihanLayanan) {
                    case 1: strcpy(layanan, "Setor Tunai"); break;
                    case 2: strcpy(layanan, "Tarik Tunai"); break;
                    case 3: strcpy(layanan, "Pembukaan Rekening"); break;
                    default:
                        printf("Pilihan tidak valid!\n");
                        break;
                }
                
                if (pilihanLayanan >= 1 && pilihanLayanan <= 3) {
                    enqueue(antrean, nama, layanan);
                    printf("Nasabah %s berhasil ditambahkan ke antrean dengan layanan %s.\n", nama, layanan);
                }
                break;
                
            case 2:
                {
                    Nasabah* nasabah = dequeue(antrean);
                    if (nasabah != NULL) {
                        printf("Memproses nasabah: %s - %s\n", nasabah->nama, nasabah->layanan);
                        push(riwayat, nasabah);
                        free(nasabah);
                        printf("Layanan selesai diproses dan dipindahkan ke riwayat.\n");
                    }
                }
                break;
                
            case 3:
                tampilAntrean(antrean);
                break;
                
            case 4:
                tampilRiwayat(riwayat);
                break;
                
            case 5:
                undo(riwayat, antrean);
                break;
                
            case 6:
                printf("Terima kasih! Program selesai.\n");
                break;
                
            default:
                printf("Pilihan tidak valid! Harap pilih angka antara 1 dan 6.\n");
        }
    } while (pilihan != 6);
    
    return 0;
}
