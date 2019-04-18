#include "stdafx.h"
#include <iostream>
#include <iomanip> 
#include "Salesman.h"

#define N 5

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
 setlocale(LC_ALL, "Russian");

 int d[N][N] = {// 2   0   1    0   0       
	           {   INF,  26,  34,   INF,  13},   // 4
               {   13,  INF,  28,   55,  71},   // 3
               {   15,  39,  INF,   86,  62},   // 5
               {   30,  45,  52, INF,  39},   // 5
               {   80,  79,  52,  26,  INF}    // 4
               };  
			   
int r[N];    
 
int s = salesman (            
                  N,          // [in]  количество городов 
                  (int*)d,    // [in]  массив [n*n] расстояний 
                  r           // [out] массив [n] маршрут 0 x x x x  
      
                 );

 cout << "-- Задача коммивояжера -- ";
 cout << endl << "-- количество  городов: " << N;
 cout << endl << "-- матрица расстояний : ";
 
 for(int i=0; i<N; i++)
 { 
    cout << endl;
    
	for(int j=0; j<N; j++)

       if (d[i][j] != INF) 
		   cout << setw(3) << d[i][j] << " ";

       else 
		   cout << setw(3) << "INF" << " ";
 }
 
 cout << endl << "-- оптимальный маршрут: "; 
 
 for(int i=0; i<N; i++) 
	 cout << r[i] << "-->"; 
     cout << 0;
     cout << endl << "-- длина маршрута     : " << s;  
     cout << endl;
 
system("pause");
return 0;
}