Nama: Yazil Alkahar
Kelompok : Sapphire
Penjelasan singkat tentang repository: 

Padaa repository ini terdapat dua file cpp yaitu problem1.cpp dan problem2.cpp, yang berisi : 

​1. Problem 1: Alien-In-The-Middle (Enkripsi Pesan Rahasia)
​Program ini digunakan untuk mengamankan pesan teks berhuruf kapital menggunakan metode pergeseran posisi abjad dinamis berdasarkan karakter sebelumnya.

​Cara Kerja:
​Karakter Pertama: Huruf pertama dari pesan tidak mengalami perubahan dan langsung disimpan ke dalam hasil enkripsi.
​Karakter Selanjutnya: Setiap huruf berikutnya dienkripsi dengan menjumlahkan nilai abjad huruf saat ini (A = 1 hingga Z = 26) dengan nilai abjad huruf asli sebelumnya.

​Modulo 26: Hasil penjumlahan dihitung menggunakan rumus aritmetika modulo 26 agar posisi abjad tetap berada dalam rentang A-Z (berputar kembali ke awal jika melebihi huruf Z).

​Konversi Huruf: Nilai angka baru hasil perhitungan diubah kembali menjadi bentuk huruf kapital.

​2. Problem 2: The Last Astronaut (Simulasi Eliminasi Melingkar)
​Program ini mensimulasikan eliminasi astronaut dalam susunan posisi melingkar untuk menentukan satu astronaut terakhir yang bertahan hidup, dengan nilai langkah (K) yang berubah secara dinamis.

​Cara Kerja:
​Inisialisasi: Program menerima input jumlah astronaut (N) serta langkah awal (K). Jika nilai K kurang dari 2, maka otomatis ditetapkan K = 2.
​Pencacahan Melingkar: Penghitungan dimulai dari astronaut pertama menggunakan rumus sisa bagi (modulo) agar hitungan selalu berputar melingkar.

​Pergeseran Posisi: Astronaut yang terkena hitungan ke-K dicetak sebagai urutan yang gugur dan dikeluarkan dari daftar. 
Hitungan putaran berikutnya langsung dilanjutkan dari astronaut yang berada tepat di sebelah orang yang baru tereliminasi.

​Pembaruan Nilai K:
​Jika nomor astronaut yang gugur adalah genap, nilai K bertambah 2 (K = K + 2).
​Jika nomor astronaut yang gugur adalah ganjil, nilai K berkurang 1 (K = K - 1).
Jika hasil pengurangan menyebabkan K kurang dari 2, nilai K dikembalikan menjadi 2.

​Penentuan Pemenang: Perulangan terus berjalan hingga tersisa tepat 1 astronaut sebagai pemenang.


