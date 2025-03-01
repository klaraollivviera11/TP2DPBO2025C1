/*Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin */
public class Aksesoris extends Petshop{//class Aksesoris extends kelas Petshop
    //atribut private
    private String jenis;
    private String bahan;
    private String warna;

    public Aksesoris(){//konstruktor
        super();
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    public Aksesoris(String id, String nama_produk, int harga_produk, int stok_produk, String jenis, String bahan, String warna){
        super(id, nama_produk, harga_produk, stok_produk);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    //getter dan setter
    public String get_jenis(){
        return this.jenis;
    }

    public void set_jenis(String jenis){
        this.jenis = jenis;
    }

    public String get_bahan(){
        return this.bahan;
    }

    public void set_bahan(String bahan){
        this.bahan = bahan;
    }

    public String get_warna(){
        return this.warna;
    }

    public void set_warna(String warna){
        this.warna = warna;
    }
}