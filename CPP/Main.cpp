/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */

#include <iostream>
#include <string>
#include <list>
#include "Baju.cpp"

using namespace std;

int main(){
    list<Baju> listBaju;//list untuk list baju

    //5 data pertama
    listBaju.push_back(Baju("01", "WinterCloth", 100000, 10, "Baju", "Wol", "Pink", "Kucing", "M", "RoyalCanin"));
    listBaju.push_back(Baju("02", "SummerCloth", 200000, 2, "Celana", "Scuba", "Biru", "Anjing", "S", "Cihuahuax"));
    listBaju.push_back(Baju("03", "SpringShoes", 350000, 3, "Sepatu", "Kulit", "Coklat", "Anjing", "M", "MeO"));
    listBaju.push_back(Baju("04", "FallScarf", 50000, 5, "Sepatu", "Wol", "Merah", "Anjing", "M", "MeO"));
    listBaju.push_back(Baju("05", "Glazses", 300000, 2, "Kacamata", "Silicon", "Kuning", "Kucing", "S", "RoyalCanin"));

    int maxpanjang[10] = {2, 11, 12, 11, 9, 7, 6, 6, 4, 10};//untuk keperluan tabel
    cout << "Menu:\n1. Tambah\n2. Lihat\n3. Keluar\n";

    int pilihan = 0;

    //melakukan perulangan untuk masukan user
    do{
        cout << "Masukan pilihan: ";
        cin >> pilihan;

        if(pilihan == 1){//add
            //atribut yang diperlukan
            string id, nama_produk, jenis, bahan, warna, untuk, size, merk;
            int harga_produk, stok_produk;

            cout << "Masukan Data:\n\n";

            cout << "Masukan ID Produk: "; cin >> id;
            cout << "Masukan Nama Produk: "; cin >> nama_produk;
            cout << "Masukan Harga_Produk: "; cin >> harga_produk;
            cout << "Masukan Stok Produk: "; cin >> stok_produk;
            
            cout << "Masukan Jenis Aksesoris: "; cin >> jenis;
            cout << "Masukan Bahan Aksesoris: "; cin >> bahan;
            cout << "Masukan Warna Aksesoris: "; cin >> warna;
            
            cout << "Masukan Baju Untuk: "; cin >> untuk;
            cout << "Masukan Size Baju: "; cin >> size;
            cout << "Masukan Merk Baju: "; cin >> merk;

            cout << "Data berhasil ditambahkan!\n\n";

            Baju temp(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk);
            listBaju.push_back(temp);

            //mencari length terpanjang
            if(id.length() > maxpanjang[0]) maxpanjang[0] = id.length();
            if(nama_produk.length() > maxpanjang[1]) maxpanjang[1] = nama_produk.length();
            if(to_string(harga_produk).length() > maxpanjang[2]) maxpanjang[2] = to_string(harga_produk).length();
            if(to_string(stok_produk).length() > maxpanjang[3]) maxpanjang[3] = to_string(stok_produk).length();
            if(jenis.length() > maxpanjang[4]) maxpanjang[4] = jenis.length();
            if(bahan.length() > maxpanjang[5]) maxpanjang[5] = bahan.length();
            if(warna.length() > maxpanjang[6]) maxpanjang[6] = warna.length();
            if(untuk.length() > maxpanjang[7]) maxpanjang[7] = untuk.length();
            if(size.length() > maxpanjang[8]) maxpanjang[8] = size.length();
            if(merk.length() > maxpanjang[9]) maxpanjang[9] = merk.length();
        }else if(pilihan == 2){//view
            cout << "Tabel Data Produk:\n\n";
            
            //upper
            cout << "+";
            cout << string(maxpanjang[0], '-') << "+";
            cout << string(maxpanjang[1], '-') << "+";
            cout << string(maxpanjang[2], '-') << "+";
            cout << string(maxpanjang[3], '-') << "+";
            cout << string(maxpanjang[4], '-') << "+";
            cout << string(maxpanjang[5], '-') << "+";
            cout << string(maxpanjang[6], '-') << "+";
            cout << string(maxpanjang[7], '-') << "+";
            cout << string(maxpanjang[8], '-') << "+";
            cout << string(maxpanjang[9], '-') << "+\n";

            cout << "|ID"; for(int i = 0; i < maxpanjang[0] - 2; i++){cout << " ";}; cout << "|Nama Produk"; for(int i = 0; i < maxpanjang[1] - 11; i++){cout << " ";};
            cout << "|Harga Produk"; for(int i = 0; i < maxpanjang[2] - 12; i++){cout << " ";}; cout << "|Stok Produk"; for(int i = 0; i < maxpanjang[3] - 11; i++){cout << " ";};
            cout << "|Jenis"; for(int i = 0; i < maxpanjang[4] - 5; i++){cout << " ";}; cout << "|Bahan"; for(int i = 0; i < maxpanjang[5] - 5; i++){cout << " ";};
            cout << "|Warna"; for(int i = 0; i < maxpanjang[6] - 5; i++){cout << " ";}; cout << "|Untuk"; for(int i = 0; i < maxpanjang[7] - 5; i++){cout << " ";};
            cout << "|Size"; for(int i = 0; i < maxpanjang[8] - 4; i++){cout << " ";}; cout << "|Merk"; for(int i = 0; i < maxpanjang[9] - 4; i++){cout << " ";}; cout << "|\n";

            cout << "+";
            cout << string(maxpanjang[0], '-') << "+";
            cout << string(maxpanjang[1], '-') << "+";
            cout << string(maxpanjang[2], '-') << "+";
            cout << string(maxpanjang[3], '-') << "+";
            cout << string(maxpanjang[4], '-') << "+";
            cout << string(maxpanjang[5], '-') << "+";
            cout << string(maxpanjang[6], '-') << "+";
            cout << string(maxpanjang[7], '-') << "+";
            cout << string(maxpanjang[8], '-') << "+";
            cout << string(maxpanjang[9], '-') << "+\n";

            //list data
            for(list<Baju>::iterator it = listBaju.begin(); it != listBaju.end(); it++){
                cout << "|" << it->get_id(); for(int j = 0; j < maxpanjang[0] - it->get_id().length(); j++){cout << " ";}; cout << "|" << it->get_nama_produk(); for(int j = 0; j < maxpanjang[1] - it->get_nama_produk().length(); j++){cout << " ";};
                cout << "|" << it->get_harga_produk(); for(int j = 0; j < maxpanjang[2] - to_string(it->get_harga_produk()).length(); j++){cout << " ";}; cout << "|" << it->get_stok_produk(); for(int j = 0; j < maxpanjang[3] - to_string(it->get_stok_produk()).length(); j++){cout << " ";};
                cout << "|" << it->get_jenis(); for(int j = 0; j < maxpanjang[4] - it->get_jenis().length(); j++){cout << " ";}; cout << "|" << it->get_bahan(); for(int j = 0; j < maxpanjang[5] - it->get_bahan().length(); j++){cout << " ";};
                cout << "|" << it->get_warna(); for(int j = 0; j < maxpanjang[6] - it->get_warna().length(); j++){cout << " ";}; cout << "|" << it->get_untuk(); for(int j = 0; j < maxpanjang[7] - it->get_untuk().length(); j++){cout << " ";};
                cout << "|" << it->get_size(); for(int j = 0; j < maxpanjang[8] - it->get_size().length(); j++){cout << " ";}; cout << "|" << it->get_merk(); for(int j = 0; j < maxpanjang[9] - it->get_merk().length(); j++){cout << " ";}; cout << "|\n";
                
                //lower
                cout << "+";
                cout << string(maxpanjang[0], '-') << "+";
                cout << string(maxpanjang[1], '-') << "+";
                cout << string(maxpanjang[2], '-') << "+";
                cout << string(maxpanjang[3], '-') << "+";
                cout << string(maxpanjang[4], '-') << "+";
                cout << string(maxpanjang[5], '-') << "+";
                cout << string(maxpanjang[6], '-') << "+";
                cout << string(maxpanjang[7], '-') << "+";
                cout << string(maxpanjang[8], '-') << "+";
                cout << string(maxpanjang[9], '-') << "+\n";
            }
        }
    }while(pilihan != 3);//exit
}