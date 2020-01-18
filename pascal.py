def compress(L):
   if len(L)<=1:
      return []
   else:
      accum = []
      for x in range(0, len(L)-1,1):
         accum += [L[x]+L[x+1]]
      return accum

def pasc(n):
   if n<=1:
      return [1]
   else:
      return [1]+compress(pasc(n-1)) +[1]


for i in range(1,10,1):
   print(pasc(i))



