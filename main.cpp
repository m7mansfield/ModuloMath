#include <iostream>

int main() {
  for(int num = 2; num <= 12; num++) {
    for(int x = 0; x < num; x++) {
      for(int y = 0; y < num; y++) {
        std::cout << (x + y) % num << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
    for(int x = 0; x < num; x++) {
      for(int y = 0; y < num; y++) {
        std::cout << (x * y) % num << " ";
      }
      std::cout << std::endl;
    }
    std::cout << "----------------------------------" << std::endl;
  }
}
