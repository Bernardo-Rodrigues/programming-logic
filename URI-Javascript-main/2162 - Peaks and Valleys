var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var N = parseInt(lines.shift());
var flag = true;
var paisagem = lines.shift().split(" ");

for(var i = 0; i < paisagem.length; i ++){
  if(i === 0){
    var anterior = parseInt(paisagem[i]);
  }
  else if(i === 1){
    if(parseInt(paisagem[i]) !== anterior){
      if(parseInt(paisagem[i]) > anterior) estado = "pico";
      else estado = "vale";
      anterior = parseInt(paisagem[i]);
    }else{
      flag = false;
    }
  }else{
    if((estado === "pico" && parseInt(paisagem[i]) >= anterior) || (estado === "vale" && parseInt(paisagem[i]) <= anterior)){
      flag = false;
    }else{
      if(parseInt(paisagem[i]) !== anterior){
        if(parseInt(paisagem[i]) > anterior) estado = "pico";
        else estado = "vale";
        anterior = parseInt(paisagem[i]);
      }else{
        flag = false;
      }
    }
  } 
  if(flag === false) break; 
}

if(flag === true)console.log("1");
  else console.log("0");
