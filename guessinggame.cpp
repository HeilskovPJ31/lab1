#include<iostream>

using namespace std;

int value = 3;//value user tries to guess.
int x;
int count = 0;//counter


int main(){


while(x != value){

cout<<"\n\nGuess a number between 1 and 10: ";
cin >>x;

count++;

	if (x == value){
		cout<<"\n\nCORRECT!!"<<endl;
		cout<<"Number of guesses: "<<count<<endl<<endl;
	}
	else{
		cout<<"\n\nWRONG!";
	}
}



}
