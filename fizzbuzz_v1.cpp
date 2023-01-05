
#include <iostream>

int main() {
  // przeiteruj od 1 do 100
  for (int i = 1; i <= 100; i++) {
    // sprawdź, czy liczba jest podzielna przez 3 i 5
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "FizzBuzz" << std::endl;
    }
    // sprawdź, czy liczba jest podzielna przez 3
    else if (i % 3 == 0) {
      std::cout << "Fizz" << std::endl;
    }
    // sprawdź, czy liczba jest podzielna przez 5
    else if (i % 5 == 0) {
      std::cout << "Buzz" << std::endl;
    }
    // w przeciwnym razie wyświetl samą liczbę
    else {
      std::cout << i << std::endl;
    }
  }

  return 0;
}
