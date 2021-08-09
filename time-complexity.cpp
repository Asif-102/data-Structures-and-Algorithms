#include <iostream>
using namespace std;

int main(){
	int i, j, n , count;
	cin >> n;
	
	count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			count = count + 1;
		}
	}
	
	cout <<"n = "<<n<<" count = "<<count<<endl;
	
	return 0;
}
