#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int char_val (char x);
char char_sel (int x);
int otp_val (char y);
char otp_sel (int y);
int oval;
char osel;

int main(){
	string user_msg;
	ifstream otp;
	bool keep_running = true;
	string action;
	string pad_select;
	int math = 0;
	char letters;
	

	
	
	
		cout << "Please select a file to use either padA.txt or padB.txt" << endl;
		cin >> pad_select;
		
		otp.open(pad_select);
		
		if(otp.fail()){
			cout << "Something really awful happened here with your selection!" << endl;
			cout << "Choose another file!"<< endl;
		}
		//else
			//keep_running = false;
		
		//cout << "Please enter a message." << endl;
		//cin >> user_msg;
		cout << "Please select what you would like to do: encrypt or decrypt" << endl;
		cin >> action;
		

		
			if (action == "encrypt"){
				cout << "Please enter a message to encrypt: " << endl;
				cin >> user_msg;
				//for (int y = 0; y < otp.length(); y++){
					//while (otp >> letters){
						
						//otp_val(letters);			+ oval) % 27)
				
					for (int x = 0; x < user_msg.length(); x++) {
						math = (char_val(x)) ;
					//cout << char_sel(math);
					}
				//}

			cout << " is your encrypted message." << endl;
			}
			
			else if (action == "decrypt"){
				cout << "Please enter a message to decrypt: " << endl;
				cin >> user_msg;
				
			}
	
	
}


int char_val(char x){
	int Cval = 0;
	
	if (x == 'a' || x == 'A'){
			Cval = 1;		
	}
	if (x == 'b' || x == 'B'){
			Cval = 2;		
	}
	if (x == 'c' || x == 'C'){
			Cval = 3;		
	}
	if (x == 'd' || x == 'D'){
			Cval = 4;		
	}
	if (x == 'e' || x == 'E'){
			Cval = 5;		
	}
	if (x == 'f' || x == 'F'){
			Cval = 6;		
	}
	if (x == 'g' || x == 'G'){
			Cval = 7;		
	}
	if (x == 'h' || x == 'H'){
			Cval = 8;		
	}
	if (x == 'i' || x == 'I'){
			Cval = 9;		
	}
	if (x == 'j' || x == 'J'){
			Cval = 10;		
	}
	if (x == 'k' || x == 'K'){
			Cval = 11;		
	}
	if (x == 'l' || x == 'L'){
			Cval = 12;		
	}
	if (x == 'm' || x == 'M'){
			Cval = 13;		
	}
	if (x == 'n' || x == 'N'){
			Cval = 14;		
	}
	if (x == 'o' || x == 'O'){
			Cval = 15;		
	}
	if (x == 'p' || x == 'P'){
			Cval = 16;		
	}
	if (x == 'q' || x == 'Q'){
			Cval = 17;		
	}
	if (x == 'r' || x == 'R'){
			Cval = 18;		
	}
	if (x == 's' || x == 'S'){
			Cval = 19;		
	}
	if (x == 't' || x == 'T'){
			Cval = 20;		
	}
	if (x == 'u' || x == 'U'){
			Cval = 21;		
	}
	if (x == 'v' || x == 'V'){
			Cval = 22;		
	}
	if (x == 'w' || x == 'W'){
			Cval = 23;		
	}
	if (x == 'x' || x == 'X'){
			Cval = 24;		
	}
	if (x == 'y' || x == 'Y'){
			Cval = 25;		
	}
	if (x == 'z' || x == 'Z'){
			Cval = 26;		
	}
	if (x == ' '){
			Cval = 27;		
	}
	return Cval;
}

char char_sel (int x){
	char Csel = 'a';
	
	if (x == 1){
		Csel = 'a';
	}
	if (x == 2){
		Csel = 'b';
	}
	if (x == 3){
		Csel = 'c';
	}
	if (x == 4){
		Csel = 'd';
	}
	if (x == 5){
		Csel = 'e';
	}
	if (x == 6){
		Csel = 'f';
	}
	if (x == 7){
		Csel = 'g';
	}
	if (x == 8){
		Csel = 'h';
	}
	if (x == 9){
		Csel = 'i';
	}
	if (x == 10){
		Csel = 'j';
	}
	if (x == 11){
		Csel = 'k';
	}
	if (x == 12){
		Csel = 'l';
	}
	if (x == 13){
		Csel = 'm';
	}
	if (x == 14){
		Csel = 'n';
	}
	if (x == 15){
		Csel = 'o';
	}
	if (x == 16){
		Csel = 'p';
	}
	if (x == 17){
		Csel = 'q';
	}
	if (x == 18){
		Csel = 'r';
	}
	if (x == 19){
		Csel = 's';
	}
	if (x == 20){
		Csel = 't';
	}
	if (x == 21){
		Csel = 'u';
	}
	if (x == 22){
		Csel = 'v';
	}
	if (x == 23){
		Csel = 'w';
	}
	if (x == 24){
		Csel = 'x';
	}
	if (x == 25){
		Csel = 'y';
	}
	if (x == 26){
		Csel = 'z';
	}
	if (x == 27){
		Csel = ' ';
	}
	return Csel;
}

int otp_val(char y){
	int oval = 0;
	
	if (y == 'a' || y == 'A'){
			oval = 1;		
	}
	if (y == 'b' || y == 'B'){
			oval = 2;		
	}
	if (y == 'c' || y == 'C'){
			oval = 3;		
	}
	if (y == 'd' || y == 'D'){
			oval = 4;		
	}
	if (y == 'e' || y == 'E'){
			oval = 5;		
	}
	if (y == 'f' || y == 'F'){
			oval = 6;		
	}
	if (y == 'g' || y == 'G'){
			oval = 7;		
	}
	if (y == 'h' || y == 'H'){
			oval = 8;		
	}
	if (y == 'i' || y == 'I'){
			oval = 9;		
	}
	if (y == 'j' || y == 'J'){
			oval = 10;		
	}
	if (y == 'k' || y == 'K'){
			oval = 11;		
	}
	if (y == 'l' || y == 'L'){
			oval = 12;		
	}
	if (y == 'm' || y == 'M'){
			oval = 13;		
	}
	if (y == 'n' || y == 'N'){
			oval = 14;		
	}
	if (y == 'o' || y == 'O'){
			oval = 15;		
	}
	if (y == 'p' || y == 'P'){
			oval = 16;		
	}
	if (y == 'q' || y == 'Q'){
			oval = 17;		
	}
	if (y == 'r' || y == 'R'){
			oval = 18;		
	}
	if (y == 's' || y == 'S'){
			oval = 19;		
	}
	if (y == 't' || y == 'T'){
			oval = 20;		
	}
	if (y == 'u' || y == 'U'){
			oval = 21;		
	}
	if (y == 'v' || y == 'V'){
			oval = 22;		
	}
	if (y == 'w' || y == 'W'){
			oval = 23;		
	}
	if (y == 'x' || y == 'X'){
			oval = 24;		
	}
	if (y == 'y' || y == 'Y'){
			oval = 25;		
	}
	if (y == 'z' || y == 'Z'){
			oval = 26;		
	}
	if (y == ' '){
			oval = 27;		
	}
	return oval;
}

char otp_sel (int y){
	char osel = 'a';
	
	if (y == 1){
		osel = 'a';
	}
	if (y == 2){
		osel = 'b';
	}
	if (y == 3){
		osel = 'c';
	}
	if (y == 4){
		osel = 'd';
	}
	if (y == 5){
		osel = 'e';
	}
	if (y == 6){
		osel = 'f';
	}
	if (y == 7){
		osel = 'g';
	}
	if (y == 8){
		osel = 'h';
	}
	if (y == 9){
		osel = 'i';
	}
	if (y == 10){
		osel = 'j';
	}
	if (y == 11){
		osel = 'k';
	}
	if (y == 12){
		osel = 'l';
	}
	if (y == 13){
		osel = 'm';
	}
	if (y == 14){
		osel = 'n';
	}
	if (y == 15){
		osel = 'o';
	}
	if (y == 16){
		osel = 'p';
	}
	if (y == 17){
		osel = 'q';
	}
	if (y == 18){
		osel = 'r';
	}
	if (y == 19){
		osel = 's';
	}
	if (y == 20){
		osel = 't';
	}
	if (y == 21){
		osel = 'u';
	}
	if (y == 22){
		osel = 'v';
	}
	if (y == 23){
		osel = 'w';
	}
	if (y == 24){
		osel = 'x';
	}
	if (y == 25){
		osel = 'y';
	}
	if (y == 26){
		osel = 'z';
	}
	if (y == 27){
		osel = ' ';
	}
	return osel;
}