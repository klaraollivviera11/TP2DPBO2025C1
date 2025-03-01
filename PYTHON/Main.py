# Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
# mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Baju import Baju

listBaju = [] #array untuk menyimpan data

#5 objek pertama
listBaju.append(Baju("01", "WinterCloth", 100000, 10, "Baju", "Wol", "Pink", "Kucing", "M", "RoyalCanin"))
listBaju.append(Baju("02", "SummerCloth", 200000, 2, "Celana", "Scuba", "Biru", "Anjing", "S", "Cihuahuax"))
listBaju.append(Baju("03", "SpringShoes", 350000, 3, "Sepatu", "Kulit", "Coklat", "Anjing", "M", "MeO"))
listBaju.append(Baju("04", "FallScarf", 50000, 5, "Sepatu", "Wol", "Merah", "Anjing", "M", "MeO"))
listBaju.append(Baju("05", "Glazses", 300000, 2, "Kacamata", "Silicon", "Kuning", "Kucing", "S", "RoyalCanin"))

maxpanjang = [2, 11, 12, 11, 9, 7, 6, 6, 4, 10]#keperluan tabel

print("Menu:\n1. Tambah\n2. Lihat\n3. Keluar\n")

pilihan = 0

while pilihan != 3:
    pilihan = int(input("Masukan pilihan: "))

    if pilihan == 1:#add
        print("Masukan Data:\n")

        id = input("Masukan ID Produk: ")
        nama_produk = input("Masukan Nama Produk: ")
        harga_produk = int(input("Masukan Harga Produk: "))
        stok_produk = int(input("Masukan Stok Produk: "))

        jenis = input("Masukan Jenis Aksesoris: ")
        bahan = input("Masukan Bahan Aksesoris: ")
        warna = input("Masukan Warna Aksesoris: ")

        untuk = input("Masukan Baju Untuk: ")
        size = input("Masukan Size Baju: ")
        merk = input("Masukan Merk Baju: ")

        listBaju.append(Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk))

        #mencari len terpanjang
        if(len(id) > maxpanjang[0]): maxpanjang[0] = len(id)
        if(len(nama_produk) > maxpanjang[1]): maxpanjang[1] = len(nama_produk)
        if(len(str(harga_produk)) > maxpanjang[2]): maxpanjang[2] = len(str(harga_produk))
        if(len(str(stok_produk)) > maxpanjang[3]): maxpanjang[3] = len(str(stok_produk))
        if(len(jenis) > maxpanjang[4]): maxpanjang[4] = len(jenis)
        if(len(bahan) > maxpanjang[5]): maxpanjang[5] = len(bahan)
        if(len(warna) > maxpanjang[6]): maxpanjang[6] = len(warna)
        if(len(untuk) > maxpanjang[7]): maxpanjang[7] = len(untuk)
        if(len(size) > maxpanjang[8]): maxpanjang[8] = len(size)
        if(len(merk) > maxpanjang[9]): maxpanjang[9] = len(merk)

        print("Data berhasil ditambahkan!\n")
    elif pilihan == 2:#view
        print("Tabel Data Produk:\n")

        #upper
        print("+", end="")
        print("+".join("-" * panjang for panjang in maxpanjang) + "+")

        print("|ID" + " " * (maxpanjang[0] - 2) + "|Nama Produk" + " " * (maxpanjang[1] - 11) +
        "|Harga Produk" + " " * (maxpanjang[2] - 12) + "|Stok Produk" + " " * (maxpanjang[3] - 11) +
        "|Jenis" + " " * (maxpanjang[4] - 5) + "|Bahan" + " " * (maxpanjang[5] - 5) +
        "|Warna" + " " * (maxpanjang[6] - 5) + "|Untuk" + " " * (maxpanjang[7] - 5) +
        "|Size" + " " * (maxpanjang[8] - 4) + "|Merk" + " " * (maxpanjang[9] - 4) + "|")

        print("+", end="")
        print("+".join("-" * panjang for panjang in maxpanjang) + "+")

        for baju in listBaju:#menampilkan seluruh data dalam list
            print(f"|{baju.get_id()}" + " " * (maxpanjang[0] - len(baju.get_id())) + f"|{baju.get_nama_produk()}" + " " * (maxpanjang[1] - len(baju.get_nama_produk())) +
            f"|{baju.get_harga_produk()}" + " " * (maxpanjang[2] - len(str(baju.get_harga_produk()))) + f"|{baju.get_stok_produk()}" + " " * (maxpanjang[3] - len(str(baju.get_stok_produk()))) +
            f"|{baju.get_jenis()}" + " " * (maxpanjang[4] - len(baju.get_jenis())) + f"|{baju.get_bahan()}" + " " * (maxpanjang[5] - len(baju.get_bahan())) + 
            f"|{baju.get_warna()}" + " " * (maxpanjang[6] - len(baju.get_warna())) + f"|{baju.get_untuk()}" + " " * (maxpanjang[7] - len(baju.get_untuk())) + 
            f"|{baju.get_size()}" + " " * (maxpanjang[8] - len(baju.get_size())) + f"|{baju.get_merk()}" + " " * (maxpanjang[9] - len(baju.get_merk())) + "|")

            #lower
            print("+", end="")
            print("+".join("-" * panjang for panjang in maxpanjang) + "+")