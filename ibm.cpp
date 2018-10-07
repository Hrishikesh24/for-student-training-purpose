#include<iostream>
using namespace std;
int main(){
	int p;
	cout<<"enter the no. of times u want the iterations: "<<endl;
	cin>>p;
	if(p<=0){
		while(1){
			cout<<"hey user WTF FU"<<endl;
		}
	}
	else{
	for(int i = 0;i<10;i++){
		for(int j= 0;j<=i;j++){
			cout<<"$";
		}
		cout<<endl;
	}
	}
	return 0; 
}
