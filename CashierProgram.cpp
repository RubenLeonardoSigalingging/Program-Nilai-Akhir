#include <stdlib.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main() {
	int Jumlah_Pembelian, Bayar, Diskon, Jumlah_Barang[25], Harga_Barang[25], Total_Sementara[25];
	char Nama_Barang[25];
	float Total_Belanja;


	cout<<"------------------------------------------------\n";
	cout<<"PROGRAM KASIR MENGGUNAKAN BAHASA PEMROGRAMAN C++\n";
	cout<<"------------------------------------------------\n\n";
	cout<<"Input Jumlah Pembelian: ";
	cin>>Jumlah_Pembelian; //Pengguna memasukan jumlah beli


	for (int i = 0; i < Jumlah_Pembelian; i++)
	{
		cout<<"\n";
		cout<<"Input Data-data Barang Ke ~> "<<i+1<<"\n";
		
		cout<<"Input Nama Barang: ";
		cin>>Nama_Barang[i];
		
		cout<<"Input Jumlah Barang: ";
		cin>>Jumlah_Barang[i];
		
		cout<<"Input Harga Barang: ";
		cin>>Harga_Barang[i];

		Total_Sementara[i]=Jumlah_Barang[i]*Harga_Barang[i];
		Total_Belanja+=Total_Sementara[i];
	}


	cout<<"\n";
	cout<<"----------------------------------------------------\n";
	cout<<"STRUK PERBELANJAAN PASAR RUBEN LEONARDO SIGALINGGING\n";
	cout<<"Nomor	Nama Barang    Jumlah Barang    Harga Barang    Total Sementara\n";
	for (int i = 0; i < Jumlah_Pembelian; i++)
	{
		cout<<i+1<<setw(8)<<Nama_Barang[i]<<setw(8)<<Jumlah_Barang[i]<<setw(8)<<Harga_Barang[i]<<setw(8)<<Total_Sementara[i]<<"\n";
	}
	cout<<"----------------------------------------------------\n";


	if (Total_Belanja>=100000){
		Diskon=0.5*Total_Belanja;
	} else if (Total_Belanja>=75000){
		Diskon=0.5*Total_Belanja;
	}else if (Total_Belanja>=50000){
		Diskon=0.5*Total_Belanja;
	}else {
		Diskon=0;
	}


	cout<<"Jumlah Pembayaran\t: "<<Total_Belanja<<"\n";
	cout<<"Diskon Belanja\t: "<<Diskon<<"\n";
	cout<<"Total Pembayaran Dipotong Diskon\t: "<<Total_Belanja - Diskon<<"\n";
	cout<<"\nSilahkan Lakukan Pembayaran. Input Uang Yang Kamu Bayarkan\t: ";
	cin>>Bayar;
	cout<<"Uang Kembalian Kamu Adalah\t: "<<Bayar-(Total_Belanja - Diskon)<<"\n";
}