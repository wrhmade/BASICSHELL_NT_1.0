/*

[C] : Copyright by Create.Inc & Grassinternet.Inc

easycore files

[Product : beta 1	bta-0010]

*/

//Includes
#include <string>
#include <iostream>
using namespace std;

//Varibles
	string product_key = "ponduacretctedbnyirasnertcareietdngsicn";
	string task_key = "Ta#skf&Ini^sI??/ed!";
	string Tubor_key = "verywe11!easy0s2.o";
	string pin = "p@22w0r01";
	
	int power = 0;
	int tubor = 0;
	int bootp = 0;
	int fastmode = 0;
	int turnto = 1;
	int tubdev = 0;
	int screenon = 0;
	
	int maxp = 3000;
	int mem = 5000;
	int core = 5;
	int tread = 12;
	
	string tmp;
	
//Funtions
int pup(){
	power = 1;
	if(Tubor_key.substr(5,6) == "1"){
		tubor = 0;
	}else if(Tubor_key.substr(5,6) == "2"){
		cout << "Tubor error!\n\n";
		return 0;
	}else if(Tubor_key.substr(5,6) == pin.substr(6,7)){
		cout << "Tubor is opening!\n\n";
		return 0;
	}
	return 1;
}

int boot(){
	if(power != 1){
		cout << "No powering!\n\n";
		return 0;
	}else if(product_key != "ponduacretctedbnyirasnertcareietdngsicn"){
		cout << "Product key error!\nCkeck who product your devices!\nMaybe you bought not right devices!\n\n";
		return 0;
	}else if(task_key != "Ta#skf&Ini^sI??/ed!"){
		cout << "No enough authority to do tasks\nPlease concact your devices admin or company engineer!\n\n";
		return 0;
	}else if(Tubor_key != "verywe11!easy0s2.o"){
		cout << "Tubor error!\n\nPlease close tubor or the system is hacked!\n\n";
		return 0;
	}else if(pin != "p@22w0r01"){
		cout << "pin error!\n\nplease buy a right pin password!\n\n";
		return 0;
	}else{
		bootp = 1;
		return 1;
	}
}

int bootic(){
	if(bootp == 1){
		if(turnto == 1){
			maxp = 1024;
			mem = 2048;
			core = 2;
			tread = 4;
		}else if(turnto == 2){
			cout << "You opened the 'Tubor hardware' choosen , do you want to make the processors and memorys to be the most powerful?\n";
			cout << "[If you don't kown what are you doing , input 'no']\n\n";
			cout << "-----> ";
			cin >> tmp;
			if(tmp == "yes"){
				tubdev = 1;
				return 0;
			}else{
				maxp = 1024;
				mem = 2048;
				core = 2;
				tread = 4;
			}
		}
	}
	return 1;
}

int harc(){
	if(maxp >= 3100){
		cout << "Processor clock time too much!\n\n";
		return 0;
	}else if(maxp >= 5100 && tubdev == 1){
		cout << "Processor clock time too much!\nPlease make the clock time be smaller...\n\n";
		return 0;
	}else if(mem >= 5100){
		cout << "Memory write time too much!\n\n";
		return 0;
	}else if(mem >= 5100 && tubdev == 1){
		cout << "Memory write time too much!\nPlease make the memory write time be smaller...\n\n";
		return 0;
	}else if(core >= 5){
		cout << "Processor core number error!\n\n";
		return 0;
	}else if(core >= 5 && tubdev == 1){
		cout << "Processor core number error!\nPlease make the processor core number be smaller...\n\n";
		return 0;
	}else if(tread >= 12){
		cout << "Processor tread error!\n\n";
		return 0;
	}else if(tread >= 12 && tubdev == 1){
		cout << "Processor tread error!\nPlease make the processor tread be smaller...\n\n";
		return 0;
	}else{
		screenon = 1;
		return 1;
	}
	
}

int screen(){
	if(screenon == 0){
		cout << "Unkown error!\n\n";
		return 0;
	}else{
		cout <<"EasyOS 2.0 starting up...\nbased on easycore(R)\nProduct : bta-0010\nCreate.Inc & Grassinternet.Inc\n\n";
		return 1;
	}
	
}

int EFI(){
	string loc = "//Covering 1.0//corefuntion//efi";
	cout << "EasyOS 2.0 starting up...\nbased on easycore(R)\nProduct : bta-0010\n\nEFI...\n\nCreate.Inc & Grassinternet.Inc\n\n";
}

int main(){
	if(pup()){
		if(boot()){
			if(bootic()){
				if(harc()){
					if(screen()){
						EFI();
					}
				}
			}
		}
	}
	return 0;
}
