[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen
<strong>Proyek Tunggal: Animasi Stick Man pada Layar LCD</strong><br><br>
Animasi stick man pada LCD ini dibentuk dari karakter khusus yang berasal dari pengaturan piksel gambar. Berikutnya, anda perlu mengatur tata letak byte gambar dalam kolom dan baris. Untuk dapat bergerak layaknya animasi, anda perlu melakukan perulangan.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | Arduino Nano V3 |
| Editor Kode | Arduino IDE |
| Driver | USB-Serial CH340 |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | LiquidCrystal I2C |
| Layar | LCD I2C (x1) |
| Komponen Lainnya | Kabel Mini USB - USB tipe A (x1) dan Kabel jumper (1 set) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   ```
   https://www.arduino.cc/en/software
   ```
<br>

2. USB-Serial CH340

   ```
   https://bit.ly/CH340_Driver
   ```
   
<br><br>

## Pengetahuan Dasar
<img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/9f1ce021-724e-478b-87a5-e8716d9d75da" alt="lcd-i2c">
<br><br>

<strong>Gambar di atas menjelaskan bahwa LCD I2C 16x2 memiliki :</strong><br><br>

• Kolom -> ``` 16 ```

• Baris -> ``` 2 ```

• Byte yang ada dalam matriks led -> ``` 8 ```

• Bit yang ada dalam matriks led -> masing-masing barisnya, ada ``` 5 ```

<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/86645f07-2b03-44b0-a649-1347747f9dbf" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/3e2b6786-8d2b-450b-9fa2-7ab93a2e1152" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/516899d8-86c8-4ad7-b30a-7a641fe961bf" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek ini dengan cara klik: ``` File ``` -> ``` Open ``` -> ``` stickman_animation_lcd.ino ```.<br><br>
   
2. ``` Pengaturan Board ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Nano ```.<br><br>

3. ``` Ubah Processor ``` di Arduino IDE.<br><br>
   • Cara: klik ``` Tools ``` -> ``` Processor ``` -> ``` ATmega328P (Old Bootloader) ```.<br><br>

4. ``` Instal Pustaka ``` di Arduino IDE<br><br>
   • Cara: unduh semua file zip pustaka. Kemudian tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```.<br><br>

5. ``` Pengaturan Port ``` di Arduino IDE<br><br>
   • Cara: klik ``` Port ``` -> Pilih sesuai dengan port perangkat Anda ``` (Anda dapat melihatnya di Device Manager) ```.<br><br>

6. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

7. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>
   
8. Selamat menikmati [Selesai].

<br><br>

## Karakter Khusus LCD
Untuk membuat Karakter Khusus LCD dengan mudah, anda dapat mengakses tautan di bawah ini.
```
https://maxpromer.github.io/LCD-Character-Creator/
```

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>

2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
   
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<table>
<tr>
<th width="420">Tampilan animasi-1</th>
<th width="420">Tampilan animasi-2</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/2a595eea-eddd-4437-bc9a-6fd36fc2099c" alt="display-1"></td>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/3e1530d8-5c63-4401-af09-10768c10e239" alt="display-2"></td>
</tr>
</table>

<br><br>

## Penafian
Aplikasi ini dibuat dengan menyertakan sumber-sumber dari pihak ketiga. Pihak ketiga di sini adalah penyedia layanan, yang layanannya berupa pustaka, kerangka kerja, dan lain-lain. Saya ucapkan terima kasih banyak atas layanannya. Telah terbukti sangat membantu dan dapat diimplementasikan.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
