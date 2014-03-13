#include <iostream>
#include <math.h>

using namespace std;


void binarySearch(int array1[],int array2[],int n){
       double position1, position2, answer;
       int comparisonCount = 1;    //count the number of comparisons (optional)
       int p1, p2;
        int test;
       // To start, find the subscript of the middle position.
       p1 = ( 0 + n-1) / 2;
       p2=p1;
       bool found=false;
       position1=p1;
       position2=p1;
       while(!found)
       {
           cout << array1[p1] << " and " <<  array2[p2] << endl;
           cin >> test;
             if ((array1[p1] < array2[p2-1])||(array2[p2] > array1[p1+1]))
             {                                                       // decrease position by one.
             	position1=(position1+1+n-1)/2;
             	position1=floor(position1);
             	cout << "p1 " << position1 << endl;
             	p1=position1;

             }
             else if((array2[p2] < array1[p1+1])||(array1[p1] > array2[p2-1]))
			 {
				position2=(0+position2-1)/2;
				position2=ceil(position2);
				cout << "p2 " << position2 << endl;
				p2=position2;
             }
             else{
             	answer=(array1[p1]+array2[p2])/2;
             	found=true;
             }
       }
	   cout << "ANSWER: " << answer << endl;
       return;  // you may also consider returning the subscript
}

int main()
{
	int cases;
	cin >> cases;
	while(cases){
		int n;
		cin >> n;
		int arreglo1[n], arreglo2[n], c1=0, c2=0;
		for(int i = 0; i < n; i++)
		{
			cin >> arreglo1[i];
		}
		for(int i = 0; i < n; i++)
		{
			cin >> arreglo2[i];
		}
		binarySearch(arreglo1, arreglo2, n);


	}
    return 0;
}


