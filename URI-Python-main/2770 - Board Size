while True:
  try:
    entrada = input().split()

    X = int(entrada[0])
    Y = int(entrada[1])

    for _ in range(int(entrada[2])):
      entrada = input().split()
      X1 = int(entrada[0])
      Y1 = int(entrada[1])
      
      if ((X1 <= X) and (Y1 <= Y)): print("Sim")
      elif ((X1 <= Y) and (Y1 <= X)): print("Sim")
      else: print("Nao")

  except EOFError:
    break
