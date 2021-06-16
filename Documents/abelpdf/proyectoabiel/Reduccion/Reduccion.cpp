#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; // entrada y salida
 // entrada y salida
int main(int argc, char** argv) {
	
	system("color 1f");
	float a11, a12, a13, a21, a22, a23, a31, a32, a33, b1,b2,b3;
	float A11, A12, A13, A21, A22, A23, A31, A32, A33, B1,B2,B3;
	float C1, C2, C3, Z1, Z2 ,Z3 , R1, R2, R3;
	float D11, D12, D13, D14, D21, D22, D23, D24 ;
	float X1,X2,X3,X4;
	float z, x, y;
	float E11, E12, E13, E14;
	float F11,F12,F13,F14;
 

	
	
	printf("\n\n\n\t ********************");
	printf("\n\n\n\t PROGRAMA QUE RESUELVE UN SISTEMA DE ECUACIONES LINEALES ");
	printf("\n\n\n\t DE 5x5 POR EL METODO DE GAUSS JORDAN");
	printf("\n\n\n\t a11x + a12y + a13z = b1");
	printf("\n\n\n\t a21x + a22y + a23z = b2");
	printf("\n\n\n\t a31x + a32y + a33z = b3");
	printf("\n\n\n\t *******************");
	
	do{
	printf("\n\n\n\t ** PARA LA ECUACION 1 **");
	printf("\n\n\n\t INGRESE EL VALOR DE a11: ");
	scanf("%f",&a11);	
	printf("\n\n\n\t INGRESE EL VALOR DE a12: ");
	scanf("%f",&a12);
	printf("\n\n\n\t INGRESE EL VALOR DE a13: ");
	scanf("%f",&a13);
	printf("\n\n\t INGRESE EL VALOR DE b1: ");
	scanf("%f",&b1);
}
while (fabs(a11) > fabs(a12) + fabs(a13));

do {
	printf("\n\n\n\n\t ** PARA LA ECUACION 2 **");
	printf("\n\n\n\t INGRESE EL VALOR DE a21: ");
	scanf("%f",&a21);
	printf("\n\n\n\t INGRESE EL VALOR DE a22: ");
	scanf("%f",&a22);
	printf("\n\n\n\t INGRESE EL VALOR DE a23: ");
	scanf("%f",&a23);
	printf("\n\n\t INGRESE EL VALOR DE b2: ");
	scanf("%f",&b2);
}while (fabs(a22) > fabs(a21) + fabs(a23));

do{
	printf("\n\n\n\n\t ** PARA LA ECUACION 3 **");
	printf("\n\n\n\t INGRESE EL VALOR DE a31: ");
	scanf("%f",&a31);
	printf("\n\n\n\t INGRESE EL VALOR DE a32: ");
	scanf("%f",&a32);
	printf("\n\n\n\t INGRESE EL VALOR DE a33: ");
	scanf("%f",&a33);
	printf("\n\n\t INGRESE EL VALOR DE b3: ");
	scanf("%f",&b3);
}
while (fabs(a33) > fabs(a31) + fabs(a32));

	printf("\n El sistema es: ");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",a11,a12,a13,b1);
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",a21,a22,a23,b2);
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",a31,a32,a33,b3);
	printf("\n");
	
	A11=a21*a11;
	A12=a21*a12;
	A13=a21*a13;
	B1=a21*b1;
	
	if(a11>0){
		A21=a11*-1*a21;
		A22=a11*-1*a22;
		A23=a11*-1*a23;
		B2=a11*-1*b2;
	}else
	{
		A21=a11*1*a21;
		A22=a11*1*a22;
		A23=a11*1*a23;
		B2=a11*1*b2;
	}
	
	C1=A11+A21;
	C2=A12+A22;
	C3=A13+A23;
	R1=B1+B2;
	
	printf("\n Primer paso (restar ecuacion 1 y ecuacion 2)");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",A11,A12,A13,B1);
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",A21,A22,A23,B2);
	printf("\n -----------------------------");
	printf("\n %0.2fx +%0.2fy +%0.2fz =%0.2f",C1,C2,C3,R1);
	
	A11=a31*a11;
	A12=a31*a12;
	A13=a31*a13;
	B1=a31*b1;
    
    if(a11>0){
		A31=a11*-1*a31;
		A32=a11*-1*a32;
		A33=a11*-1*a33;
		B3=a11*-1*b3;
	}else
	{
		A31=a11*1*a31;
		A32=a11*1*a32;
		A33=a11*1*a33;
		B3=a11*1*b3;
	}
	
	Z1=A11+A31;
	Z2=A12+A32;
	Z3=A13+A33;
	R2=B1+B3;
	
	printf("\n");
	printf("\n");
	printf("\n Segundo paso (restar ecuacion 1 y ecuacion 3)");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",A11,A12,A13,B1);
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",A31,A32,A33,B3);
	printf("\n -----------------------------");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",Z1,Z2,Z3,R2);
	
	  if(Z2>0){
		D11=Z2*-1*C1;
		D12=Z2*-1*C2;
		D13=Z2*-1*C3;
		D14=Z2*-1*R1;
	}else
	{
		D11=Z2*-1*C1;
		D12=Z2*-1*C2;
		D13=Z2*-1*C3;
		D14=Z2*-1*R1;
	}
	
		if(C2>0){
		D21=C2*-1*Z1;
		D22=C2*-1*Z2;
		D23=C2*-1*Z3;
		D24=C2*-1*R2;
	}else
	{
		D21=C2*1*Z1;
		D22=C2*1*Z2;
		D23=C2*1*Z3;
		D24=C2*1*R2;
	}
	
    X1=D11+D21;
	X2=D12+D22;
	X3=D13+D23;
	X4=D14+D24;
	
	printf("\n");
	printf("\n");
	printf("\n Tercer paso (restar ecuacion 4 y ecuacion 5)");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",D11,D12,D13,D14);
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",D21,D22,D23,D24);
	printf("\n -----------------------------");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",X1,X2,X3,X4);
	
	z=X4/X3;
	

	E13=z*C3;
	
	
    printf("\n");
	printf("\n");
	printf("\n Cuarto paso (sustitucion de z en la ecuacion 4)");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",E11,C2,E13,R1);
	
	y=(R1-E13)/C2;
	
	
	F11=a11;
	F12=y*a12;
	F13=z*a13;
	F14=b1;
	
	printf("\n");
	printf("\n");
	printf("\n Quinto paso (sustitucion de z, y en la ecuacion 1)");
	printf("\n %0.2fx %0.2fy %0.2fz =%0.2f",F11,F12,F13,F14);
	
	x=(F14-F13-F12)/F11;
	
	printf("\n");
	printf("\n");
	printf("\n Nuestras incognitas son");
	printf("\n %0.2fz=",z);
	printf("\n %0.2fy=",y);
	printf("\n %0.2fx=",x);
	
    	
	return 0;
}
