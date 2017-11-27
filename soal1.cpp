#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

int main () {

int angka[10], jumlah=10, max, min;

 for (int i = 0; i < jumlah; i++) 
 {	cin >> angka[i]; 
 		if ( i == 0 ) { min = angka[i]; max = angka[i]; } 
 		else if ( min > angka[i] ) 
 		{ min = angka[i]; } 
 		else if ( max < angka[i]) 
	 	{ max = angka[i]; } 
 		else {} 
 } 
 cout << endl;
 cout << "Smallest : " << min << endl;
 cout << "Greatest : " << max << endl;
 
}
