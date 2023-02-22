#include<iostream>
using namespace std;

int main(){
	int x;
	float z = 0.0625; 
	float y;
	char tab4[5];
	int i=0;
	
	//41970
	
	cout<<"Podaj liczbe: "; cin>>x; 
	do{
		if(x%16==0){
			tab4[i]= 'O';	i++;
			x=x/16;
		}
		else if(x%16==z){
			tab4[i]= '1';	i++;
			y = x/16; x=y-z;
		}
		else if (x%16==(z*2)){
			tab4[i] = '2';	i++;
			y = x/16; x=y-2*z;
		}
		else if (x%16==(z*3)){
			tab4[i] = '3';	i++;
			y = x/16; x=y-3*z;
		}
		else if (x%16==(z*4)){
			tab4[i] = '4';	i++;
			y = x/16; x=y-4*z;
		}
		else if (x%16==(z*5)){
			tab4[i] = '5';	i++;
			y = x/16; x=y-5*z;
		}
		else if (x%16==(z*6)){
			tab4[i] = '6';	i++;
			y = x/16; x=y-6*z;
		}
		else if (x%16==(z*7)){
			tab4[i] = '7';	i++;
			y = x/16; x=y-7*z;
		}
		else if (x%16==(z*8)){
			tab4[i] = '8';	i++;
			y = x/16; x=y-8*z;
		}
		else if (x%16==(z*9)){
			tab4[i] = '9';	i++;
			y = x/16;x=y-9*z;
		}
		else if (x%16==(z*10)){
			tab4[i] = 'A';	i++;
			y = x/16; x=y-10*z;
		}
		else if (x%16==(z*11)){
			tab4[i] = 'B';	i++;
			y = x/16; x=y-11*z;
		}
		else if (x%16==(z*12)){
			tab4[i] = 'C';	i++;
			y = x/16; x=y-12*z;
		}
		else if (x%16==(z*13)){
			tab4[i] = 'D';	i++;
			y = x/16; x = y-13*z;
		}
		else if (x%16==(z*14)){
			tab4[i] = 'E';	i++;
			y = x/16; x=y-14*z;
		}
		else if (x%16==(z*15)){
			tab4[i] ='F';	i++;
			y = x/16; x=y-15*z;
		}

	}while(x>=0);
	
	for(i=i; i>0; i--){
		cout<<tab4[i-1]<<" ";
	}
}
