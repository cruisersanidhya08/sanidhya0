#include<iostream>
using namespace std;
void insert(string *p,int n){
	int k=0;
	for(int i=0;i<n;i++){
		cin>>*(p+k);
		k++;
	}
	*(p+k)="\0";	
}
void print(string *p){
	int k=0;
		while(*(p+k)!="\0"){
		cout<<*(p+k)<<'\n';
		k++;
	}
}
int main(){
	string a[100];
	string  b[100];
	int ch,k=0,n;
	while(ch!=0){
	
	cout<<"1)Enter a name"<<'\n';
	cout<<"2)Delete a name"<<'\n';
	cout<<"3)print names"<<'\n';
	cout<<"0)To end Program"<<'\n';
	cin>>ch;
	switch(ch){
		case 1:cout<<"enter how many names u wanna enter";
		 cin>>n;
			insert(a,n);
		break;
		case 3: print(a);
				break;
//		case3: print();
	}
}
	
}
