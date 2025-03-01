/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        List<Baju> listBaju = new ArrayList<>();//list untuk menyimpan data

        //5 objek awal
        listBaju.add(new Baju("01", "WinterCloth", 100000, 10, "Baju", "Wol", "Pink", "Kucing", "M", "RoyalCanin"));
        listBaju.add(new Baju("02", "SummerCloth", 200000, 2, "Celana", "Scuba", "Biru", "Anjing", "S", "Cihuahuax"));
        listBaju.add(new Baju("03", "SpringShoes", 350000, 3, "Sepatu", "Kulit", "Coklat", "Anjing", "M", "MeO"));
        listBaju.add(new Baju("04", "FallScarf", 50000, 5, "Sepatu", "Wol", "Merah", "Anjing", "M", "MeO"));
        listBaju.add(new Baju("05", "Glazses", 300000, 2, "Kacamata", "Silicon", "Kuning", "Kucing", "S", "RoyalCanin"));

        int[] maxpanjang = {2, 11, 12, 11, 9, 7, 6, 6, 4, 10};//untuk keperluan tabel

        System.out.println("Menu:\n1. Tambah\n2. Lihat\n3. Keluar\n");

        Scanner sc = new Scanner(System.in);

        int pilihan = 0;

        do{
           System.out.println("Masukan pilihan: ");
           try{
                pilihan = sc.nextInt();
                sc.nextLine();
            }catch(Exception e){
            }

            if(pilihan == 1){//add
                //atribut yang dibutuhkan
                String id, nama_produk, jenis, bahan, warna, untuk, size, merk;
                int harga_produk = 0, stok_produk = 0;

                System.out.println("Masukan Data:\n");

                System.out.println("Masukan ID Produk: "); id = sc.nextLine();
                System.out.println("Masukan Nama Produk: "); nama_produk = sc.nextLine();
                System.out.println("Masukan Harga Produk: ");
                try{
                    harga_produk = sc.nextInt();
                    sc.nextLine();
                }catch (Exception e){
                } 
                System.out.println("Masukan Stok Produk: ");
                try{
                    stok_produk = sc.nextInt();
                    sc.nextLine();
                }catch (Exception e){
                } 
                System.out.println("Masukan Jenis Aksesoris: "); jenis = sc.nextLine();
                System.out.println("Masukan Bahan Aksesoris: "); bahan = sc.nextLine();
                System.out.println("Masukan Warna Aksesoris: "); warna = sc.nextLine();
                System.out.println("Masukan Baju Untuk: "); untuk = sc.nextLine();
                System.out.println("Masukan Size Baju: "); size = sc.nextLine();
                System.out.println("Masukan Merk Baju: "); merk = sc.nextLine();

                listBaju.add(new Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk));

                //mencari length terpanjang
                if(id.length() > maxpanjang[0]) maxpanjang[0] = id.length();
                if(nama_produk.length() > maxpanjang[1]) maxpanjang[1] = nama_produk.length();
                if(String.valueOf(harga_produk).length() > maxpanjang[2]) maxpanjang[2] = String.valueOf(harga_produk).length();
                if(String.valueOf(stok_produk).length() > maxpanjang[3]) maxpanjang[3] = String.valueOf(stok_produk).length();
                if(jenis.length() > maxpanjang[4]) maxpanjang[4] = jenis.length();
                if(bahan.length() > maxpanjang[5]) maxpanjang[5] = bahan.length();
                if(warna.length() > maxpanjang[6]) maxpanjang[6] = warna.length();
                if(untuk.length() > maxpanjang[7]) maxpanjang[7] = untuk.length();
                if(size.length() > maxpanjang[8]) maxpanjang[8] = size.length();
                if(merk.length() > maxpanjang[9]) maxpanjang[9] = merk.length();

                System.out.println("Data berhasil ditambahkan!\n");
            }else if(pilihan == 2){//view
                System.out.println("Tabel Data Produk:\n");

                //upper
                System.out.print("+");
                for(int panjang : maxpanjang){
                    System.out.print("-".repeat(panjang) + "+");
                }
                System.out.println();

                System.out.println("|ID"+ " ".repeat(maxpanjang[0] - 2) + "|Nama Produk" + " ".repeat(maxpanjang[1] - 11) + 
                "|Harga Produk" + " ".repeat(maxpanjang[2] - 12) + "|Stok Produk" + " ".repeat(maxpanjang[3] - 11) + 
                "|Jenis" + " ".repeat(maxpanjang[4] - 5) + "|Bahan" + " ".repeat(maxpanjang[5] - 5) +
                "|Warna" + " ".repeat(maxpanjang[6] - 5) + "|Untuk" + " ".repeat(maxpanjang[7] - 5) +
                "|Size" + " ".repeat(maxpanjang[8] - 4) + "|Merk" + " ".repeat(maxpanjang[9] - 4) + "|");

                System.out.print("+");
                for(int panjang : maxpanjang){
                    System.out.print("-".repeat(panjang) + "+");
                }
                System.out.println();

                for(Baju baju : listBaju){//tampilkan data
                    System.out.println("|" + baju.get_id() + " ".repeat(Math.max(0, maxpanjang[0] - baju.get_id().length())) + "|" + baju.get_nama_produk() + " ".repeat(Math.max(0, maxpanjang[1] - baju.get_nama_produk().length())) +
                    "|" + baju.get_harga_produk() + " ".repeat(Math.max(0, maxpanjang[2] - String.valueOf(baju.get_harga_produk()).length())) + "|" + baju.get_stok_produk() + " ".repeat(Math.max(0, maxpanjang[3] - String.valueOf(baju.get_stok_produk()).length())) +
                    "|" + baju.get_jenis() + " ".repeat(Math.max(0, maxpanjang[4] - baju.get_jenis().length())) + "|" + baju.get_bahan() + " ".repeat(Math.max(0, maxpanjang[5] - baju.get_bahan().length())) +
                    "|" + baju.get_warna() + " ".repeat(Math.max(0, maxpanjang[6] - baju.get_warna().length())) + "|" + baju.get_untuk() + " ".repeat(Math.max(0, maxpanjang[7] - baju.get_untuk().length())) +
                    "|" + baju.get_size() + " ".repeat(Math.max(0, maxpanjang[8] - baju.get_size().length())) + "|" + baju.get_merk() + " ".repeat(Math.max(0, maxpanjang[9] - baju.get_merk().length())) + "|");

                    //lower
                    System.out.print("+");
                    for(int panjang : maxpanjang){
                        System.out.print("-".repeat(panjang) + "+");
                    }
                    System.out.println();
                }
            }
        }while(pilihan != 3);

        sc.close();
    }
}
