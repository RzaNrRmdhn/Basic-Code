import 'panjang.dart';

void main(List<String> args) {
  PersegiPanjang2 persegi; //inisialisasi
  double luasPersegi; // inisialisasi tipe data
  persegi = new PersegiPanjang2(); //memanggil object persegipanjang2
  persegi.panjang=3.0; //set nilai 
  persegi.lebar=-2.0; //set nilai

  luasPersegi = persegi.luas; //alias
  print(luasPersegi); //cetak

}

/* 
Encapsulation, kondisi di mana status atau kondisi di dalam class, dibungkus, dan bersifat privat. Artinya objek lain tidak bisa mengakses property secara langsung.
Abstraction, objek hanya menunjukkan operasinya secara high-level. Cukup tau method apa saja yang dibuat oleh class tersebut.
Inheritance, mewarisi properti kelas induk (parent class) ke kelas anak (child class). 
Polymorphism, objek class dapat memiliki bentuk atau implementasi yang berbeda-beda pada satu metode yang sama.

--Class merupakan blueprint untuk mendefinisikan karakteristik dari sebuah objek.

--Di dalam class, variabel berlaku sebagai properti, sementara fungsi sebagai method.

--Abstract Class merupakan gambaran umum dari sebuah kelas. Abstract class tidak dapat direalisasikan ke dalam sebuah objek.

--Mixin digunakan untuk menggabungkan dan memanfaatkan property/method dari beberapa kelas lain.

--Extension methods digunakan untuk membuat method tambahan pada kelas yang sudah ada.
*/