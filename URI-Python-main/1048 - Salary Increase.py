A = float(input())
reajuste = 0

if A <= 400:
  reajuste = 0.15
  print(f'Novo salario: {A + (A * reajuste):.2f}')
  print(f'Reajuste ganho: {A * reajuste:.2f}')
  print(f'Em percentual: {int(reajuste * 100)} %')
elif A <= 800:
  reajuste = 0.12
  print(f'Novo salario: {A + (A * reajuste):.2f}')
  print(f'Reajuste ganho: {A * reajuste:.2f}')
  print(f'Em percentual: {int(reajuste * 100)} %')
elif A <= 1200:
  reajuste = 0.10
  print(f'Novo salario: {A + (A * reajuste):.2f}')
  print(f'Reajuste ganho: {A * reajuste:.2f}')
  print(f'Em percentual: {int(reajuste * 100)} %')
elif A <= 2000:
  reajuste = 0.07
  print(f'Novo salario: {A + (A * reajuste):.2f}')
  print(f'Reajuste ganho: {A * reajuste:.2f}')
  print(f'Em percentual: {int(reajuste * 100)} %')
else:
  reajuste = 0.04
  print(f'Novo salario: {A + (A * reajuste):.2f}')
  print(f'Reajuste ganho: {A * reajuste:.2f}')
  print(f'Em percentual: {int(reajuste * 100)} %')


