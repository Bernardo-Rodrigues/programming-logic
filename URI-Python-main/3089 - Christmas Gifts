N = int(input())

while N != 0:
  Presentes = []
  presentes = input().split()
  for i in presentes:
    Presentes.append(int(i))
  
  tamanho = len(Presentes)
  maior = Presentes[0] + Presentes[tamanho-1]
  menor = Presentes[N] + Presentes[N-1]
  
  for i in range(int(tamanho/2)):
    if Presentes[i] + Presentes[tamanho-1-i] > maior:
      maior = Presentes[i] + Presentes[tamanho-1-i]
    if Presentes[i] + Presentes[tamanho-i-1] < menor:
      menor = Presentes[i] + Presentes[tamanho-1-i]

  print (max(maior, menor), min(maior, menor))

  N = int(input())

