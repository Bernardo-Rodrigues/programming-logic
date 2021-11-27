A = int(input())
B = int(input())
soma = 0

if(A < B):
  if(A % 2 ==0): A += 1
  else: A += 2   
  while(A < B):
    soma += A
    A+=2
  print(soma)
elif(A > B):
  if(B % 2 == 0): B += 1
  else: B += 2   
  while(B < A):
    soma += B
    B += 2
  print(soma)
else: print(0)


