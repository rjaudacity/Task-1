#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	cout<<"Enter a Number:"<<endl;
	cin>>num;
	
	if(num%2 == 0){
		cout<<"Even";
	}
	else{
		cout<<"Odd";
	}
	return 0;
}