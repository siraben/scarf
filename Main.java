/////////////////////////
// Name     : scarf.java
// Author   : izder456
// License  : N/A
// Version  : v1.0.1
// Language : Java
/////////////////////////

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int colour_length, pattern_length, pattern_width,
      pos, _pj_a;
    String colour1, colour2;
    Scanner input = new Scanner(System.in);

    //get input
    System.out.print("Enter Charater 1 : ");
    colour1 = input.next();
    System.out.print("Enter Charater 2 : ");
    colour2 = input.next();
    System.out.print("Enter desired Character length (Whole Number) : ");
    colour_length = input.nextInt();
    System.out.print("Enter desired scarf length (Whole Number) : ");
    pattern_length = input.nextInt();
    System.out.print("Enter desired scarf width (Whole Number) : ");
    pattern_width = input.nextInt();

    //combine to array
    String colours[] = {colour1, colour2};

    //print scarf
    System.out.print("\n");
    System.out.print("Here is your scarf : \n");
    _pj_a = (pattern_width * pattern_length);
    for (pos = 0; pos < _pj_a; pos++) {
      System.out.print(colours[(pos / colour_length) % colours.length]);
      if ((pos % pattern_width) == (pattern_width - 1)) {
        System.out.print("\n");
      }
    }
  }
}