class PersegiPanjang :
    def __init__(self,p=1, l=1):
      self.p=p
      self.l=l
    def getLuas(self) :
      return self.p*self.l

    def getKeliling(self) :
      return 2*(self.p*self.l)

    def getPanjang(self) :
      return self.p

    def getLebar(self) :
      return self.l

    def setPanjang (self,p) :
      self.p=p
      print(p)
      
    def setLebar (self,l) :
      self.l=l
      print(l)

test = PersegiPanjang(10,8)
print(test.getLuas())
print(test.getKeliling())
print((test.getPanjang()))
print(test.getLebar())
test.setLebar(4)
test.setPanjang(7)


test1 = PersegiPanjang(10,8)
print(test1.getLuas())
print(test1.getKeliling())
print((test1.getPanjang()))
print(test1.getLebar())
test1.setLebar(4)
test1.setPanjang(7)

print(test == test1)
print(test != test1)

