#include<iostream>

using namespace std;

int value = 3;
int x;


int main(){

cout << "guess a number between 1 and 10: ";
cin >>x;

while(x != value){

cout<<"\n\nGuess again: ";
cin >>x;


	if (x == value){
		cout<<"\n\nCORRECT!!"<<endl;
	}
	else{
		cout<<"\n\nWRONG!";
	}
}



}
