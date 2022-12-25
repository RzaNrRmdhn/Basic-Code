enum Rainbow { // enum untuk menyimpan konstanta sekaligus banyak
  red, orange, yellow, green, blue, indigo, violet
}
 
// enum Rainbow{
//   sunny, blue, rain, storm;
// }
void main(List<String> args) {
  var weatherForecast = Rainbow.blue;
 
switch(weatherForecast) {
  case Rainbow.red:
    print("Today's weather forecast is sunny");
    break;
  case Rainbow.orange:
    print("Today's weather forecast is blue");
    break;
  case Rainbow.green:
    print("Today's weather forecast is rain");
    break;
  case Rainbow.indigo:
    print("Today's weather forecast is storm");
    break;
  case Rainbow.yellow:
    // TODO: Handle this case.
    break;
  case Rainbow.blue:
    // TODO: Handle this case.
    break;
  case Rainbow.violet:
    // TODO: Handle this case.
    break;
}
}