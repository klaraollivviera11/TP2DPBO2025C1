# Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
# mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Aksesoris import Aksesoris

class Baju(Aksesoris):
    #atribut private
    __untuk = ""
    __size = ""
    __merk = ""

    #konstruktor
    def __init__(self, id = "", nama_produk = "", harga_produk = 0, stok_produk = 0, jenis = "", bahan = "", warna = "", untuk = "", size = "", merk = ""):
        super().__init__(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna)
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk

    #getter dan setter
    def get_untuk(self):
        return self.__untuk
    
    def set_untuk(self, untuk):
        self.__untuk = untuk

    def get_size(self):
        return self.__size
    
    def set_size(self, size):
        self.__size = size

    def get_merk(self):
        return self.__merk
    
    def set_merk(self, merk):
        self.__merk = merk