#include<iostream>
using namespace std;
int main(){
	int heightOfFence=0,totalNumberOfWidth=0,numberOfPerson=0,heightOfPerson;
	cin>>numberOfPerson;
	cin>>heightOfFence;
	for(int i=0;i<numberOfPerson;i++){
		cin>>heightOfPerson;
		totalNumberOfWidth+=heightOfPerson> heightOfFence ? 2 : 1;
	}
	cout<<totalNumberOfWidth;
}

