#include<iostream>
using namespace std;

int main()
{
	int a[1000],n,i;
	bool status = false;
	cout << "n :";
	cin >> i;
	for(n=0;n<i;n++){
		cout<< "Angka Ke-" <<n + 1 <<":";
		cin>>a[n];
	}
	for(n=0;n<i;n++){
		if(a[n]%2==0){
			cout <<a[n] << endl;
			status = true;
		}	
	}
	
	if (status == false){
		cout<< "Even number not found in array";
	}
	
	
}
