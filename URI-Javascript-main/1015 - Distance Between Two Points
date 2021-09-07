var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var P1 = lines.shift().split(" ");
var P2 = lines.shift().split(" ");

var X1 = parseFloat(P1[0]);
var X2 = parseFloat(P2[0]);
var Y1 = parseFloat(P1[1]);
var Y2 = parseFloat(P2[1]);

var distancia = Math.sqrt( ((X2 - X1)**2) + ((Y2 - Y1)**2));
   
console.log(distancia.toFixed(4));
