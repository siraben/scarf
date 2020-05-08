/////////////////////////
// Name     : scarf.cpp
// Author   : izder456
// License  : N/A
// Version  : v1.0
// Language : C++
/////////////////////////

#include <iostream>

int main(void) {
  int colour_length, pattern_length, pattern_width, pos, _pj_a;
  char colour1, colour2;

  std::cout << ("Enter Charater 1 : ");
  std::cin >> colour1;
  std::cout << ("Enter Charater 2 : ");
  std::cin >> colour2;
  std::cout << ("Enter desired Character length (Whole Number) : ");
  std::cin >> colour_length;
  std::cout << ("Enter desired scarf length (Whole Number) : ");
  std::cin >> pattern_length;
  std::cout << ("Enter desired scarf width (Whole Number) : ");
  std::cin >> pattern_width;

  char colours[2] = {
    colour1,
    colour2
  };

  std::cout << ("\n");
  std::cout << ("Here is your scarf : \n");
  _pj_a = (pattern_width * pattern_length);
  for (pos = 0; pos < _pj_a; pos++) {
    std::cout << (colours[(pos / colour_length) % sizeof(colours)]);
    if (((pos % pattern_width) == (pattern_width - 1))) {
      std::cout << ("\n");
    }
  }
  return 0;
}