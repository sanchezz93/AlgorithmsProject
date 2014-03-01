#include <iostream>
#include <algorithm> 
using namespace std;


int main() {
	int casos, n;
	cin >> casos;
	while(casos--){
		cin >> n;
		int p[n], lowest, highest, lowestDay, highestDay;
		lowest = p[0];
		for(int i =1;i<n;i++){
			if(p[i]>lowest){
				lowest=p[i];
				lowestDay=i;
			}
		}
		highest=p[lowestDay+1]
		for(int i = lowestDay;i<n;i++){
			if(p[i]>lowest){
				lowest=p[i];
				lowestDay=i;
			}	
		}


	}

	return 0;
}


3
2
1