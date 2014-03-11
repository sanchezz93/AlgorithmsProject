/*
* Ricardo Canales A01191463
* Alejandro Sanchez A01191434
*/
#include <iostream>
using namespace std;

int a[500000], count;

void merge(int inicio,int final)
{
	int hold;
	for (int passes = 0;  passes < final-inicio+1;  passes++)
	{
		for (int j = 0;  j < final-inicio - passes +1;  j++)
		{
			if (a[j] > a[j+1])
			{
				hold = a[j];
				a[j] = a[j+1];
				a[j+1]=hold;
				count++;
			}
		}
	}
}

void MergeSort(int inicio, int final)
{
	int mid;
	if(inicio<final)
	{
		mid=(inicio+final)/2;
		MergeSort(inicio,mid);
		MergeSort(mid+1,final);
		merge(inicio,final);
	}
}

int main()
{
	int num,i;
	cin>>num;
	while(num!=0){
		count = 0;
		for(i=1;i<=num;i++)
		{
			cin>>a[i] ;
		}
		MergeSort(1,num);
        cout << count << endl;
		cin >> num;
	}
	return 0;

}
