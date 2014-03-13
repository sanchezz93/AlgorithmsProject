#include <iostream>
#include <math.h>

using namespace std;

void binarySearch(int &array1[],int &array2[],int n)
{
       double position1, position2, answer;
       int comparisonCount = 1;    //count the number of comparisons (optional)

       // To start, find the subscript of the middle position.
       position1 = ( 0 + n-1) / 2;
       position2=position1;
       bool found=false;
       while(!found)
       {
             if (array1[position1] < array2[position2-1])
             {                                                       // decrease position by one.
             	position1=(position1+1+n-1)/2;
             	position1=ceil(position1);

             }                                                      
             else if(array2[position2] < array1[position1+1])                                               
			 {
				position2=(0+position2-1)/2;
				position2=floor(position2);
             }
             else
             	answer=(array1[position1]+array[position2])/2;
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


