#include <iostream>
using namespace std;


	typedef struct 
	{
		string noKA;
		string namaKA;
	} kereta;
	
	typedef struct 
	{
		string nama;
		string ktp;
	} penumpang;
	
	typedef struct 
	{
		int jam;
		int menit;
		int detik;
	} jam;
	
	typedef struct 
	{
		string hari;
		string bulan;
		int tahun;
	} tanggal;
	
	typedef struct 
	{
		string kotaAsalKA;
		string kotatujuanKA;
		jam waktuBerangkat;
		jam waktuTiba;
		tanggal tanggalBerangkat;
		tanggal tanggalTiba;
		string harga;
	} jadwalKA;
	

int main (){
	penumpang syaefullah;
	kereta KA;
	jadwalKA tiket;
	
	KA.noKA = "BDO-Parahyangan-0103";
	KA.namaKA = "Parahyangan";
	
	tiket.tanggalBerangkat.hari = "Selasa, 17";
	tiket.tanggalBerangkat.bulan = " Januari ";
	tiket.tanggalBerangkat.tahun = 2007;
	
	tiket.waktuBerangkat.jam = 07 ;
	tiket.waktuBerangkat.menit = 30 ;
	tiket.waktuBerangkat.detik = 42;
	
	tiket.tanggalTiba.hari = "Rabu, 18";
	tiket.tanggalTiba.bulan = " Januari ";
	tiket.tanggalTiba.tahun = 2007;
	
	tiket.waktuTiba.jam = 22;
	tiket.waktuTiba.menit = 29;
	tiket.waktuTiba.detik = 12;
	
	cout <<endl;
	cout << "------ MASUKAN DATA DIRI -------" << endl << endl;
	cout << "Masukan Nama      : ";
	cin >> syaefullah.nama ;
	cout << "Masukan No KTP    : ";
	cin >> syaefullah.ktp;
	cout << endl;
	
	cout << "-------- DAFTAR TUJUAN ---------"<<endl;
	cout << "       Bandung - Jakarta        "<<endl;
	cout << "       Bandung - Semarang       "<<endl;
	cout << "       Bandung - Surabaya       "<<endl;
	cout << "       Bandung - Malang         "<<endl<<endl;
	
	cout << "------------ TUJUAN ------------"<<endl<<endl;
	cout << "Asal              : ";
	cin >> tiket.kotaAsalKA;
	
	cout << "Tujuan            : ";
	cin >> tiket.kotatujuanKA;
	
	if (tiket.kotatujuanKA == "Jakarta" && tiket.kotaAsalKA == "Bandung"){
		tiket.harga = "Rp. 80.000";
	}
	else if (tiket.kotatujuanKA == "Semarang" && tiket.kotaAsalKA == "Bandung"){
		tiket.harga = "Rp. 157.000";
	}
	else if (tiket.kotatujuanKA == "Surabaya" && tiket.kotaAsalKA == "Bandung"){
		tiket.harga = "Rp. 200.000";
	}
	else if (tiket.kotatujuanKA == "Malang" && tiket.kotaAsalKA == "Bandung"){
		tiket.harga = "Rp. 300.000";
	}
	else {
			tiket.harga = "Rp. 0"; 
	}
	
	
	cout << endl << endl; 
	cout << "=========== DATA PERJALANAN ===========" << endl << endl;
	
	cout << "No Kereta Api     : " << KA.noKA << endl;
	cout << "Nama Kereta Api   : " << KA.namaKA << endl << endl;
	
	cout << "Nama Penumpang    : " << syaefullah.nama << endl;
	cout << "No KTP            : " << syaefullah.ktp << endl << endl;
	
	cout << "Tujuan            : " << tiket.kotatujuanKA << endl;
	cout << "Asal              : " << tiket.kotaAsalKA << endl << endl;
	
	cout << "Biaya             : " << tiket.harga << endl << endl; 
	
	cout << "Tanggal Berangkat : " << tiket.tanggalBerangkat.hari << tiket.tanggalBerangkat.bulan << tiket.tanggalBerangkat.tahun << endl; 

	cout << "Waktu Berangkat   : " << tiket.waktuBerangkat.jam <<" : "<< tiket.waktuBerangkat.menit <<" : "<<tiket.waktuBerangkat.detik << endl << endl;

	cout << "Tanggal Tiba      : " << tiket.tanggalTiba.hari << tiket.tanggalTiba.bulan << tiket.tanggalTiba.tahun << endl; 

	cout << "Waktu Tiba        : " << tiket.waktuTiba.jam <<" : "<< tiket.waktuTiba.menit <<" : "<<tiket.waktuTiba.detik << endl; 	 	
	 return 0; 
}
