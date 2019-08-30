 // EJERCICIOS ( 4 ) 29 DE AGOSTO //
  // ANDERSON SARMIENTO//


#include <iostream>

using namespace std;
main ()
{
	int n1, n2, n3;	
	cout <<"programa para ordena los dumero depend de lo que pidan  \n ";
	cout <<"ingrese le primer numero  \n\n";
	cin >> n1;
//	cout <<"programa para ordena los dumero depend de lo que pidan  \n ";
	cout <<"ingrese el segundo numero  \n\n";
	cin >> n2;
//	cout <<"programa para ordena los dumero depend de lo que pidan  \n ";
	cout <<"ingrese el tecer numero numero  \n\n";
	cin >> n3;
		if ((n1<n2)&&(n2<n3))//1,2,3
		{	cout <<" \nel numero menor es: "<< n1;
			cout <<"\n el numero medio es: "<< n2;
			cout <<"\n el numero mayor es: "<< n3;
		}
		else 
			if ((n1>n2)&&(n2>n3))//3,2,1
				{	cout <<"\n el numero menor es: "<< n3;
					cout <<"\n el numero medio es: "<< n2;
					cout <<"\n el numero mayor es: "<< n1;
				}
			else 
				if ((n2<n1)&&(n1<n3))//2,1,3
					{	cout <<"\n el numero menor es: "<< n2;
						cout <<"\n el numero medio es: "<< n1;
						cout <<"\n el numero mayor es: "<< n3;
					}			
						else 
							if ((n2<n3)&&(n3<n1))//2,3,1
							{	cout <<"\n el numero menor es: "<< n2;
								cout <<"\n el numero medio es: "<< n3;
								cout <<"\n el numero mayor es: "<< n1;
							}	
							else 
								if ((n1<n3)&&(n3<n2))//1,3,2
								{	cout <<"\n el numero menor es: "<< n1;
									cout <<"\n el numero medio es: "<< n3;
									cout <<"\n el numero mayor es: "<< n2;
								}
									else 
										if ((n3<n1)&&(n1<n2))//3,1,2
										{	cout <<"\n el numero menor es: "<< n3;
											cout <<"\n el numero medio es: "<< n1;
											cout <<"\n el numero mayor es : "<< n2;
										}
										else
										{
											cout <<"ERROR";
										}		
					
		
	
	
	
	
	
}
