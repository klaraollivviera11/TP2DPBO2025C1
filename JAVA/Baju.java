/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */
public class Baju extends Aksesoris{//class Baju extends kelas Aksesoris
    //atribut private
    private String untuk;
    private String size;
    private String merk;

    public Baju(){//konstruktor
        super();
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    public Baju(String id, String nama_produk, int harga_produk, int stok_produk, String jenis, String bahan, String warna, String untuk, String size, String merk){
        super(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    //getter dan setter
    public String get_untuk(){
        return this.untuk;
    }

    public void set_untuk(String untuk){
        this.untuk = untuk;
    }

    public String get_size(){
        return this.size;
    }

    public void set_size(String size){
        this.size = size;
    }

    public String get_merk(){
        return this.merk;
    }

    public void set_merk(String merk){
        this.merk = merk;
    }
}