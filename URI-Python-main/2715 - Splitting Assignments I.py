while True:
  try:

    N = int(input())
    total = 0
    graus = []
    
    X = input().split()
    for i in X:
      i = int(i)
      total += i
      graus.append(i)
    
    media = int(total / 2)
    soma = 0

    for i in graus:
      soma += i
      if soma > media:
        soma -= i
        menor = total-soma - soma
        maior = (soma + i) - (total - soma - i)
        print(min(menor, maior))
        break
      elif soma == media:
        print(total - soma - media)
        break

  except EOFError:
    break

