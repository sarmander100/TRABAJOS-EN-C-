 // EJERCICIOS ( 3 ) 29 DE AGOSTO //
  // ANDERSON SARMIENTO//



#include <iostream>
using namespace std;
main ()
{ int edad;
	cout <<"BINVENIDO  A CINE COLOMBIA  ";
	cout <<"   POR FABOR PRESENTE SU CEDULA PARA VERIFICAR  SU CEDULA";
		cout << endl;   // esto es como si fuera un llamar nueva_linea en lpp o para recibir enter //
	cin >> edad;
	if (edad>= 18)
		{
		cout <<" ingrese a cine de adultos";
		}
	else
		{
			if (edad <= 0)
			{
				cout <<" NO AS NACIDO";
			}
		else
			{cout<<"ingrese al cine de menores";
			}
			
		}
	
	
	
	
}


