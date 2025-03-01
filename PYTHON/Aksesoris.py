# Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
# mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Petshop import Petshop

class Aksesoris(Petshop):
    #atribut private
    __jenis = ""
    __bahan = ""
    __warna = ""

    #konstruktor
    def __init__(self, id = "", nama_produk = "", harga_produk = 0, stok_produk = 0, jenis = "", bahan = "", warna = ""):
        super().__init__(id, nama_produk, harga_produk, stok_produk)
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna

    #getter dan setter
    def get_jenis(self):
        return self.__jenis
    
    def set_jenis(self, jenis):
        self.__jenis = jenis

    def get_bahan(self):
        return self.__bahan
    
    def set_bahan(self, bahan):
        self.__bahan = bahan

    def get_warna(self):
        return self.__warna
    
    def set_warna(self, warna):
        self.__warna = warna