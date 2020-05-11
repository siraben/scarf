///////////////////////
// Name     : scarf.cs
// Author   : izder456
// License  : N/A
// Version  : v1.0
// Language : C#
///////////////////////

using System;

class MainClass {
  public static void Main (String[] args) {
    int colour_length, pattern_length, pattern_width,
      pos, _pj_a;
    string colour1, colour2;

    //get input
    Console.Write("Enter Charater 1 : ");
    colour1 = Console.ReadLine();
    Console.Write("Enter Charater 2 : ");
    colour2 = Console.ReadLine();
    Console.Write("Enter desired Character length (Whole Number) : ");
    colour_length = Convert.ToInt32(Console.ReadLine());
    Console.Write("Enter desired scarf length (Whole Number) : ");
    pattern_length = Convert.ToInt32(Console.ReadLine());
    Console.Write("Enter desired scarf width (Whole Number) : ");
    pattern_width = Convert.ToInt32(Console.ReadLine());

    //combine to array
    string[] colours = {
      colour1, 
      colour2
    };

    //print scarf
    Console.WriteLine();
    Console.Write("Here is your scarf : \n");
    _pj_a = (pattern_width * pattern_length);
    for (pos = 0; pos < _pj_a; pos++) {
      Console.Write(colours[(pos / colour_length) % colours.Length]);
      if ((pos % pattern_width) == (pattern_width - 1)) {
        Console.WriteLine();
      }
    }
  }
}