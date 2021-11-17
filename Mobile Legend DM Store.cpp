#include <iostream>
#include <string.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

#define spay 0.03
#define dana 0.04
#define gopay 0.05
#define unknown 0.10

const int discount1 = 10000;
const int discount2 = 20000;

//Prosedur Header
void header(){
	cout<<"*******************************************************************************\n";
	cout<<"****************************        WELCOME        ****************************\n";
	cout<<"****************************          TO           ****************************\n";
	cout<<"**************************** BEST ML DIAMOND STORE ****************************\n";
	cout<<"*******************************************************************************\n";
}

//Prosedur Footer
void footer(){
	cout << ">>>>>          Terima Kasih           <<<<<"<<endl;	
	cout << ">>>>>     Silahkan Datang Kembali     <<<<<"<<endl;
}

int program(){
	system ("color B");
	string payment;
	char name [30], nickname [20], menu [20], id [15], server [10], print, back;
	int order, orderan, pay, less, refund, bonus, pajak, total;
	int price[11]={20000, 40000, 60000, 80000, 100000, 150000,300000, 500000, 750000, 1000000, 125000}, x=0;
	bool cash;
	
	do{
		system("CLS");
		header();
		cout<<endl;
		
		cout<<" [ GUNAKAN ( _ ) UNTUK MENGGANTI SPASI ] "<<endl<<endl;
		cout<<"Nama\t\t: " ; cin>>name;
		cout<<"Nickname\t: "; cin>>nickname;
		cout<<"Payment\t\t: "; cin>>payment;
		cout<<"ID\t\t: "; cin>>id;
		cout<<"Server\t\t: "; cin>>server;
		cout<<endl<<endl;
		
		cout<<"\t >>>>>>>     MOBILE LEGENDS DIAMOND LIST     <<<<<<<"<<endl<<endl;
		
		cout<<" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
		cout<<" ----------------------------------------------------------------------------"<<endl;
		cout<<" |	[1]  86    DM                  = Rp. 20.000                         |"   <<endl;
		cout<<" |	[2]  172   DM                  = Rp. 40.000                         |"   <<endl;
		cout<<" |	[3]  257   DM                  = Rp. 60.000                         |"   <<endl;
		cout<<" |	[4]  344   DM                  = Rp. 80.000                         |"   <<endl;
		cout<<" |	[5]  429   DM                  = Rp. 100.000                        |"   <<endl;
		cout<<" |	[6]  666   DM                  = Rp. 150.000                        |"   <<endl;
		cout<<" |	[7]  1333  DM                  = Rp. 300.000                        |"   <<endl;
		cout<<" |	[8]  2500  DM                  = Rp. 500.000                        |"   <<endl;
		cout<<" |	[9]  3333  DM                  = Rp. 750.000                        |"   <<endl;
		cout<<" |	[10] 4500  DM                  = Rp. 1.000.000                      |"   <<endl;
		cout<<" |	[11] Starlight Member          = Rp. 125.000                        |"   <<endl;
		cout<<" ----------------------------------------------------------------------------"<<endl;
		cout<<" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
		
		cout<<endl;
		cout<<"Sesuai List diatas, Silahkan customer memilih pesanan --"<<endl<<endl;
		cout<<"Saya Pilih : "; cin>> order;
		
		switch(order){
			case 1:
				strcpy(menu,"86 DM");
				break;
			case 2:
				strcpy(menu,"172 DM");
				x=1;
				break;
			case 3:
				strcpy(menu,"257 DM");
				x=2;
				break;
			case 4:
				strcpy(menu,"344 DM");
				x=3;
				break;
			case 5:
				strcpy(menu,"429 DM");
				x=4;
				break;
			case 6:
				strcpy(menu,"666 DM");
				x=5;
				break;
			case 7:
				strcpy(menu,"1333 DM");
				x=6;
				break;
			case 8:
				strcpy(menu,"2500 DM");
				x=7;
				break;
			case 9:
				strcpy(menu,"3333 DM");
				x=8;
				break;
			case 10:
				strcpy(menu,"4500 DM");
				x=9;
				break;
			case 11:
				strcpy(menu,"Starlight Member");
				x=10;
				break;
			default:
				cout << "Mohon maaf menu yang anda pilih tidak tersedia ^_^ " << endl;
				goto ulang;
		}
		//menggunakan void footer
		cout<<endl;
		cout<<"Wah rupanya anda memilih pesanan yaitu "<<menu<<endl<<endl;
		cout<<"Ketik > P > untuk mencetak kartu tagihan anda"<<endl;
		cout<<"Input : ";cin>>print;
		cout<<endl;
		
		orderan = price[x];
		if (payment == "shopeepay"){
			pajak = orderan * spay;
		}else if (payment == "dana"){
			pajak = orderan * dana;
		}else if (payment == "gopay"){
			pajak = orderan * gopay;
		}else {
			pajak = orderan * unknown;
		}
		
		total = pajak + orderan;
		
		cout << " -------------------------------------------------------" << endl;
		cout << "|  	           BEST ML DIAMOND STORE                |" << endl;
		cout << " -------------------------------------------------------" << endl;
		cout << "\t Nama Pelanggan      : "	<< name <<endl;
		cout << "\t Nickname            : "	<< nickname <<endl;
		cout << "\t ID                  : "	<< id << " ("<< server <<")"<<endl;
		cout << "\t Order               : " << menu <<endl;
		cout << "\t Payment             : " << payment <<endl<<endl;
		cout << "\t Price               : Rp. " << price[x] <<endl;
		cout << "\t Pajak               : Rp. " << pajak <<endl<<endl;
		cout << "\t Total               : Rp. " << total <<endl;
		
		if(total>=100000 && total<500000){
			bonus = total - discount1;
			total = bonus;
			cout << endl;
			cout << "---> Selamat anda mendapatkan diskon sebesar Rp. " << discount1 << endl;
			cout << "---> Total Pembayaran  : Rp. "<< total << endl;
		}else if(total>=500000){
			bonus = total - discount2;
			total = bonus;
			cout << endl;
			cout << "---> Selamat anda mendapatkan diskon sebesar Rp. " << discount2 << endl;
			cout << "---> Total Pembayaran  : Rp. "<< total << endl;
		}
		
		cout << "_______________________________________________" << endl;
		cout << ">>>>>    Silahkan bayar pesanan disini    <<<<<"<<endl;
		cout << "Masukkan\t: Rp. ";cin>>pay;
		cout << endl;
		
		while (cash = pay < total){
			cout << "Uang anda kurang, silahkan bayar kembali : Rp. "; cin>>less;
			pay= pay +less;
		};
		
		refund = pay - total;
		cout << "Anda membayar \t\t\t\t Rp. " << pay <<endl;
		cout << "Uang kembalian anda \t\t\t Rp. " << refund <<endl;
		cout << "___________________________________________________"<<endl<<endl;
		
		ulang:
			cout << "	[G = gas / K = kagak]"<<endl<<endl;
			cout << "	Apakah anda ingin order lagi ? [G/K]  =  "; cin>>back;
			
		}while (back=='G'||back=='g');
		
		cout << endl;
		
		footer();
		
	}
	
	
	int main(){
		
		program();
	
		getch();	
		return 0;
	}
	
	

