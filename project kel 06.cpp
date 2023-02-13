#include <iostream>
using namespace std;
int main() {
	// #1 Persiapan Petugas 
	string kursi[4][2][3][3][50];
	string Film [4];
	string Hari [2]={"Sabtu ","Minggu "};
	string Jam  [3]={"15.30","18.00","20.30"};
	string Room [3]={"ROOM 1","ROOM 2","ROOM 3"};
	string Kursi[50] = {"[01]","[02]","    ","    ","    ","    ","    ","    ","[09]","[10]","[11]","[12]","[13]","[14]","[15]","[16]","[17]","[18]","[19]","[20]","[21]","[22]","[23]","[24]","[25]"
						,"[26]","[27]","[28]","[29]","[30]","[31]","[32]","[33]","[34]","[35]","[36]","[37]","[38]","[39]","[40]","[41]","[42]","[43]","[44]","[45]","[46]","[47]","[48]","[49]","[50]"};
	string Produk[3][9]={{" Regular Popcorn + 1 Drink                               "," Large Popcorn + 1 Drink                                 "," Jumbo Popcorn + 1 Drink                                 ",
						  " Salt Popcorn Large + 2 Jasmine Tea                      "," Sweet Popcorn Jumbo + 2 Soft Drink                      "," Cinepolis French Fries + Nachos + 2 Soft Drink          ",
						  " Regular Popcorn Banana Milk + 2 Drink + Small Snack     "," Large Popcorn Banana Milk + 2 Drink + Medium snack      "," Jumbo Popcorn Banana Milk + 3 Drink + BIG snack         "},
						 {" Regular Sweet Popcorn                                   "," Large Sweet Popcorn                                     "," Jumbo Sweet Popcorn                                     ",
						  " Regular Salt Popcorn                                    "," Large Salt Popcorn                                      "," Jumbo Salt Popcorn                                      ",
						  " Regular Popcorn Banana Milk                             "," Large Popcorn Banana Milk                               "," Jumbo Popcorn Banana Milk                               "},
						 {" Coklat.                                                 "," Vanila Original                                         "," Green Tea                                               ",
						  " Coca-cola                                               "," Fanta                                                   "," Sprite                                                  ",
						  " Tiraamisu Latte.                                        "," Vanilla Latte                                           "," Black Coffe                                             "}};
	int Harga [3][9]={{50000,55000,65000,100000,115000,120000,110000,120000,125000},
						{20000,25000,30000,25000,30000,35000,30000,35000,40000},
						{20000,15000,25000,10000,10000,10000,25000,20000,20000}};
	
	int totalMakanan;
	int PilihTiket;
	int PilihMakanan;
	int PilihDenah;
	string pesanan [27];
	int JHarga  [27];
	int Banyak[27];
	int P,M,B;
	int film,jam,tiket,harga,Ticket;
	int F,H,J,R
	    ,Sold,K;
	int JM=0,Pilih=0;
	long pemasukan1=0;
	long pemasukan2=0;
	string SELESAI;
	
	for (int a=0; a<4; a++){
		for (int b=0; b<2; b++){
			for (int c=0; c<3; c++){
				for (int d=0; d<3; d++){
					for (int e=0; e<50; e++){
						kursi[a][b][c][d][e] = Kursi[e];
					}
				}
			}
		}
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"+===========================================================+"<<endl;
	cout<<"|    DI ISI DALAM SUDUT PANDANG SEBEAGAI PETUGAS BIOSKOP    |"<<endl;
	cout<<"| DIMANA PENGISIAN DATA DILAKUKAN SEBELUM PENJUALAN DIMULAI |"<<endl;
	cout<<"+===========================================================+"<<endl;
	cout<<endl;
	cout<<"  Masukan 4 judul film yang akan tayang weekend ini : "<<endl;
	
	for (int i=0; i<4; i++){
		cout<<"Masukan judul film "<<i+1<<" : ";
		getline(cin ,Film[i]);
	}
	cout<<endl;
	cout<<"harga 1 tiket : Rp ";cin >>harga;
	
	
	// #2 Beranda pembelian
	

	Beranda:
	JM=0; Pilih=0;
	F=0;H=0;J=0;R=0;Sold=0;K=0;
	film=0;jam=0;tiket=0;Ticket=0;
	P=0;M=0;B=0;
	totalMakanan=0;
	PilihTiket=0;
	PilihMakanan=0;
	cout << endl;
    cout << "+=======================================================+" << endl;
    cout << "|\t\t\t\t\t\t\t|" << endl;
    cout << "|          ======BIOSKOP WEEKEND ASIX======             |" << endl;
    cout << "|\t\t\t\t\t\t\t|" << endl;
    cout << "+=======================================================+" << endl;
    cout << "|               Jalan  Aspal Biru No 06                 |" << endl;
    cout << "|       Kecamatan Terang,Kabupaten Terus Terang         |" << endl;
	cout << "|              Daerah Istimewa Yogyakarta               |" << endl;
    cout << "+=======================================================|" << endl;
    cout << "|\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t1. Pembelian tiket\t\t\t|" << endl;
    cout << "|\t\t2. Pembelian Makanan                    |" << endl;
    cout << "|\t\t3. Denah Bioskop\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t|" << endl;
    cout << "+=======================================================+" << endl;
    cout << "|\t\t\t~21 IF 08~\t\t\t|" << endl;
    cout << "|                   ~KELOMPOK 6 ASIX~                   |" << endl;
    cout << "+=======================================================+" << endl;
	cout << " \t\t   Nomor pilihan anda : ";
	cin  >> Pilih;
	if      (Pilih==1){ goto Tickett;
	}else if(Pilih==2){ goto Makanan;
	}else if(Pilih==3){ goto Denah;
	}else if (Pilih==99){goto selesai;
	}else {
		cout<<"            INPUT YANG ANDA LAKUKAN SALAH!!"<<endl;
		cout<<"            INPUT YANG ANDA LAKUKAN SALAH!!"<<endl;
		cout<<"            INPUT YANG ANDA LAKUKAN SALAH!!"<<endl;
		goto Beranda;
	}
	
	// #3 Pemesanan tiket
	Tickett:
	
	cout<<"======================================================"<<endl;
	cout<<"      =============PEMBELIAN TIKET=============       "<<endl;
	cout<<"            =====BIOSKOP WEEKEND ASIX=====            "<<endl;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"\t KATEGORI FILM "<<endl;
	for (int i=0; i<4; i++){
		cout<<"\t "<<i+1<<". "<<Film[i];
		cout<<endl;
	}
	cout<<"                                   1 ticket : "<<harga<<endl;
	cout<<endl;
	cout<<"\t Piih Film : ";cin>>F;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"\t HARI PENAYANGAN "<<endl;
	for (int i=0; i<2; i++){
		cout<<"\t "<<i+1<<". "<<Hari[i]<<endl;
	}
	cout<<endl;
	cout<<"\t Pilih Hari : ";cin>>H;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"\t JAM PENAYANGAN "<<endl;
	for (int i=0; i<3; i++){
		cout<<"\t "<<i+1<<". "<<Jam[i]<<endl;
	}
	cout<<endl;
	cout<<"\t Piih Jam : ";cin>>J;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"\t ROOM BIOSKOP "<<endl;
	for (int i=0; i<3; i++){
		cout<<"\t "<<i+1<<". "<<Room[i]<<endl;
	}
	cout<<endl;
	cout<<"\t Piih Room : ";cin>>R;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"JUMLAH TIKET YANG INGIN ANDA BELI"<<endl;
	cout<<endl;
	cout<<"\t Jumlah Tiket : ";cin>>tiket;
	cout<<endl;
	cout<<endl;
	cout<<" -----------------------------------------------------"<<endl;
	for (int i=0;i<5;i++){
		cout<<"| ";
		for (int x=0;x<10;x++){
			cout<<" ";
			cout<<kursi[F-1][H-1][J-1][R-1][i*10+x];
		}
		cout<<"  |"<<endl;
		cout<<"|                                                     |"<<endl;
	}
	cout<<" -----------------------------------------------------"<<endl;
	cout<<endl;
	int T[tiket];
	for (int i=0; i<tiket; i++){
		kursi:
		cout<<"    Pilih nomor kursi tiket "<<i+1<<" : ";
		cin >>Ticket;
		T[i]=Ticket;
		if (kursi[F-1][H-1][J-1][R-1][Ticket-1] == "SOLD"){
			cout<<endl;
			cout<<"        maaf kursi nomor "<<Ticket<<" telah terisi"<<endl;
			cout<<"        silahkan pilih yang lain."<<endl;
			cout<<endl;
			goto kursi;
		}else{
		kursi[F-1][H-1][J-1][R-1][Ticket-1] = "SOLD";
		}
	}
	cout<<"------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"\t1. Memesan makanan?"<<endl;
	cout<<"\t2. Melihat Denah?"<<endl;
	cout<<"\t3. Akhiri dan bayar."<<endl;
	cout<<endl;
	cout<<"\t==>> ";
	cin>>PilihTiket;
	
	if       (PilihTiket==1){goto Makanan;
	}else if (PilihTiket==2){goto Denah;
	}else if (PilihTiket==3){goto Output;
	}else                   {goto Makanan;
	}
	
	// #4 pemesanan makanan
	Makanan:
	
	cout<<""<<endl<<endl;
	cout << "===============SELAMAT DATANG=============="<<endl;
	cout << "     SILAHKAN MEMILIH MENU DIBAWAH INI "<<endl;
	cout << "==========================================="<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"\t\tPILIHAN MENU"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"1. PAKET HEMAT "<<endl;
	cout<<"2. MENU MAKANAN "<<endl;
	cout<<"3. MENU MINUMAN "<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Input Nomer Pilihan Anda [1-3] :";
	cin >>P;
	cout<<"---------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	if (P==1){
		cout << "======================================================================="<<endl;
		cout<<" PAKET HEMAT"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"     1. Regular Popcorn + 1 Drink                              :Rp 50000"<<endl;
		cout<<"     2. Large Popcorn + 1 Drink                                :Rp 55000"<<endl;
		cout<<"     3. Jumbo Popcorn + 1 Drink                                :Rp 65000"<<endl;
		cout<<""<<endl;
		cout<<" PAKET COUPLE"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"     4. Salt Popcorn Large + 2 Jasmine Tea                     :Rp 100000"<<endl;
		cout<<"     5. Sweet Popcorn Jumbo + 2 Soft Drink                     :Rp 115000"<<endl;
		cout<<"     6. Cinepolis French Fries + Nachos + 2 Soft Drink         :Rp 120000"<<endl;
		cout<<""<<endl;
		cout<<" PAKET TRIPLE"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"    7. Regular Popcorn Banana Milk + 2 Drink + Small Snack     :Rp 110000"<<endl;
		cout<<"    8. Large Popcorn Banana Milk + 2 Drink + Medium snack      :Rp 120000"<<endl;
		cout<<"    9. Jumbo Popcorn Banana Milk + 3 Drink + BIG snack         :Rp 125000"<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}else if (P==2){
		cout << "========================================================================="<<endl;
		cout<<" SWEET POPCORN "<< endl;
		cout<<"-----------------------"<<endl;
		cout<<"     1. Regular Sweet Popcorn                                  :Rp 20000"<<endl;
		cout<<"     2. Large Sweet Popcorn                                    :Rp 25000"<<endl;
		cout<<"     3. Jumbo Sweet Popcorn                                    :Rp 30000"<<endl;
		cout<<""<<endl;
		cout<<" SALT POPCORN "<< endl;
		cout<<"-----------------------"<<endl;
		cout<<"     4. Regular Salt Popcorn                                   :Rp 25000"<<endl;
		cout<<"     5. Large Salt Popcorn                                     :Rp 30000"<<endl;
		cout<<"     6. Jumbo Salt Popcorn                                     :Rp 35000"<<endl;
		cout<<""<<endl;
		cout<<" POPCORN BABANA MILK "<< endl;
		cout<<"-----------------------"<<endl;
		cout<<"     7. Regular Popcorn Banana Milk                            :Rp 30000"<<endl;
		cout<<"     8. Large Popcorn Banana Milk                              :Rp 35000"<<endl;
		cout<<"     9. Jumbo Popcorn Banana Milk                              :Rp 40000"<<endl;
		cout<<""<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}else if (P==3){
		cout << "========================================================================="<<endl;
		cout<<" MILK SHAKE"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"     1. Coklat.                                                :Rp 20000"<<endl;
		cout<<"     2. Vanila Original                                        :Rp 15000"<<endl;
		cout<<"     3. Green Tea                                              :Rp 25000"<<endl;
		cout<<""<<endl;
		cout<<" ANEKA SODA"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"     4. Coca-cola                                              :Rp 10000"<<endl;
		cout<<"     5. Fanta                                                  :Rp 10000"<<endl;
		cout<<"     6. Sprite                                                 :Rp 10000"<<endl;
		cout<<""<<endl;
		cout<<" ANEKA COFFE"<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"     7. Tiraamisu Latte.                                       :Rp 25000"<<endl;
		cout<<"     8. Vanilla Latte                                          :Rp 20000"<<endl;
		cout<<"     9. Black Coffe                                            :Rp 20000"<<endl;
		cout<<""<<endl;
		cout<<"---------------------------------------------------------------------------"<<endl;
	}else {
		cout<<"                      INPUT YANG ANDA LAKUKAN SALAH                         "<<endl;
		cout<<"                      INPUT YANG ANDA LAKUKAN SALAH                         "<<endl;
		cout<<"                      INPUT YANG ANDA LAKUKAN SALAH                         "<<endl;
		goto Makanan;
	}
	
	cout<<"   Pilih nomor makanan [angka] : ";
	cin >>M;
	cout<<"   Jumlah makanan : ";
	cin >>B;
	pesanan[JM]=Produk[P-1][M-1];
	JHarga [JM]= B*Harga[P-1][M-1];
	Banyak [JM]= B;
	totalMakanan+=JHarga[JM];
	JM++;
	
	
	cout<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<endl;
			 cout<<"     1. Memesan Makanan Lagi?"<<endl;
			 cout<<"     2. Melihat Denah?"<<endl;
			 cout<<"     3. Akhiri dan Bayar"<<endl;
	if (F==0){cout<<"     4. Ingin Memesan Ticket?"<<endl;
	}cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"   ==>> ";cin>>PilihMakanan;
	if       (PilihMakanan==1){goto Makanan;
	}else if (PilihMakanan==2){goto Denah;
	}else if (PilihMakanan==3){goto Output;
	}else if (PilihMakanan==4){goto Tickett;
	}else                     {goto Output;
	}
	// #5 Denah Bioskop
	Denah:
	cout<<endl;
	cout << "__________________________________________________________________________________"<<endl;
    cout << "                                                         \t\t\t  |"<<endl;
    cout << "\t\t\t             <============== Keluar        \t\t  |"<<endl;
    cout << "\t\t _____________________________________________________ \t\t  |"<<endl;
    cout << "|\t\t|        |        |        |        |        |        |\t\t  |"<<endl;
    cout << "|\t\t| Room 1 | Room 2 | Room 3 | Room 1 | Room 2 | Room 3 |\t\t  |"<<endl;
    cout << "|\t\t|______  |______  |______  |______  |______  |______  |\t\t  |"<<endl;
    cout << "|                                          |                      \t\t  |"<<endl;
    cout << "|__________________________________    ____|____    ______________________________|"<<endl;
	cout << "|                     | FILM 1 |                       | FILM 2 |  \t\t  |"<<endl;
	cout << "|                     |________|                       |________|      \t\t  |"<<endl;
	cout << "|                                                                    \t\t  |"<<endl;
	cout << "|\t\t                                             _________       _____|"<<endl;
	cout << "|\t\t                                            |         |     |     |"<<endl;
	cout << "\t\t                                            |    T    |     |  Wc |"<<endl;
	cout << "\t\t                                            |    I    |     |     |"<<endl;
	cout << "\t\t                                            |    K    |     |-----|"<<endl;
	cout << "\t\t                                            |    E    |     |     |"<<endl;
	cout << "\t\t                                            |    T    |     |  Wc |"<<endl;
	cout << "|\t\t                                            |_________|     |_____|"<<endl;
	cout << "|                                                            \t\t\t  |"<<endl;
	cout << "|                       ________                         _______      \t\t  |"<<endl;
	cout << "|                      | FILM 3 |                       | FILM 4 |  \t\t  |"<<endl;
	cout << "|______________________|________|____    _________    __|________|________________|"<<endl;
	cout << "|                                           |                      \t\t  |"<<endl;
	cout << "|\t\t   _______  _______  _______|  ______  _______  _______\t\t  |"<<endl;
	cout << "|\t\t|        |        |         |        |        |        |\t  |"<<endl;
	cout << "|\t\t| Room 1 | Room 2 | Room 3  | Room 1 | Room 2 | Room 3 |\t  |"<<endl;
	cout << "|\t\t|________|________|_________|________|________|________|\t  |"<<endl;
	cout << "                                                         \t\t\t  |"<<endl;
	cout << "\t\t\t             <============== Keluar        \t\t  |"<<endl;
	cout << "__________________________________________________________________________________|"<<endl;
	cout<<endl;
	cout<<"\t1. Akhiri dan bayar."<<endl;
	if (P==0){
	cout<<"\t2. Memesan makanan?"<<endl;
	}else if (F==0){
	cout<<"\t3. Memesan Tiket?"<<endl;
	}cout<<endl;
	cout<<endl;
	cout<<"      ==>>";cin>>PilihDenah;
	if       (PilihDenah==1){goto Output;
	}else if (PilihDenah==2){goto Makanan;
	}else if (PilihDenah==3){goto Tickett;
	}
	

	
	
	
	cout<<endl;
	// #6 output pemesanan
	Output:
	cout << endl;
	cout << endl;
	cout << endl;
	if ((F>=1)&&(P>=1)){
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "||========================================================================\n";	
		cout << "||                          BIOSKOP WEEKEND ASIX                          \n";
		cout << "||========================================================================\n";
		cout << "|| Judul Film   : "<<Film[F-1]<<endl;
		cout << "|| Hari&jamn    : "<<Hari[H-1]<<" "<<Jam[J-1]<<" WIB "<<endl;
		cout << "|| Jumlah Tiket : "<<tiket<<" Tiket : ";
		for (int i=0; i<tiket; i++){cout<<"["<<T[i];cout<<"] ";
		}cout<<endl;
		cout << "|| Room         : "<<Room[R-1]<<endl;
		cout << "||              => Rp. "<<tiket*harga<<endl;
		cout << "||------------------------------------------------------------------------\n";
		cout << "|| Makanan/Minuman                                      \n";
		cout << "||                                                      \n";
		cout << "|| Menu                                                  jumlah     Harga"<<endl;
		for (int i=0;i<JM;i++){
			cout<<"||"<<pesanan[i]<<Banyak[i]<<"        :Rp. "<<JHarga[i]<<endl;
		}
		cout << "||              => Rp. "<<totalMakanan<<endl;
		cout << "||------------------------------------------------------------------------\n";
		cout << "||                                    Total => Rp. "<<totalMakanan+tiket*harga<<endl;
		cout << "||------------------------------------------------------------------------\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	}else if ((F>=1)&&(P==0)){
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "||========================================================================\n";
		cout << "||                          BIOSKOP WEEKEND ASIX                          \n";
		cout << "||========================================================================\n";
		cout << "|| Judul Film   :     "<<Film[F-1]<<endl;
		cout << "|| Hari&jamn    :     "<<Hari[H-1]<<" "<<Jam[J-1]<<" WIB "<<endl;
		cout << "|| Jumlah Tiket :     "<<tiket<<" Tiket : ";
		for (int i=0; i<tiket; i++){cout<<"["<<T[i];cout<<"] ";
		}cout<<endl;
		cout << "|| Room         :     "<<Room[R-1]<<endl;
		cout << "||              => Rp. "<<tiket*harga<<endl;
		cout << "||------------------------------------------------------------------------\n";
		cout << "||                                    Total => Rp. "<<totalMakanan+tiket*harga<<endl;
		cout << "||------------------------------------------------------------------------\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	}else if ((F==0)&&(P>=1)){
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout << "||========================================================================\n";
		cout << "||                          BIOSKOP WEEKEND ASIX                          \n";
		cout << "||========================================================================\n";
		cout << "|| Makanan/Minuman                                      \n";
		cout << "||                                                      \n";
		cout << "|| Menu                                                  jumlah     Harga"<<endl;
		for (int i=0;i<JM;i++){
			cout<<"||"<<pesanan[i]<<Banyak[i]<<"        :Rp. "<<JHarga[i]<<endl;
		}
		cout << "||              => Rp. "<<totalMakanan<<endl;
		cout << "||------------------------------------------------------------------------\n";
		cout << "||                                    Total => Rp. "<<totalMakanan+tiket*harga<<endl;
		cout << "||------------------------------------------------------------------------\n";
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";	
	}else {
		cout<<"Kesalahan, coba lagi "<<endl;
		goto Beranda;
	}
	
	pemasukan1 += tiket; 
	pemasukan2 += totalMakanan;
	tes:
	cout<<"                       TEKAN SATU LALU ENTER UNTUK SELESAI"<<endl;
	cout<<"                       TEKAN SATU LALU ENTER UNTUK SELESAI"<<endl;
	cout<<"                       TEKAN SATU LALU ENTER UNTUK SELESAI"<<endl;
	cin>>SELESAI;
	if (SELESAI=="end"){
		cout<<"\t\t PEMASUKAN PENJUALAN"<<endl;
		cout<<"penjualan makanan           :    Rp "<<pemasukan2<<endl;
		cout<<"penjualan tiket    "<<pemasukan1<<" ticket :    Rp "<<pemasukan1*harga<<endl;
		cout<<"Total                       :    Rp "<<pemasukan2+pemasukan1*harga;
	}else if (SELESAI=="cek"){
		cout<<"\t\t PEMASUKAN PENJUALAN"<<endl;
		cout<<"penjualan makanan           :    Rp "<<pemasukan2<<endl;
		cout<<"penjualan tiket    "<<pemasukan1<<" ticket :    Rp "<<pemasukan1*harga<<endl;
		cout<<"Total                       :    Rp "<<pemasukan2+pemasukan1*harga;
		cout<<endl;
		cout<<endl;
		cout<<"tekan 1 untuk kembali";
		cin>>K;
		goto tes;
		
		
	}else{
		selesai:
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
		goto Beranda;
	}
	
}