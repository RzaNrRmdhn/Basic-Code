void main(List<String> args){
  List contoh = [1, 'dart', 'flutter']; // list digunakan untuk menyimpan suatu data/nilai, list dapat berisi semua tipe data karena bersifat dynamic
  // var numberlist = [1, 3, 4]; // list dapat juga bertipe data sesuai keinginan

  contoh.add('nama'); // menambahkan dibelakang
  contoh.insert(3, 5); // menambahkan di tempat yang diinginkan, 3 untuk indeks nya dan 5 untuk nilainya
  contoh[2] = 'makan'; // mengubah isi dari indeks ke 2 menjadi makan

  contoh.remove('makan'); // Menghapus semua indeks yang memiliki nilai makan
  contoh.removeAt(1); // menghapus sesuai indeks yang diinginkan
  contoh.removeLast(); // menghapus indeks terakhir
  contoh.removeRange(0, 1); // menghapus dari indeks ke 0 hingga 1

  var favorites = ['Seafood', 'Salad', 'Nugget', 'Soup'];
  var others = ['Cake', 'Pie', 'Donut'];
  var allFavorites = [...favorites, ...others]; // ... adalah spread operatr, menggabungkan 2 list menjadi 1
  var list1;
  var list2 = [0, ...?list1]; // ? adalah null-aware spread operator, digunakan untuk mengatasi jika list tidak ada nilai/Null

  print(list2);
  print(allFavorites); 

  for(int i = 0; i < contoh.length; i++){
    print(contoh[i]);
  }

  var list = [1, 2, 3, 4, 5];
print(list[4]);
}