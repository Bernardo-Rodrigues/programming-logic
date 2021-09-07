entrada = input().split()
M = int(entrada[0])
N = int(entrada[1])
Hay = {}

for x in range(M):
  linha = input().split()
  Hay[linha[0]] = int(linha[1])

for x in range(N):
  soma = 0
  linha = input().split()
  for x in linha:
    if Hay.get(x): 
      soma += Hay[x]
  while(linha[len(linha)-1] != '.'):
    linha = input().split()
    for x in linha:
      if Hay.get(x): 
        soma += Hay[x]
  print(soma)
