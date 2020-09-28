/////////////////////////
// Name     : scarf.cpp
// Author   : izder456
// License  : N/A
// Version  : v1.0.2
// Language : C++
/////////////////////////

#include <iostream>
using namespace std;

int main(void) {
  int colour_length, pattern_length, pattern_width, pos, _pj_a;
  char colour1, colour2;

  //get input
  cout << ("Enter Charater 1 : ");
  cin  >> colour1;
  cout << ("Enter Charater 2 : ");
  cin  >> colour2;
  cout << ("Enter desired Character length (Whole Number) : ");
  cin  >> colour_length;
  cout << ("Enter desired scarf length (Whole Number) : ");
  cin  >> pattern_length;
  cout << ("Enter desired scarf width (Whole Number) : ");
  cin  >> pattern_width;

  //combine to array
  char colours[2] = {
    colour1,
    colour2
  };

  //print scarf
  cout << ("\n");
  cout << ("Here is your scarf : \n");
  _pj_a = (pattern_width * pattern_length);
  for (pos = 0; pos < _pj_a; pos++) {
    cout << (colours[(pos / colour_length) % sizeof(colours)]);
    if (((pos % pattern_width) == (pattern_width - 1))) {
      cout << ("\n");
    }
  }
  return 0;
}
