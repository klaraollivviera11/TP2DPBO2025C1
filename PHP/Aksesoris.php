<!-- Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 1 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin -->

<?php

include 'Petshop.php';

class Aksesoris extends Petshop{
    private $jenis = "";
    private $bahan = "";
    private $warna = "";

    public function __construct($id = "", $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto_produk = "", $jenis = "", $bahan = "", $warna = ""){
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function set_jenis($jenis){
        $this->jenis = $jenis;
    }

    public function get_jenis(){
        return $this->jenis;
    }

    public function set_bahan($bahan){
        $this->bahan = $bahan;
    }

    public function get_bahan(){
        return $this->bahan;
    }

    public function set_warna($warna){
        $this->warna = $warna;
    }

    public function get_warna(){
        return $this->warna;
    }
}
?>