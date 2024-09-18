#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
void semilla(){
	srand(time(0));
}

int numaleatorio(){
	int aleatorio=rand()%99+1;
	return aleatorio;
}


void sumamatriz(){
	int size;
	cout<<"Ingrese el tamanio de matriz: "; cin>>size;
	int matriz1[size][size];
	int matriz2[size][size];
	int matrizsuma[size][size];
	
	for (int i=0; i<size; i++){
		for( int j=0; j<size ;j++){
			matriz1[i][j]=numaleatorio();
			matriz2[i][j]=numaleatorio();
		}
	}
	
	
	//matriz
	cout<<"Matriz 1"<<endl;
	for (int i=0; i<size; i++){
		for( int j=0; j<size ;j++){
			cout<<matriz1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	//matriz 2
	cout<<"Matriz 2"<<endl;
	for (int i=0; i<size; i++){
		for( int j=0; j<size ;j++){
			cout<< matriz2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Matriz Suma"<<endl;
	for (int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			matrizsuma[i][j]=matriz1[i][j]+matriz2[i][j];
			cout<<matrizsuma[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main(){
	semilla();
	sumamatriz();
	return 0;
}
