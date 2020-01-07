#include<iostream>
using namespace std;

int main(){
	int N,i=0;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	while(i<N){
		cout << "Name of student " << i+1 << " =";
		cin >> name[i];
		cout << "Age of student " << i+1 <<  " =";
		cin >> age[i];
		i++;
	}
	
	int key,count=0;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	while (count<N)
	{
		if(key==age[count]){
			cout << name[count] << "\n";
		}
		count++;
	}
	
	cout << "--------------------------------------\n";
	
	return 0;
}
