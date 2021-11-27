T = int(input())
N = 0
food = ''

while(T != -0):
  i = 1
  calorias = 0
  while(i <= T):
    X = input().split()
    N = int(X[0])
    food = X[1]

    if food == 'suco': calorias += N * 120
    elif food == 'morango': calorias += N * 85
    elif food == 'mamao': calorias += N * 85
    elif food == 'goiaba': calorias += N * 70
    elif food == 'manga': calorias += N * 56
    elif food == 'laranja': calorias += N * 50
    elif food ==  'brocolis': calorias += N * 34

    i += 1
  
  if calorias < 110: print(f'Mais {110 - calorias} mg')
  elif calorias > 130: print(f'Menos {calorias - 130} mg')
  else: print(f'{calorias} mg')
  
  T = int(input())

