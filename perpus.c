#include <stdio.h>

// Deklarasi variabel global 
char kodeBuku[50][10];
char judulBuku[50][50];
char penulisBuku[50][20];
int stokBuku[50][3];
int jumlahBuku = 0;

// Fungsi tambah data perpustakaan
void tambahData() {

  printf("Kode buku: ");
  scanf("%s", kodeBuku[jumlahBuku]);

  printf("Judul buku: ");
  scanf("%s", judulBuku[jumlahBuku]);

  printf("Penulis: ");
  scanf("%s", penulisBuku[jumlahBuku]);

  printf("Stok buku: ");
  scanf("%s", &stokBuku[jumlahBuku]);
  
  jumlahBuku++;
}

// Fungsi tampilkan data perpustakaan 
void tampilData() {

  int i;

  printf("\nData Perpustakaan\n");

  for(i=0; i<jumlahBuku; i++) {
    printf("Kode: %s \n", kodeBuku[i]);
    printf("Judul: %s \n", judulBuku[i]);
    printf("Penulis: %s \n", penulisBuku[i]); 
    printf("Stok: %s \n\n", stokBuku[i]);
  }
}

int main() {

  int menu;

  do {
    printf("MENU\n");
    printf("1. Tambah Data Perpustakaan\n");
    printf("2. Tampilkan Data Perpustakaan\n"); 
    printf("0. Keluar\n\n");
    printf("Pilih menu: ");
    scanf("%d", &menu);

    if(menu == 1) {
      tambahData();
    } else if(menu == 2) {
      tampilData();
    }

  } while(menu != 0);

  return 0; 
}