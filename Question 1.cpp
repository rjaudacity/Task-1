#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int marks;
	cout<<"Enter your Marks:"<<endl;
	cin>>marks;
	
	if(marks>=50){
		cout<<"Pass";
	}
	else{
		cout<<"Fail";
	}
	return 0;
}