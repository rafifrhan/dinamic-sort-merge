#include <iostream>
using namespace std;
//202131145
int main(){
	int jml,jml2;
	cout << "Jumlah Input Bilangan Pertama = ";
	cin >> jml;
	
	int data[jml];
	for (int i = 0; i < jml; i++){
		cout << "Bilangan " << i + 1 << " = ";
		cin >> data[i];
	}
	cout << endl;
	cout << "Jumlah Input Bilangan Kedua = ";
	cin >> jml2;
	
	int data2[jml2];
	
	for (int i = 0; i < jml2; i++){
		cout << "Bilangan " << i+1 << " = ";
		cin >> data2[i];
	}
	
	cout << endl;
	int data3[jml + jml2];
	cout << "Hasil Merge = ";
	for(int i = 0; i < jml; i++){
		data3[i] = data[i];
	}
	for(int i = 0; i < jml2; i++){
		data3[i + jml] = data2[i];
	}
	for(int i = 0; i < jml+jml2; i++){
		if(i == (jml + jml2) - 1){
			cout << data3[i];
			break;
		}
		cout << data3[i] << ",";
	}
	
	cout<<endl;
	cout << "Hasil Sort = ";
	for(int i = 0; i < jml + jml2 - 1; i++){
		for(int j = 0; j < jml + jml2 - 1; j++){
			if(data3[j] > data3[j+1]){
				int temp = data3[j];
				data3[j] = data3[j+1];
				data3[j+1] = temp;
			}
		}
		
	}
	for(int i = 0; i <jml + jml2; i++){
		if(i == (jml + jml2) - 1){
			cout << data3[i];
			break;
		}
		cout << data3[i] << ",";
	}
	
}
