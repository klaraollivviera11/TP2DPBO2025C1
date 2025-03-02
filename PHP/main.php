<!-- Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 
mengerjakan soal Tugas Praktikum 1 dalam mata kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin -->
<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daftar Produk Petshop</title>
    <style>
        table {
            width: 70%;
            border-collapse: collapse;
            margin: 20px auto;
        }
        th, td {
            border: 1px solid black;
            padding: 10px;
            text-align: center;
        }
        th {
            background-color: #f4f4f4;
        }
        img {
            width: 80px;
            height: auto;
        }
    </style>
</head>
<body>
    <?php
    require ('Baju.php');

    $listBaju = [];//array untuk menyimpan list data

    //5 objek pertama
    $listBaju[] = new Baju('01', 'WinterCloth', 100000, 10, 'foto/RoyalCanin.jpg', 'Baju', 'Wol', 'Pink', 'Kucing', 'M', 'RoyalCanin');
    $listBaju[] = new Baju('02', 'SummerCloth', 200000, 2, 'foto/CatChoize.jpg', 'Celana', 'Scuba', 'Biru', 'Anjing', 'S', 'Cihuahuax');
    $listBaju[] = new Baju('03', 'SpringShoes', 350000, 3, 'foto/MeO.jpg', 'Sepatu', 'Kulit', 'Coklat', 'Anjing', 'M', 'MeO');
    $listBaju[] = new Baju('04', 'FallScarf', 50000, 5, 'foto/MeO.jpg', 'Sepatu', 'Wol', 'Merah', 'Anjing', 'M', 'MeO');
    $listBaju[] = new Baju('05', 'Glazses', 300000, 2, 'foto/RoyalCanin.jpg', 'Kacamata', 'Silicon', 'Kuning', 'Kucing', 'S', 'RoyalCanin');

    ?>

    <!-- menampilkan data -->
    <h2 style="text-align: center;">View Data</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga Produk (Rp)</th>
            <th>Stok Produk</th>
            <th>Foto Produk</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>

        <?php foreach ($listBaju as $baju) { ?>
        <tr>
            <td><?php echo $baju->get_id(); ?></td>
            <td><?php echo $baju->get_nama_produk(); ?></td>
            <td><?php echo number_format($baju->get_harga_produk(), 0, ',', '.'); ?></td>
            <td><?php echo number_format($baju->get_stok_produk(), 0, ',', '.'); ?></td>
            <td>
                <img src="<?php echo $baju->get_foto_produk(); ?>" alt="<?php echo $baju->get_nama_produk(); ?>">
            </td>
            <td><?php echo $baju->get_jenis(); ?></td>
            <td><?php echo $baju->get_bahan(); ?></td>
            <td><?php echo $baju->get_warna(); ?></td>
            <td><?php echo $baju->get_untuk(); ?></td>
            <td><?php echo $baju->get_size(); ?></td>
            <td><?php echo $baju->get_merk(); ?></td>
        </tr>
        <?php } ?>
    </table>

    <!-- menambah data -->
    <?php
        // add data
        $listBaju[] = new Baju('06', 'Nyangkul', 50000, 13, 'foto/CatChoize.jpg', 'Cangkul', 'Besi', 'Silver', 'Kucing', 'L', 'Cihuahuax');
    ?>
    
    <h2 style="text-align: center;">Add Data</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga Produk (Rp)</th>
            <th>Stok Produk</th>
            <th>Foto Produk</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
        </tr>

        <?php foreach ($listBaju as $baju) { ?>
        <tr>
            <td><?php echo $baju->get_id(); ?></td>
            <td><?php echo $baju->get_nama_produk(); ?></td>
            <td><?php echo number_format($baju->get_harga_produk(), 0, ',', '.'); ?></td>
            <td><?php echo number_format($baju->get_stok_produk(), 0, ',', '.'); ?></td>
            <td>
                <img src="<?php echo $baju->get_foto_produk(); ?>" alt="<?php echo $baju->get_nama_produk(); ?>">
            </td>
            <td><?php echo $baju->get_jenis(); ?></td>
            <td><?php echo $baju->get_bahan(); ?></td>
            <td><?php echo $baju->get_warna(); ?></td>
            <td><?php echo $baju->get_untuk(); ?></td>
            <td><?php echo $baju->get_size(); ?></td>
            <td><?php echo $baju->get_merk(); ?></td>
        </tr>
        <?php } ?>
    </table>
</body>
</html>