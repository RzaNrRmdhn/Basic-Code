// void main() {
//   getOrder().then((value) {
//     print('You ordered: $value');
//   })
//   .catchError((error) {
//     print('Sorry. $error');
//   });
//   print('Getting your order...');
// }
 
Future<String> getOrder() {
  return Future.delayed(Duration(seconds: 3), () { // berfungsi menahan delayed fungsi sesuai keinginan, 3 adlaah 3 detik
    var isStockAvailable = false;
    if (isStockAvailable) {
      return 'Coffee Boba';
    } else {
      throw 'Our stock is not enough.';
    }
  });
}

/*
Fungsi getOrder() yang berisi Future yang masih uncompleted.
Method then() yang menangani kondisi completed with data.
Method catchError() yang menangani kondisi completed with error.
*/

void main() {
  getOrder().then((value) {
    print('You ordered: $value');
  })
  .catchError((error) {
    print('Sorry. $error');
  })
  .whenComplete(() {
    print('Thank you');
  });
  print('Getting your order...');
}