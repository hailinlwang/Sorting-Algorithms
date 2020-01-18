def exp(a,b):
   p=1
   cnt=1
   while cnt<=b:
      p=p*a
      cnt=cnt+1
   print(p)
   return p


x = input("type in the base")
y = input("type in the exponent")
exp(int(x),int(y))
