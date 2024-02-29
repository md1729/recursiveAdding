#include<iostream>
using namespace std;

int Adding(int a){
	
	if(a==0){
		return 0;
	}
	else{
		return a + Adding(a-1);
	}
}
int main(){
int number,sum;
cin>>number;
sum=Adding(number);
cout<<sum;	
	
	
	
	
}
