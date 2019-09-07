	// ejerc C++ ( 2 ) 06-09-2019  //
	//ANDERSON SARMIENTO //
	
	
	
		 # include<iostream>
		 using namespace std;
		 main()
		 {
		 	int comico [100],numero,mayor = 0;
		 	cout << "ingrese la cantidad de elementos del vector \n";
		 	cin >> numero;
		 		for (int i=0 ;i< numero;i ++)
		 		{
		 			cout<< i +1 <<" ingrese un numero";
					 cin >> comico [1];
					 if (comico [i]> mayor)
					 {
						mayor = comico [i];
					 }
	
				 }
			cout <<" EL NUMERO MAYOR DE LOS INGRESADOS ES :"<< mayor ;	 
		 }	 
