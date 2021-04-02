#include<iostream>
#include<fstream> 
using namespace std;
 long long array1[1000],array2[1000],array3[1000],array4[1000];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b,t1,t2,t3,t4;
	cin>>a;
	for(t1=0;t1<a;t1++){
		cin>>array1[t1]>>array2[t1];
	}
	cin>>b;
	for(t2=0;t2<b;t2++){
		cin>>array3[t2]>>array4[t2];
	}
	for(t3=0;t3<b;t3++){//°õ¦æb¦¸ 
		for(t4=0;t4<a;t4++){//
			if(array3[t3]==array1[t4]){
				if(array4[t3]-array3[t3]*array2[t4]==0){
					cout<<"The shopkeeper is honest.\n";
				}
				else{
					cout<<array4[t3]-array3[t3]*array2[t4]<<endl;
				}
			}
		}
	}
return 0;
}
