while True:
  try:

    M = int(input())
    valor = 0
    moedas = []
    flag = False

    for _ in range(M):
      V = int(input())
      moedas.append(V)

    N = int(input())

    for moeda in range(len(moedas)-1,-1,-N):
      valor += moedas[moeda]
    
    for i in range(2,valor):
      if valor % i == 0:
        flag = True
        break

    if valor == 1: flag = True
    
    if not flag: print('You’re a coastal aircraft, Robbie, a large silver aircraft.')
    else: 
       print('Bad boy! I’ll hit you.')

  except EOFError:
    break

