#include<iostream>
#include<string>
using namespace std;

string mixText(string text1,string text2){
	int i=0;
	string e="E",fullstring,T1,T2;
	if(text1.size()!=text2.size()){
		return e;
	}
	else{
		while(i<text1.size())
		{
			 T1=text1[i];
			 T2=text2[i];
		     fullstring=fullstring+T1+T2;
			 i++;
		}
		return fullstring;
	}
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
