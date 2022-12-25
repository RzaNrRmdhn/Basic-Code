/*
Suatu fungsi dapat dibuat dalam lingkup global atau di dalam fungsi lain. 
Suatu fungsi yang dapat mengakses variabel di dalam lexical scope-nya disebut dengan closure.
Lexical scope berarti bahwa pada sebuah fungsi bersarang (nested functions), 
fungsi yang berada di dalam memiliki akses ke variabel di lingkup induknya.
*/

void main() {
  var closureExample = calculate(2);
  closureExample();
  closureExample();
  closureExample();
}
 
Function calculate(base) {
  var count = 1;
 
  return () {
    print("Value is ${base + count++}");
    };
}