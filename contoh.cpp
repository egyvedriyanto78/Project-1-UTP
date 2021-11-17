#include <iostream>
#include <conio.h>
#include<math.h>
int main()
{
    int oprtor,nominal;
    float bayar,harga;
    long uang,sisa;
    char lagi,psnLG, nomor[12];
 do
 {
        cout<<"===================================================="<<endl;  
		cout<<"\tProgram Penjualan Pulsa Elektrik"<<endl;  
		cout<<"===================================================="<<endl;  

  do
    {
		cout<<endl;
		cout<<"Menu Pilihan Operator Pulsa Elektrik"<<endl;
		cout<<"----------------------------------------------------"<<endl;  
		cout<<"\t1. Telkomsel"<<endl; 
		cout<<"\t2. Indosat"<<endl; 
		cout<<"\t3. Xl"<<endl; 
		cout<<"\t4. Axis"<<endl; 
		cout<<"\t5. Esia"<<endl; 
		cout<<"\t6. Flexi"<<endl; 
		cout<<"----------------------------------------------------"<<endl;
    do
    {
	    cout<<"Input Operator [1-6]		: ";cin>>oprtor;
	    if(oprtor>6)
	    cout<<"Maaf Operator Tidak Tersedia"<<endl;
	    cout<<"----------------------------------------------------"<<endl;
    }
    while(oprtor>6);
    	cout<<"Masukan Nomor Handphone		: ";cin>>nomor;
    	cout<<"----------------------------------------------------"<<endl;
        cout<<"Pilih Nominal Pulsa yang dibeli"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"\t1. 5.000"<<endl; 
		cout<<"\t2. 10.000"<<endl; 
		cout<<"\t3. 25.000"<<endl; 
		cout<<"\t4. 50.000"<<endl; 
		cout<<"\t5. 100.000"<<endl; 
		cout<<"----------------------------------------------------"<<endl;
        
        do
        {
         cout<<"Pilih Nominal Pulsa		: ";cin>>nominal;
         if(nominal>5)
         cout<<"Maaf Nominal Terlalu Banyak!!\n";
        }
         while(nominal>5);
     cout<<"----------------------------------------------------"<<endl;

     {
        switch(oprtor)
         {
        case 1:
        cout<<"Operator Pilihan adalah		: Telkomsel\n";break;
        case 2:
        cout<<"Operator Pilihan adalah		: Indosat\n";break;
        case 3:
        cout<<"Operator Pilihan adalah		: Xl\n";break;
        case 4:
        cout<<"Operator Pilihan adalah		: Axis\n";break;
        case 5:
        cout<<"Operator Pilihan adalah		: Esia\n";break;
        case 6:
        cout<<"Operator Pilihan adalah		: Flexi\n";
         }
        }


     cout<<"Nomor Handphone Anda		: "<<nomor<<endl;

         {
        switch(nominal)
         {
        case 1:
        harga=5000;
        cout<<"Nominal Pulsa Pilihan		: 5.000\n";break;
        case 2:
        harga=10000;
        cout<<"Nominal Pulsa Pilihan		: 10.000\n";break;
        case 3:
        harga=25000;
        cout<<"Nominal Pulsa Pilihan		: 25.000\n";break;
        case 4:
        harga=50000;
        cout<<"Nominal Pulsa Pilihan		: 50.000\n";break;
        case 5:
        harga=100000;
        cout<<"Nominal Pulsa Pilihan		: 100.000\n\n";
         }
         }
      cout<<"Apakah Anda Membeli Pulsa[Y/T]	: ";cin>>lagi;
      }
      while(lagi=='T'||lagi=='t');

     cout<<"----------------------------------------------------"<<endl;
     bayar=harga+2000;
     cout<<"Harga Pulsa 			: Rp. "<<ceil(harga)<<endl;
     cout<<"Harga Jual			: Rp. "<<ceil(bayar)<<endl;
     cout<<"----------------------------------------------------"<<endl;

        do
    {
        cout<<"Total Bayar			: Rp. ";cin>>uang;
        if(uang<bayar)
        cout<<"Maaf uang anda kurang!!\n";
    }
    while(uang<bayar);

     sisa=uang-bayar;
     cout<<"kembalian			: Rp. "<<sisa<<"\n";

	cout<<"===================================================="<<endl;  
 	cout<<"Transaksi lagi?[Y/T]		: ";cin>>psnLG;
		 }
	 while(psnLG=='Y'||psnLG=='y');
	 getch();
	return 0;
}
