import 'dart:io';

class latihan{
  //field berisi variabel yang di deklarasikan di class


  latihan(); // dekalarikan class constructor

  //function
  int pertambahan(int a, int b){
    return a + b;
  }

  int pengurangan(int a, int b){
    return a - b;
  }
}

void main(List<String> args) {
  latihan operasi =  new latihan(); // atau dapat juga dengan 'var operasi = latihan();'
  // var operasi = latihan();
  var pilihan, a, b;
  var c = 10;

  stdout.write('masukkan pilihan ${c}: ');
  pilihan = int.parse(stdin.readLineSync()!);
  stdout.write('masukkan angka: ');
  a = int.parse(stdin.readLineSync()!);
  stdout.write('masukkan angka: ');
  b = int.parse(stdin.readLineSync()!);

  switch (pilihan){
    case 1:
      print(operasi.pertambahan(a, b));
      break;
    default:
      print(operasi.pengurangan(a, b));
      break;
  }
}