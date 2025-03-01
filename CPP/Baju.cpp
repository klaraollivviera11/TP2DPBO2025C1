/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */
#include <iostream>
#include <string>
#include "Aksesoris.cpp"

using namespace std;

class Baju : public Aksesoris{//inheritance kelas Baju kepada kelas Aksesoris
    private://atribut kelas Baju
        string untuk;
        string size;
        string merk;
    
    public:
        Baju(){//konstruktor
            this->untuk = "";
            this->size = "";
            this->merk = "";
        }

        Baju(string id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna, string untuk, string size, string merk) : Aksesoris(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna){
           this->untuk = untuk;
           this->size = size;
           this->merk = merk;
       }

       //getter dan setter
        string get_untuk(){
            return this->untuk;
        }

        void set_untuk(string untuk){
            this->untuk = untuk;
        }

        string get_size(){
            return this->size;
        }

        void set_size(string size){
            this->size = size;
        }

        string get_merk(){
            return this->merk;
        }

        void set_merk(string merk){
            this->merk = merk;
        }

        ~Baju(){//destruktor

        }
};