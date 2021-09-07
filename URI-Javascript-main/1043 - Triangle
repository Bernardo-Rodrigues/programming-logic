var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

var A = parseFloat(lines.shift());
var B = parseFloat(lines.shift());
var C = parseFloat(lines.shift());
var Area = parseFloat(((A + B) * C) / 2);

if(A < (B + C) && B < (A + C) && C < (A + B)){
  console.log("Perimetro = " + (A + B + C).toFixed(1));
}else console.log("Area = " + Area.toFixed(1));
