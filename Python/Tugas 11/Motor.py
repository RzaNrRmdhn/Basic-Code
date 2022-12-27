import Kendaraan

class Motor (Kendaraan.Kendaraan):
    def __init__(self, merk, kapasitas, tahun) :
        super().__init__()
        self.__merk = merk
        self.__kapasitas = kapasitas
        self.__tahun = tahun

    def getMerk (self):
        return self.__merk

    def setMerk (self, merk):
        self.__merk  = merk

    def getKapasitas (self):
        return self.__kapasitas

    def setKapasitas (self, kapasitas):
        self.__kapasitas = kapasitas

    def getTahun (self):
        return self.__tahun

    def setTahun (self, tahun):
        self.__tahun = tahun
        