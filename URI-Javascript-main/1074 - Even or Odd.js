var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var N = lines.shift();

for(var i = 0; i < N; i ++){
  var X = parseInt(lines.shift());
  if(X == 0){
    console.log('NULL')
  }else if(X < 0 && (X % 2 == 0)){
    console.log('EVEN NEGATIVE')
  }else if(X < 0 && (X % 2 != 0)){
    console.log('ODD NEGATIVE')
  }else if(X > 0 && (X % 2 == 0)){
    console.log('EVEN POSITIVE')
  }else{
    console.log('ODD POSITIVE')
  }
}
