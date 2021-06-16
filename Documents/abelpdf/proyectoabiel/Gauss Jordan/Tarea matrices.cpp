#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) // Funcion definida por el usuario programador
{
 COORD c;
 c.X = x - 1;
 c.Y = y - 1;
 SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main() {
       char quest;
       int R, C,a=218,b=217;
       float matriz[3][4],save[4],validar; // matriz tiene 3 renglones 4 columnas
       
       
      for (R=0; R<=2; R++) // ciclo para controlar renglones
      for (C=0; C<=3; C++) // ciclo para controlar columnas
      {	 cout << "Ingresa dato ["<< R+1 << "][" << C+1 << "]:";
	 cin >> matriz[R][C]; // ingresa datos segun posicion
    }
    do{
         system ("cls");
       cout << "Su matriz es la siguiente: \n";
         cout<<char(a)<<endl;
      for (R=0; R<=2; R++){ 
      for (C=0; C<=3; C++)
   { if (C==0)cout<<"|";
          cout<<"   ";
       cout<<matriz[R][C];
      if (C==3) cout<<"  \n";}}
       cout<<"\34";
  
  gotoxy(30,2);
  cout<<"\252";
  gotoxy(30,3);
  cout<<"|";
  gotoxy(30,4);
  cout<<"|";
  gotoxy(30,5);
  cout<<"|";
  gotoxy(30,6);
  cout<<char(b);
   cout<<endl;
            do{                                               
cout << "Desea cambiar algun valor (S/N)\n";
quest=getche();
if (toupper(quest)!='S' && toupper(quest)!='N'){
                        cout << "\nEleccion erronea ingrese una (S/N)\n" ;}
                        
if (toupper(quest)=='S'){
                         cout << "\nIngresa nuevo valor ";
                         
                         cin >> validar;
                         
                         do{
                          cout << "En el renglon? ";
                         cin >> R;
                         if (R>3 || R <1){
                                 cout << "No existe el renglon "<<R<<" ingrese un valor entre 1 y 3\n";
                        } }while(R>3 || R <1);
                         do{
                          cout << "En columna? ";
                          cin >> C;
                          if (C>4 || C <1){
                                 cout << "No existe la columna "<<C<<" ingrese un valor entre 1 y 4 \n";
                        } }while(C>4 || C <1);
                         matriz[R-1][C-1]=validar;
                         }
                         
                        }while(toupper(quest)!='S' && toupper(quest)!='N');
                        }while(toupper(quest)=='S');
                        
                       for(int i=0;i<=2;i++){
system ("cls");
           cout<<"Resolviendo matriz por Gauss Jordan"; 
         Sleep (500);             
           cout<<".";
          Sleep (500);
          cout<<".";
          Sleep (500);             
           cout<<".";
          Sleep (500);
          cout<<".";
          Sleep (500);             
           cout<<".";
           }
           
           system ("cls");
       cout << "Su matriz original: \n";
         cout<<char(a)<<endl;
      for (R=0; R<=2; R++){ 
      for (C=0; C<=3; C++)
   { if (C==0)cout<<"|";
          cout<<"   ";
       cout<<matriz[R][C];
      if (C==3) cout<<"  \n";}}
       cout<<"\34";
  
  gotoxy(30,2);
  cout<<"\252";
  gotoxy(30,3);
  cout<<"|";
  gotoxy(30,4);
  cout<<"|";
  gotoxy(30,5);
  cout<<"|";
  gotoxy(30,6);
  cout<<char(b);
   cout<<endl;
   
           if(matriz[0][0]==0 && matriz [1][0]!=0){
                    for(C=0;C<=3;C++){
                    save[C]=matriz[0][C];                  
                    matriz[0][C]=matriz[1][C];
                    matriz[1][C]=save[C];
                          }           
              }
              if(matriz[0][0]==0 && matriz [2][0]!=0){
                    for(C=0;C<=3;C++){
                    save[C]=matriz[0][C];                  
                    matriz[0][C]=matriz[2][C];
                    matriz[2][C]=save[C];
                          }           
              }
      if(matriz[0][0]!=1){
      for(C=3;C>=0;C--){
      matriz[0][C]=matriz[0][C]/matriz[0][0];
            }}
      if(matriz[1][0]!=0){
      for(C=3;C>=0;C--){
      matriz[1][C]=(-matriz[1][0]*matriz[0][C])+matriz[1][C];
            }}
      if(matriz[2][0]!=1){
      for(C=3;C>=0;C--){
      matriz[2][C]=(-matriz[2][0]*matriz[0][C])+matriz[2][C];
      }}
    //////////////  

              if(matriz[1][1]==0 && matriz [2][1]!=0){
                    for(C=0;C<=3;C++){
                    save[C]=matriz[1][C];                  
                    matriz[1][C]=matriz[2][C];
                    matriz[2][C]=save[C];
                          }           
              }
   if(matriz[1][1]!=1){
     for(C=3;C>=1;C--){
      matriz[1][C]=matriz[1][C]/matriz[1][1];
      }}
      
       if(matriz[0][1]!=0){     
      for(C=3;C>=1;C--){
      matriz[0][C]=(-matriz[0][1]*matriz[1][C])+matriz[0][C];
      }}
      if(matriz[2][1]!=0){ 
      for(C=3;C>=1;C--){ 
      matriz[2][C]=(-matriz[2][1]*matriz[1][C])+matriz[2][C];
      }}
  ////////
  if(matriz[2][2]!=1){
      for(C=3;C>=2;C--){
      matriz[2][C]=matriz[2][C]/matriz[2][2];
      }}
      
       if(matriz[0][2]!=0){
      for(C=3;C>=2;C--){ 
      matriz[0][C]=(-matriz[0][2]*matriz[2][C])+matriz[0][C];
      }}
      if(matriz[1][2]!=0){
      for(C=3;C>=2;C--){
       matriz[1][C]=(-matriz[1][2]*matriz[2][C])+matriz[1][C];
      }}
      
      
      
      cout << "Su matriz resultante es la siguiente: \n";
         cout<<char(a)<<endl;
      for (R=0; R<=2; R++){ 
      for (C=0; C<=3; C++)
   { if (C==0)cout<<"|";
          cout<<"   ";
       cout<<matriz[R][C];
      if (C==3) cout<<"  \n";}}
       cout<<"\34";
  
  gotoxy(30,8);
  cout<<"\252";
  gotoxy(30,9);
  cout<<"|";
  gotoxy(30,10);
  cout<<"|";
  gotoxy(30,11);
  cout<<"|";
  gotoxy(30,12);
  cout<<char(b);
   cout<<endl;
      
       cout << endl;
system("pause");
}
