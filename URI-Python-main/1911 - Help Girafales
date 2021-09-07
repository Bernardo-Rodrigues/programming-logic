N = int(input())

while(N != 0):
  lista = {}
  falsas = 0

  for x in range(N):
    linha = input().split()
    lista[linha[0]] = linha[1]
  
  M = int(input())
  for x in range(M):
    cont = 0
    i = 0
    linha = input().split()
    assinatura = lista[linha[0]]
    for y in linha[1]:
      if y != assinatura[i]:
        cont += 1
      i += 1
    if cont >= 2: falsas += 1

  print(falsas)
  N = int(input())
