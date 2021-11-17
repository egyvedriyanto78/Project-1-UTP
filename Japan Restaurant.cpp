#include <iostream> 
#include <string.h> 
#include <conio.h> 
#include <stdlib.h> 
using namespace std; 

const int discount = 10000;

//Prosedur Header
void header(){
	cout<<"*******************************************************************************\n";
	cout<<"****************************        WELCOME        ****************************\n";
	cout<<"****************************          TO           ****************************\n";
	cout<<"**************************** JAPAN FOOD RESTAURANT ****************************\n";
	cout<<"*******************************************************************************\n";
}

//Prosedur Footer
void footer(){
	cout << ">>>>>       Terima Kasih        <<<<<"<<endl;	
	cout << ">>>>>     Selamat Menikmati     <<<<<"<<endl;
}

//Fungsi untuk program
int program(){
	//Variable 
	string name;
	char menu[15], back;
	int food, sum, total, bonus, pay, less, refund, x=0;
	int price [10]={5000, 6500, 7500, 9000, 10000 , 15000, 20000, 25000, 27500, 35000};
	//Boolean
	bool money;
	
	//Looping
	do{
		system("CLS");
		header();
		cout<<endl;
		cout<<"Masukkan Nama Anda : " ; cin>>name; 
		cout<<"Pilihan menu yang tersedia :"<<endl<<endl;
		cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<"|	[1]  Onigiri           = Rp. 5.000                                |"   <<endl;
		cout<<"|	[2]  Dorayaki          = Rp. 6.500                                |"   <<endl;
		cout<<"|	[3]  Ramen             = Rp. 7.500                                |"   <<endl;
		cout<<"|	[4]  Udon              = Rp. 9.000                                |"   <<endl;
		cout<<"|	[5]  Takoyaki          = Rp. 10.000                               |"   <<endl;
		cout<<"|	[6]  Yakitori          = Rp. 15.000                               |"   <<endl;
		cout<<"|	[7]  Natto             = Rp. 20.000                               |"   <<endl;
		cout<<"|	[8]  Tempura           = Rp. 25.000                               |"   <<endl;
		cout<<"|	[9]  Sashimi           = Rp. 27.500                               |"   <<endl;
		cout<<"|	[10] Sushi             = Rp. 35.000                               |"   <<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
		
		cout<<"Note : MASUKKAN NOMOR MENU MAKANAN UNTUK MEMESAN !"<<endl<<endl;
		cout<<"Silahkan Pilih Menu : "; cin >> food;
		
		//Conditional Statements
		switch(food){
			case 1:
				strcpy(menu,"Onigiri");
				break;
			case 2:
				strcpy(menu,"Dorayaki");
				x=1;
				break;
			case 3:
				strcpy(menu,"Ramen");
				x=2;
				break;
			case 4:
				strcpy(menu,"Udon");
				x=3;
				break;
			case 5:
				strcpy(menu,"Takoyaki");
				x=4;
				break;
			case 6:
				strcpy(menu,"Yakitori");
				x=5;
				break;
			case 7:
				strcpy(menu,"Natto");
				x=6;
				break;
			case 8:
				strcpy(menu,"Tempura");
				x=7;
				break;
			case 9:
				strcpy(menu,"Sashimi");
				x=8;
				break;
			case 10:
				strcpy(menu,"Sushi");
				x=9;
				break;
			default:
				cout << "Mohon maaf menu yang anda pilih tidak tersedia ^_^ " << endl;
				goto ulang;
		}

    
		cout<<"Makanan yang di pesan\t: "<<menu<<endl<<endl;
		cout<<"Jumlah makanan yang dibeli\t: ";cin>> sum;
		
		total = sum * price[x];
		
		cout<<endl;
		
		cout << "-------------------------------------------------------" << endl;
		cout << "|  	          Japan Food Restaurant                |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "\tNama Pelanggan        : "	<< name     <<endl;
		cout << "\tMenu Makanan          : "	<< menu     <<endl;
		cout << "\tJumlah                : "	<< sum   <<" porsi" <<endl;
		cout << "\tHarga                 : "	<< price[x] << " * "   << sum << endl;
		cout << "\tTotal Pembayaran      : Rp. " << total    <<endl;
		
		//conditional statements
		if(sum>3){
			bonus = total - discount;
			total = bonus;
			cout << endl;
			cout << "---> Selamat anda mendapatkan diskon sebesar Rp. " << discount << endl;
			cout << "---> Total Pembayaran  : Rp. "<< total << endl;
		}
		
		cout << "_______________________________________________" << endl;
		cout << ">>>>>    Silahkan bayar pesanan disini    <<<<<"<<endl;
		cout << "Masukkan\t: Rp. ";cin>>pay;
		cout << endl;
		
		//While Looping 
		while (money = pay < total){
			cout << "Uang anda kurang, silahkan bayar kembali : Rp. "; cin>>less;
			pay= pay +less;
		};
		
		refund = pay - total;
		cout << "Anda membayar \t\t\t\t Rp. " << pay <<endl;
		cout << "Uang kembalian anda \t\t\t Rp. "     << refund <<endl;
		cout << "___________________________________________________"<<endl<<endl;
		
		ulang:
			cout << "	[G = gas / K = kenyang]"<<endl<<endl;
			cout << "	Apakah anda ingin nambah ? [G/K]  =  "; cin>>back;
			
		//Do While Looping	
		}while (back=='G'||back=='g');
		cout << endl;
		
		footer();
			
}

//Fungsi Utama atau Main Function
int main(){
	system("color D");
	program();
	
	getch();
	return 0;
}


	
	
