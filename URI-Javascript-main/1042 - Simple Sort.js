var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

var A = parseInt(lines.shift());
var B = parseInt(lines.shift());
var C = parseInt(lines.shift());

if(A < B && A < C){ // A <
  if(B < C){ //A < B < C
    console.log(A + "\n" + B + "\n" + C + "\n");
  }else{ // A < C < B
    console.log(A + "\n" + C + "\n" + B + "\n");
  }
}else if(B < A && B < C){ // B <
  if(A < C){ // B < A < C
    console.log(B + "\n" + A + "\n" + C + "\n");
  }else{ // B < C < A
    console.log(B + "\n" + C + "\n" + A + "\n");
  }
}else{ // C <
  if(A < B){ // C < A < B
    console.log(C + "\n" + A + "\n" + B + "\n");
  }else{ // C < B < A
    console.log(C + "\n" + B + "\n" + A + "\n");
  }
}
console.log(A + "\n" + B + "\n" + C);
