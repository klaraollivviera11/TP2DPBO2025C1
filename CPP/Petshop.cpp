/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */
#include <iostream>
#include <string>

using namespace std;

class Petshop{
    private://atribut private kelas Petshop
        string id;
        string nama_produk;
        int harga_produk;
        int stok_produk;

    public:
        Petshop(){//konstruktor
            this->id = "";
            this->nama_produk = "";
            this->harga_produk = 0;
            this->stok_produk = 0;
        }

        Petshop(string id, string nama_produk, int harga_produk, int stok_produk){
            this->id = id;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
        }

        //getter dan setter
        string get_id(){
            return this->id;
        }

        void set_id(string id){
            this->id = id;
        }

        string get_nama_produk(){
            return this->nama_produk;
        }

        void set_nama_produk(string nama_produk){
            this->nama_produk = nama_produk;
        }

        int get_harga_produk(){
            return this->harga_produk;
        }

        void set_harga_produk(int harga_produk){
            this->harga_produk = harga_produk;
        }

        int get_stok_produk(){
            return this->stok_produk;
        }

        void set_stok_produk(int stok_produk){
            this->stok_produk = stok_produk;
        }

        ~Petshop(){//destruktor

        }
};