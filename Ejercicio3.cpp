#include <iostream>
#include <algorithm>
using namespace std;

//Hecho por Ricardo Canales A01191463
//y Alejandro Sanchez A01191434


int main() {
	int casos, n;
	cin >> casos;
	while(casos--){
		cin >> n;
		int p[n], lowestDay, highestDay;
		for(int i = 0; i <n;i++) cin >> p[i];
		int maxDiff = p[1] - p[0];
		highestDay=0;//EXPERIMENTAL
		lowestDay=0;
	    int i, j;
	    for(i = 0; i < n; i++){
	    	for(j = i+1; j < n; j++){
		        if(p[j] - p[i] > maxDiff){
	        		maxDiff = p[j] - p[i];
	        		highestDay=j;
	        		lowestDay=i;
	        	}
	    	}
	    }
	    if(maxDiff<=0)
	    	cout << "NO COMPRES" << endl;
	    else
	    	cout << "Compra en "<< lowestDay+1 << ", vende en " << highestDay+1 << endl;
	}
	return 0;
}

