///////////////////////
// Name     : scarf.fs
// Author   : izder456
// License  : N/A
// Version  : v1.0.1
// Language : F#
///////////////////////
open System

[<EntryPoint>]
let main argv =
    let mutable colour_length = 0;
    let mutable pattern_length = 0;
    let mutable pattern_width = 0;
    let mutable colour1 = " ";
    let mutable colour2 = " ";

    //get input
    Console.Write("Enter Charater 1 : ");
    colour1 <- Console.ReadLine();
    Console.Write("Enter Charater 2 : ");
    colour2 <- Console.ReadLine();
    Console.Write("Enter desired Character length (Whole Number) : ");
    colour_length <- int(Console.ReadLine());
    Console.Write("Enter desired scarf length (Whole Number) : ");
    pattern_length <- int(Console.ReadLine());
    Console.Write("Enter desired scarf width (Whole Number) : ");
    pattern_width <- int(Console.ReadLine());
    
    //combine to array
    let colours = [colour1; colour2];

    //print scarf
    Console.WriteLine();
    Console.Write("Here is your scarf : \n");
    let mutable pos = 0;
    let _pj_a = (pattern_width * pattern_length) - 1;
    for pos in 0 .. _pj_a do
      Console.Write(colours.[(pos / colour_length) % colours.Length]);
      if (pos % pattern_width) = (pattern_width - 1) then
        Console.WriteLine();
    0;