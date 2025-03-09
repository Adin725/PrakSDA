**Anggota Kelompok**
1.Rijaluddin Abdul Ghani (2408107010008)
2.Putroe Fatimah Azzahra (2408107010002)
3.Teuku Al Jumanatul Ali (2408107010016)
4.
5.

**Deskripsi singkat program**
Program ini adalah sebuah sistem antrean bank yang dirancang untuk mengelola nasabah menggunakan struktur data Queue dan Stack. Program ini memungkinkan pengguna untuk menambah nasabah ke dalam antrean dengan memilih jenis layanan seperti Setor Tunai, Tarik Tunai, atau Pembukaan Rekening. Setelah nasabah terdaftar dalam antrean, pengguna dapat memproses nasabah yang ada, menampilkan antrean yang sedang berlangsung, serta melihat riwayat layanan nasabah yang sudah dilayani. Selain itu, program ini juga dilengkapi dengan fitur undo, yang memungkinkan pengguna untuk membatalkan transaksi terakhir dan mengembalikan nasabah ke antrean.


**Instruksi kompilasi dan cara menjalankan program**
Sebelum mulai mengkompilasi, pastikan kamu sudah memiliki file kode sumber yang diperlukan, yaitu:
**main.c**: Program utama yang mengelola antrean nasabah.
**queue.c**: File untuk mengelola antrean (Queue).
**stack.c**: File untuk mengelola riwayat transaksi (Stack).
**queue.h**: Deklarasi untuk antrean (Queue).
**stack.h**: Deklarasi untuk riwayat transaksi (Stack).

Pastikan semua file tersebut berada dalam folder yang sama di komputer kamu. Misalnya, kamu bisa simpan semua file tersebut di dalam folder bernama **TugasPrakSDA1**
**Kompilasi Program**
gcc main.c queue.c stack.c -o TugasPrakSDA1
**Menjalankan Program**
./TugasPrakSDA1

**Penjelasan struktur program dan implementasi struktur data**
Program ini menggunakan dua struktur data utama untuk mengelola antrean nasabah yaitu Queue dan Stack.

**Queue (Antrean)** diimplementasikan menggunakan Linked List. Di sini, nasabah yang pertama kali masuk ke antrean akan dilayani terlebih dahulu (prinsip FIFO - First In, First Out). Setiap nasabah yang mendaftar ditambahkan ke antrean melalui fungsi enqueue, dan saat nasabah diproses, mereka diambil dari antrean menggunakan fungsi dequeue.

**Stack (Riwayat Transaksi)** juga diimplementasikan menggunakan Linked List. Stack ini menyimpan riwayat transaksi nasabah yang sudah dilayani. Setiap kali transaksi selesai, data nasabah disimpan di Stack menggunakan fungsi push. Jika transaksi dibatalkan, data nasabah diambil dari Stack menggunakan fungsi pop, dan nasabah tersebut dikembalikan ke antrean dengan fungsi enqueue.

Struktur program ini terorganisir dengan baik, di mana setiap file memiliki tugasnya masing-masing, yaitu:
queue.c mengelola antrean, stack.c mengelola riwayat transaksi, dan main.c mengatur alur interaksi dengan pengguna.

**Screenshot hasil eksekusi program**



**Kendala dan solusi selama pengembangan**


