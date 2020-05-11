///////////////////////
// Name     : scarf.go
// Author   : izder456
// License  : N/A
// Version  : v1.0
// Language : Golang
//////////////////////

package main
import (
  "fmt"
)

func main() {
  var colour1,colour2 string
  var colour_length,pattern_length,pattern_width int
  var pos,_pj_a int

  //get input
  fmt.Print("Enter Charater 1 : ")
  fmt.Scanln(&colour1)
  fmt.Print("Enter Charater 2 : ")
  fmt.Scanln(&colour2)
  fmt.Print("Enter desired Character length (Whole Number) : ")
  fmt.Scanln(&colour_length)
  fmt.Print("Enter desired scarf length (Whole Number) : ")
  fmt.Scanln(&pattern_length)
  fmt.Print("Enter desired scarf width (Whole Number) : ")
  fmt.Scanln(&pattern_width)

  //combine to array
  colours := [2]string{colour1, colour2}

  //print scarf
  fmt.Println()
  fmt.Print("Here is your scarf : \n")
  _pj_a = pattern_width * pattern_length
  for pos = 0; pos < _pj_a; pos++ {
    fmt.Print(colours[(pos/colour_length) % len(colours)])
    if (pos % pattern_width) == (pattern_width-1) {
      fmt.Println()
    }
  }
}