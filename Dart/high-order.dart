void myHigherOrderFunction(String message, Function myFunction) { // parameter berisi fungsi lain
  print(message);
  print(myFunction(3, 4));  // sum(3, 4)    // return 3 + 4
}

void main(List<String> args) {
  var fibonacci = [0, 1, 1, 2, 3, 5, 8, 13];

  Function sum = (int num1, int num2) => num1 + num2; // anonymous function atau lambda function
  myHigherOrderFunction('Hello', sum);

  fibonacci.forEach((item) {
  print(item);
});
  
}

