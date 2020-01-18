def sumRec(n):
   if n ==0:
      return  1
   else:
      return ((n+1) + sumRec(n-1))


def main():
   tot = sumRec(7)
   print(tot) 
   return True

main()
