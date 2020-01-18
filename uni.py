class student:
   def __init__(self, fname, lname, snum):
      self.fn = fname
      self.ln = lname
      self.sn = snum
      self.courses = []
      self.grades = []
      self.tut = int
      self.tutTotal = 15000

   def setFn(self,x):
      self.fn = x
      return True

   def setLn(self,x):
      self.Ln = x
      return True

   def setSn(self,x):
      self.Sn = x
      return True

   def getFn(self):
      return self.fn

   def getLn(self):
      return self.Ln

   def getSn(self):
      return self.Sn

   def getCourseGrades(self):
      return (self.courses+self.grades)

   def addCourses(self,x,y):
      self.courses += [x]
      self.grades += [y]
      return True


   def setTut(self,x):
      self.tut = x
      return self.tut

   def tutPaid(self):
      if (self.tutTotal-self.tut)>0:
         return False
      else:
         return True 

def main():
   a = student("Hailin","wang", 1000)
   
   print(a.tutTotal)
   a.setFn("Hello")
   a.setSn("Goodbye")

   print(a.getFn())
   print(a.getSn())

   a.addCourses("math",70)
   print(a.getCourseGrades())
    
   a.setTut(13000)
   print(a.tutPaid())
   
   a.setTut(15000)
   print(a.tutPaid())
    
   #print(a.getLn())
   return True
   
main()
