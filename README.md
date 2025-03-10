**1. Anggota Kelompok** : <br>
1.Rijaluddin Abdul Ghani (2408107010008) <br>
2.Putroe Fatimah Azzahra (2408107010002) <br>
3.Teuku Al Jumanatul Ali (2408107010016) <br>
4.Raisul Akram (2408107010107) <br>
5.Fayla Syifa Rustam (2408107010029)

**2. Deskripsi singkat program** : <br>
Program ini adalah sebuah sistem antrean bank yang dirancang untuk mengelola nasabah menggunakan struktur data Queue dan Stack. Program ini memungkinkan pengguna untuk menambah nasabah ke dalam antrean dengan memilih jenis layanan seperti Setor Tunai, Tarik Tunai, atau Pembukaan Rekening. Setelah nasabah terdaftar dalam antrean, pengguna dapat memproses nasabah yang ada, menampilkan antrean yang sedang berlangsung, serta melihat riwayat layanan nasabah yang sudah dilayani. Selain itu, program ini juga dilengkapi dengan fitur undo, yang memungkinkan pengguna untuk membatalkan transaksi terakhir dan mengembalikan nasabah ke antrean.

**3. Instruksi kompilasi dan cara menjalankan program** : <br> 
Sebelum mulai mengkompilasi, pastikan kamu sudah memiliki file kode sumber yang diperlukan, yaitu: <br>
1.**main.c**: Program utama yang mengelola antrean nasabah. <br>
2.**queue.c**: File untuk mengelola antrean (Queue). <br>
3.**stack.c**: File untuk mengelola riwayat transaksi (Stack). <br>
4.**queue.h**: Deklarasi untuk antrean (Queue). <br>
5.**stack.h**: Deklarasi untuk riwayat transaksi (Stack). <br>
Pastikan semua file tersebut berada dalam folder yang sama. Misalnya, kamu bisa simpan semua file tersebut di dalam folder bernama **TugasPrakSDA1** <br>

**3.1 Kompilasi Program** : <br>
gcc main.c queue.c stack.c -o TugasPrakSDA1 <br>

**3.2 Menjalankan Program** : <br>
./TugasPrakSDA1

**4. Penjelasan struktur program dan implementasi struktur data** : <br>
Program ini menggunakan dua struktur data utama untuk mengelola antrean nasabah yaitu Queue dan Stack.

**Queue (Antrean)** : diimplementasikan menggunakan Linked List. Di sini, nasabah yang pertama kali masuk ke antrean akan dilayani terlebih dahulu (prinsip FIFO - First In, First Out). Setiap nasabah yang mendaftar ditambahkan ke antrean melalui fungsi enqueue, dan saat nasabah diproses, mereka diambil dari antrean menggunakan fungsi dequeue.

**Stack (Riwayat Transaksi)** : diimplementasikan menggunakan Linked List. Stack ini menyimpan riwayat transaksi nasabah yang sudah dilayani. Setiap kali transaksi selesai, data nasabah disimpan di Stack menggunakan fungsi push. Jika transaksi dibatalkan, data nasabah diambil dari Stack menggunakan fungsi pop, dan nasabah tersebut dikembalikan ke antrean dengan fungsi enqueue.

Struktur program ini terorganisir dengan baik, di mana setiap file memiliki fungsinya masing-masing, yaitu:
queue.c mengelola antrean, stack.c mengelola riwayat transaksi, dan main.c mengatur alur interaksi dengan pengguna.

**5. Screenshot hasil eksekusi program** : <br> 
https://github.com/Bighailyyy/FOTO

**6. Kendala dan solusi selama pengembangan** : <br>
6.1 Pengelolaan/penanganan input yang tidak valid: Awalnya, program tidak dapat menangani input selain angka 1-6, Hal ini menyebabkan program crash jika pengguna memasukkan inputan angka selain 1-6 atau karakter <br>
Solusi: Kami menambahkan validasi input menggunakan fungsi scanf dengan pengecekan yang tepat, ini untuk memastikan hanya angka 1-6 yang diterima sebagai input untuk menu dan pilihan layanan. <br>

6.2 Tampilan yang Tidak Rapi: Awalnya, tampilan tabel antrean dan riwayat transaksi tidak terstruktur dengan baik, sehingga sulit dipahami oleh pengguna. <br>
Solusi: Kami memperbaiki format output dengan menambahkan pemformatan yang lebih rapi, dengan tabel dengan kolom yang jelas, sehingga informasi lebih mudah dibaca oleh pengguna. <br>

**Terima Kasih**




