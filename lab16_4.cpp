#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &e,int &f,int &g,int &h){
	int ang[] = { e,f,g,h};
	int pao[4] = {};
	for(int i = 0; i < 4; i++){
		pao[i] = rand()%4;
		for(int j = 0; j< i; j++){
			if(pao[i] == pao[j]){
				i--;
			}
		}
	}	
int money[4] = { ang[pao[0]],ang[pao[1]],ang[pao[2]],ang[pao[3]]};
e = money[0];
f = money[1];
g = money[2];
h = money[3];
}