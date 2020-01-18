def compress(x):
   accum = []
   if len(x) <=1 :
      return [] 
   else:
      for i in range(0,len(x)-3,1):
         accum+=[L[i]+L[i+1]]
         print(accum)
      accum+= [(x[len(x)-1]*x[len(x)-1] )]
      return accum
         

def ber(n):
   if n<=1:
      return [1]
   else:
      return [1]+compress(ber(n-1))


for i in range(0,10,1):
   print(ber(i))
