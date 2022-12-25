void main(List<String> args) {
  var capital = {
    'jakarta' : 'indonesia',
    'london' : 'inggris',
    'tokyo' : 'jepang'
  }; // map dapat menyimpan suatu data atau nilai dengan format key-vallues
  // di sebelah kiri titik dua : disebut dengan key misal jakarta, dan sebelah kanan disebut value misal indonesia
  // fungsi key adalah mengakses atau mendapatkan value

  print(capital['jakarta']); // output akan berupa indonesia karena jakarta adalah key dari value indonesia
  print(capital.keys); // melihat semua key yang berada dalam map
  print(capital.values); // melihat semua value yang ada pada map

  capital.clear(); // berfungsi menghapus semua key dan value pada map
  capital['manila'] = 'filiphina'; // berfungsi menambahkan key dan value kedalam map
  print(capital);
}