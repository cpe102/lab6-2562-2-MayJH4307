#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char y ;
	if(x>='A' && x<='Z'){
		if(x == 65){
			y = 'Z';
		}else{
			y  = x - 1;
		}
		 
	}else{
		y = '0';
	}
	return y;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
