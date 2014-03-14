/*
*Hecho por
*Ricardo Canales A01191463
*Alejandro Sanchez a01191434
*/
#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

/*TESTCASE
1
5
1 3 4 5 8
2 6 7 9 10
*/

int count=0;
int MAX=10001, MIN=0;

void binarySearch(int array1[],int array2[],int n){
     double position1, position2, answer;
     int p1, p2, l1, u1, l2, u2;
     int test;
     l1=l2=1;
     u1=u2=n-1;
     

     position1=((l1+u1)/2.0);
     position1=ceil(position1);
     p1=position1;
     position2=(l2+u2)/2.0;
     position2=floor(position2);
     p2=position2;
     bool found=false;
     while(!found)
     {
          /*cout << array1[p1] << " and " <<  array2[p2] << endl;
          cout << "BOUNDS l1: " << l1 << " u1: " << u1 << endl;
          cout << "BOUNDS l2: " << l2 << " u2: " << u2 << endl;*/

          // cin >> test;
          if((array1[p1]>array2[p2-1])&&array1[p1]<array2[p2+1]&&array2[p2]>array1[p1-1]&&array2[p2]<array1[p1+1]){
               answer=(array1[p1]+array2[p2])/2.0;
               found = true;
          }
          else{
               if(array1[p1]<array2[p2]){

                    u2=p2-1;//DERECHA HACIA ARRIBA (NUMEROS PARA ABAJO)
                 	position2=(l2+u2)/2.0;
                    position2=floor(position2);
                    p2=position2;
                    // cout << " l2: " << l2 << " u2: " << u2 << endl;
                    // cout << "p2 (a1<a2) " << position2 << endl;

                    l1=p1+1;//IZQUIERDA HACIA ABAJO (NUMEROS PARA ARRIBA)
                    position1=((l1+u1)/2.0);
                    position1=ceil(position1);
                    p1=position1;
                    // cout << " l1: " << l1 << " u1: " << u1 << endl;
                    // cout << "p1 (a2<a1) " << position1 << endl;

               }
               else{

                    l2=p2+1;//DERECHA HACIA ABAJO (NUMEROS PARA ARRIBA)
                    position2=(l2+u2)/2.0;
                    position2=floor(position2);
                    p2=position2;
                    // cout << " l2: " << l2 << " u2: " << u2 << endl;
                    // cout << "p2 (a1>a2) " << position2 << endl;

                    u1=p1-1;//IZQUIERDA HACIA ARRIBA (NUMEROS PARA ABAJO)
                    position1=(l1+u1)/2.0;
                    position1=ceil(position1);
                    p1=position1;
                    // cout << " l1: " << l1 << " u1: " << u1 << endl;
                    // cout << "p1 (a2>a1) " << position1 << endl;

               }
          }
     }
     cout << "Median case "<< count << ": " << fixed << setprecision(2) << answer << endl;
     return;  // you may also consider returning the subscript
}

int main()
{
	int cases;
	cin >> cases;
	while(cases--){
          count++;
		int n;
		cin >> n;
		int arreglo1[n+2], arreglo2[n+2], c1=0, c2=0;
          arreglo1[0]=arreglo2[0]=MIN;
          arreglo1[n+1]=arreglo2[n+1]=MAX;
		for(int i = 1; i < n+1; i++)
		{
			cin >> arreglo1[i];
		}
		for(int i = 1; i < n+1; i++)
		{
			cin >> arreglo2[i];
		}
		binarySearch(arreglo1, arreglo2, n+1);


	}
    return 0;
}


