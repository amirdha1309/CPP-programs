#include <string>
int main() {
  std::string str1 = "apple";
  std::string str2 = "banana";
  int result = str1.compare(str2);
  if (result == 0) {
    std::cout << "The strings are equal." << std::endl;
  } else if (result < 0) {
    std::cout << "The string str1 is less than str2." << std::endl;
  } else {
    std::cout << "The string str1 is greater than str2." << std::endl;
  }
  return 0;
}
