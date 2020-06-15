#include <iostream>
#include <fstream>
using namespace std;
class Reina{
	public:
		bool **validar;
		char **tablero;
		fstream archivo;
		int contador, contador2, cont3, cont4;
		int n;
		void encerarTablero(){
			for(int i=0;i<n;i++){
				validar[i]=new bool [n];
				tablero[i]=new char[n];
				for(int j=0;j<n;j++){
					*(*(validar+i)+j)=false;
					*(*(tablero+i)+j)='*';
				}
			}
		}
		void crearArchivo(){
			archivo.open("solucion.txt",fstream::out); //para leer in, para salir es out escribir
			archivo<<"solucion "<<n<<"*"<<n<<endl<<endl;
			contador=0;
			contador2 = 0;
		}
		Reina (int n1){
			n=n1;
			validar = new bool *[n];
			tablero= new char *[n];
			encerarTablero();
			crearArchivo();
		}
		void solucion(int x, int y, int n1){
		    cont3++;
			*(*(tablero+x)+y)='R';
			bloquear(x,y);
			if(n1==n){
				mostrar();
				mostrarPantalla();
			}else{
				for(int i=0;i<n;i++){
					if(*(*(validar+i)+y+1)==false){
						solucion(i,y+1,n1+1);
						cont4++;
					}
				}
			}
			quitarRelleno(x,y);
		}

	   void bloquear(int x,int y){
	   		int aux1,aux2;
	   		aux2=y;
	   		aux1=0;
	   		while(aux1<n){ //vertical
	   			*(*(validar+aux1)+aux2)=true;
	   			aux1++;
			}
			   aux2=0;
			   aux1=x;
			   while(aux2<n){
			    	*(*(validar+aux1)+aux2)=true;
	   			aux2++;
		    }
		    aux2=y;  //Diagonales
		    aux1=x;
		    while(aux1>0&&aux2>0){
		    	aux1--;
		    	aux2--;
			}
			aux2=y;
			aux1=x;
			 while(aux1<n&&aux2>0){
		    	aux1++;
		    	aux2--;
			}
			aux1--;
			aux2++;
			while(aux1>=0&&aux2<n){
				*(*(validar+aux1)+aux2)=true;
				aux1--;
				aux2++;
			}
	   }
	   void quitarRelleno(int x,int y){
	   		*(*(tablero+x)+y)='*';
	   		for(int i=0;i<n;i++){
	   			for(int j=0;j<n;j++){
	   				*(*(validar+i)+j)=false;
				   }
			   }
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(*(*(tablero+i)+j)=='R')
					bloquear(i,j);
				}
			}
	   }
	   void mostrar(){
	   	contador++;
	   	archivo<<"Solucion N "<<contador<<endl;
	   	for(int i=0;i<n;i++){
	   		for(int j=0;j<n;j++){
	   			archivo<<*(*(tablero+i)+j)<<" ";
			   }
			   archivo<<endl;
		   }
		   archivo<<endl;
	   }
	   void mostrarPantalla()
	   {
            contador2++;
            cout<<"Solucion N "<<contador2<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<*(*(tablero+i)+j)<<" ";
                }
                cout<<endl;
           }
           cout<<endl;
	   }
	   void solucionReinas(){
	       cont3 = 0;
	       cont4 = 0;
	   	for(int i=0;i<n;i++){
	   		solucion(i,0,1);
	   		contarSoluciones(1);
       }
       //cout << "Han realizado " << cont3 << " movimientos.\n";
       cout << "Ha dado " << cont4 << " vueltas." << endl;
       archivo << "Ha dado " << cont4 << " vueltas." << endl;
       archivo.close();
	   }

	   void contarSoluciones(int m)
	   {
	       if (m==n){
                cont4++;
	       }
	       else {
                contarSoluciones(m+1);
	       }
	   }
};

int main() {
	int n;
	cout<<"\tCuantas reinas "<<endl;
	cin>>n;
	Reina *obj= new Reina(n);
	obj->solucionReinas();
	cout<<"Se creo el archivo solucion.txt"<<endl;
	return 0;
}













