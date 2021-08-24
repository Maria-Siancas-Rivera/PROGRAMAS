// Class Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector.h"
#include <conio.h>

using namespace std;

void main()
{
	int n,sum,vec[100];
	
	cout<<"Ingresar el tamaño del vector:";
	cin>>n;
	Vector vectorcito;
	vectorcito.cargarVector(vec,n);
	vectorcito.mostrarVector(vec,n);
	sum=vectorcito.sumarVector(vec,n);
	
	cout<<"La suma del vector es:"<<sum<<endl;
	getch();
}
