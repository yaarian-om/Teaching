#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	/**
		Array => To declare lots of similar types variables at a time or easily
		Array index starts from index 0
		Syntax => dataType arrayName[size];
	*/

	int array[10] = {1,2,3,4,5,6,7,8,9,0};
	cout<< "Normal Order = ";
	for(int i=0;i<10;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<< "Reverse Order = ";
	for(int i=10-1;i>=0;i--){
		cout<<array[i]<<" ";
	}


}
