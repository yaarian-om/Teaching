#include<iostream>
using namespace std;
int main(){


	int arr[10] = {12,32,43,1,54,53,15,64,3,13};
	int even_Counter = 0;
	int odd_Counter = 0;

	for(int i=0;i<10;i++){
		if(arr[i]%2 == 0){
			cout<<"Even -"<< arr[i]<<endl;
			even_Counter++;
		}else{
			cout<<"ODD -"<< arr[i]<<endl;
			odd_Counter++;
		}
	}
	cout<<endl<<endl<< odd_Counter << " ODD Numbers"<<endl;
	cout<< even_Counter << " Even Numbers"<<endl;



}

