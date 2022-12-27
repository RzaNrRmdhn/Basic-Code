import Mobil
import Motor


def main():
    motor = Motor.Motor ("Honda", 2, 2019)
    print ("Merk Motor : " + motor.getMerk())
    print ("Kapasitas Motor : " , motor.getKapasitas())
    print ("Tahun Keluar Motor : " , motor.getTahun())

    mobil = Mobil.Mobil ("Expander", 6, 2020)
    print ("Merk Mobil : " + mobil.getMerk())
    print ("Kapasitas Mobil : " , mobil.getKapasitas())
    print ("Tahun Keluar Mobil : " , mobil.getTahun())
    
main()