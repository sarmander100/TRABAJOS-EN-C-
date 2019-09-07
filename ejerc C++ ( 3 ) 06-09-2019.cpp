	// ejerc C++ ( 3 ) 06-09-2019  //
	//ANDERSON SARMIENTO //
	
	
		#include <windows.h>
		 # include<iostream>
		 using namespace std;
		 main()
		 {
		 	int cantidad [4][4];
		 	for ( int i =0 ; i< 4 ; i++)
		 	{
		 		for ( int j= 0; j<4 ;j ++)
		 		{
		 			cout << " DIGITE UN NUMERO ["<<i<<"]["<<j<<"]\n";
					cin >> cantidad[i][j];					 
				 }				 
			 }
			 cout <<endl <<"\t\t\t"<< "\nIMPRIMIENDO...\n";
			 for (int i =0 ; i< 4 ; i++)
			 {
				for (int j =0 ; j< 4 ; j++)
				{
					cout <<"["<<i<<"]["<<j<<"]\n";
					cout << cantidad [i][j]<<"\n";					
				}
				cout << " usted va en :"<< i << endl;
			 }
			 
			cout <<"\n matriz transpuesta \n"<< endl;
			for ( int i =0; i < 4; i ++)
			 	{
			 		for( int j =0; j < 4; j ++)
			 			{
			 				cout <<"["<<i<<"]["<<j<<"]\n";
			 				cout <<cantidad [j][i];
			 				cout<<endl;
			 				Sleep (200);
			 				cout <<"\n"; 
						 }
				 }
			cout <<" *******  COMO TINES QUE QUEDAD *********** \n"<< endl;  //SACAR UN TABLA EN EL PROGRAMA CON SALTO DE LINEA
			for ( int i =0; i < 4; i ++)
			 	{
			 		cout <<" -- -- -- -- -- -- -- -- -- \n";
			 		
			 		for( int j =0; j < 4; j ++)
			 			{
			 				cout <<" | "<<cantidad [j][i]<<" | ";
			 				Sleep (200);
			 				 
						 }
						 cout <<"\n";
				 }
				 cout <<" -- -- -- -- -- -- -- -- -- \n";
				

		 }
