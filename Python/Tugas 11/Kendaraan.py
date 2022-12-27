class Kendaraan :
    def __init__(self, warna = "Hitam", transmisi = "Matic") :
        self.__warna = warna
        self.__transmisi = transmisi
        
    def getWarna (self):
        return self.__warna

    def setWarna (self, warna):
        self.__warna = warna

    def getTransmisi(self):
        return self.__transmisi

    def setTransmisi (self, transmisi):
        self.__transmisi = transmisi

    def __str__(self) :
        return "berwarna" + self.__warna + "dan transmisinya " + self.__transmisi
