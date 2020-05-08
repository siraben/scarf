///////////////////////
// Name     : scarf.js
// Author   : izder456
// License  : N/A
// Version  : v1.0
// Language : Node.js
///////////////////////

const prompt = require('prompt-sync')({
  sigint: true
});

var colour_length, colours, pattern_length, pattern_width;

colours = [prompt("Enter Charater 1 : "), prompt("Enter Charater 2 : ")];
colour_length = Number.parseInt(prompt("Enter desired Character length (Whole Number) : "));
pattern_length = Number.parseInt(prompt("Enter desired scarf length (Whole Number) : "));
pattern_width = Number.parseInt(prompt("Enter desired scarf width (Whole Number) : "));

console.log();
console.log("Here is your scarf : ");
_pj_a = (pattern_width * pattern_length);
for (var pos = 0;(pos < _pj_a); pos++ ) {
  process.stdout.write(colours[(Number.parseInt((pos / colour_length)) % colours.length)]);
  if (((pos % pattern_width) === (pattern_width - 1))) {
    console.log(); // fixes stdout writing "true" at end
  }
}
