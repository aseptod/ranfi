#include <iostream>

using namespace std;

int main(){

//Variabel
	int M = 1;
	int N = 18 + 5;

//Tugas Program Hijrah
	cout << "==== Tugas Hijrah ====" << endl;
	cout << endl;
	cout << "---- Bilangan Prima ---" << endl;
	int i = M;
	while(i <= N){
		
		if(M==2 or M ==3){
        	cout << M << endl;
		}
        if( M % 2 != 0){
        	
        	if( M % 3 == 0 or M == 1){
        	
			}
			else{
				cout << M << endl;;
			}	
		}      
        M++;
        i++;
	}

//Tugas Sulastri
	cout << "=== Tugas Sulastri =  ==" << endl;
	cout << "--- Bilangan Ganjil ---" << endl;
	M = 1;
	while(M <= N){

		if( M % 2 == 1){
			cout << M << endl;
		}
		M++;
	}

	cout << "--- Bilangan Genap ---" << endl;
	M = 1;
	while(M <= N){

		if( M % 2 == 0){
			cout << M << endl;
		}
		M++;
	}

//Tugas Joko
	cout << "=== Tugas Joko ===" << endl;
	cout << "---Kelipatan 3 --" << endl;
    M = 1;
	while(M <= N){
		if(M % 3 == 0){
			cout << i << endl;
		}
        M++;
	}


	cout << "---Kelipatan 7 --" << endl;
    M = 1;
	while(M <= N){
		if(M % 7 == 0){
			cout << i << endl;
		}
        M++;
	}
}