import 'dart:io';

void main(List<String> args){
  print(suhu());

//   var firstString = 'Dart';
// var secondString = 'Flutter';
// print(firstString + secondString);

// for(int i = 0; i < 10; i++){
//   if(i % 2 == 0){
//     continue;
//   }
//   print(i);
// }

 
}

double suhu(){
  var Fahrenheit, Celcius;

  stdout.write("Masukkan Suhu dalam Fahrenheit: ");
  Fahrenheit = int.parse(stdin.readLineSync()!);

  Celcius = (Fahrenheit - 32) * 5 / 9; 

  print("$Fahrenheit Fahrenheit = $Celcius Celcius");

  return Celcius;
}