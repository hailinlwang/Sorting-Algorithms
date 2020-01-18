def gcd(a,b):
   while a != b :
      if(a>b):
         a = abs(b-a)
      elif(b>a):
         b = abs(b-a)
   return a

print(gcd(12,36))
