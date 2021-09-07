var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var N = parseFloat(lines.shift());

if(N <= 2000){
  console.log('Isento')
}else if(N <= 3000){
 var taxes = (N -2000) * 0.08;
  console.log('R$ ' + taxes.toFixed(2))
}else if(N <= 4500){
 var taxes = 80 + (N -3000) * 0.18;
  console.log('R$ ' + taxes.toFixed(2))
}else{
 var taxes = 350 + (N - 4500) * 0.28;
  console.log('R$ ' + taxes.toFixed(2))
}
