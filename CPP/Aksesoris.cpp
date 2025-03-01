/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */
#include <iostream>
#include <string>
#include "Petshop.cpp"

using namespace std;

class Aksesoris : public Petshop{//inheritance kelas Aksesoris kepada kelas Petshop
    private://atribut kelas Aksesoris
        string jenis;
        string bahan;
        string warna;

    public:
        Aksesoris(){//konstruktor
            this->jenis = "";
            this->bahan = "";
            this->warna = "";
        }

        Aksesoris(string id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna) : Petshop(id, nama_produk, harga_produk, stok_produk){
            this->jenis = jenis;
            this->bahan = bahan; 
            this->warna = warna;
        }

        //getter dan setter
        string get_jenis(){
            return this->jenis;
        }

        void set_jenis(string jenis){
            this->jenis = jenis;
        }

        string get_bahan(){
            return this->bahan;
        }

        void set_bahan(string bahan){
            this->bahan = bahan;
        }

        string get_warna(){
            return this->warna;
        }

        void set_warna(string warna){
            this->warna = warna;
        }

        ~Aksesoris(){//destruktor

        }
};