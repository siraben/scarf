//////////////////////
// Name     : scarf.c
// Author   : izder456
// License  : N/A
// Version  : v1.0.2
// Language : C
//////////////////////

#include <stdio.h>
#include <math.h>

int main(void) {
  int colour_length, pattern_length, pattern_width, pos, _pj_a;
  char colour1, colour2;

  //get input
  printf("Enter Charater 1 : ");
  scanf(" %c",&colour1);
  printf("Enter Charater 2 : ");
  scanf(" %c",&colour2);
  printf("Enter desired Character length (Whole Number) : ");
  scanf(" %i",&colour_length);
  printf("Enter desired scarf length (Whole Number) : ");
  scanf(" %i",&pattern_length);
  printf("Enter desired scarf width (Whole Number) : ");
  scanf(" %i",&pattern_width);

  //combine to array
  char colours[2] = {colour1, colour2};
  
  //print scarf
  printf("\n");
  printf("Here is your scarf : \n");
  _pj_a = (pattern_width * pattern_length);
  for (pos = 0;pos<_pj_a; pos++) {
    printf("%c",colours[(pos / colour_length) % sizeof(colours)]);
    if (((pos % pattern_width) == (pattern_width - 1))) {
      printf("\n");
    }
  }
  return 0;
}
