#include <iostream>

using namespace std;

int Recursion(int num){
	if(num == 1){
		return num;
	}
	else{
		return num * Recursion(num - 1);
	}
}

int main(){
	cout << "Enter a number to calculate factoriel : ";
	int input;
	cin >> input;
	cout << Recursion(input) << endl;
	cout << "tada";
	return 0;
}
