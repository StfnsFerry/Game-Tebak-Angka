#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

void loading(){
	system("color 0D");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\tLoading ";
	char x = 219;
	for(int i = 0; i < 35; i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	system("cls");
	system("color 07");
}

int main (){
	loading();
	int random,x;	
	string nama;
	string ulang;
	int score;
	int skor [2]= {50,0};
	srand(time(0));
	
	cout<<"Siapa Nama Kamu = ";
	getline(cin,nama);
	system("cls");
	
	do{
	system("cls");
		
	cout<<"\t\t\t\t\tHai "<<nama<<" Selamat Datang di Game Tebak Angka"<<endl;
	cout<<"========================================================================================================================"<<endl;
	cout<<"Player : "<<nama<<endl;
	cout<<"Selamat Bermain"<<endl;
	cout<<"========================================================================================================================"<<endl;	
	
	for(int i = 0; i < 2 ; i++){	
		random = rand()%100+1;
		cout<<"Round "<<i+1<<endl;
		cout<<"\n1. Ganjil\n";
		cout<<"2. Genap\n";
		cout<<"Tebak : ";
		cin>>x;
		cout<<endl;
		
		switch(x){
		
			case 1 :
				if(random%2==1){
					cout<<"Jawaban Komputer adalah " <<random<<endl;
					cout<<"Jawaban Anda Benar"<<endl;
					score += skor[0];
					cout<<"\n\n";
				}
				else{
					cout<<"Jawaban Komputer adalah " <<random<<endl;
					cout<<"Jawaban Anda Salah";
					score += skor[1];
					cout<<"\n\n";
				}
				
			break;
				
			case 2 :
				if(random%2==0){
					cout<<"Jawaban Komputer adalah " <<random<<endl;
					cout<<"Jawaban Anda Benar"<<endl;
					score += skor[0];
					cout<<"\n\n";
				
				}
				else{
					cout<<"Jawaban Komputer adalah " <<random<<endl;
					cout<<"Jawaban Anda Salah";
					score += skor[1];
					cout<<"\n\n";
				}
			break;	
		}
	}
	
	cout<<"Selamat "<<nama<<",total score kamu "<<score<<endl;
	cout<<"Apa Kamu Ingin Bermain Lagi <y/n>"; cin>>ulang;
	} while(ulang =="y");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\tTerima Kasih Sudah Memainkan Game Ini >_<";
	
	return 0;
	
}
