#include<bits/stdc++.h>
using namespace std;

string encoder(string s , int encode){
	for (int i = 0; i < (int) s.length(); i++){
		if(s[i]>='a' && s[i]<='z'){
			int val = s[i] - 'a';
			s[i] = 'a' + (val + encode) % 26;
		}
		if(s[i]>='A' && s[i]<='Z'){
			int val = s[i] - 'A';
			s[i] = 'A' + (val + encode) % 26;
		}
	}
	return s;
}

string decoder(string s , int decode){
	for (int i = 0; i < (int) s.length(); i++){
		if(s[i]>='a' && s[i]<='z'){
			int val = 'z' - s[i];
			s[i] = 'z' - (val + decode) % 26;
		}
		if(s[i]>='A' && s[i]<='Z'){
			int val = 'Z' - s[i];
			s[i] = 'Z' - (val + decode) % 26;
		}
	}
	return s;
}

int main(){
	string s1 = "ZEBra";
	string test = encoder(s1, 13);
	cout << s1 << " -> " <<test << endl;
	string original = decoder(test, 13);	
	cout << test << " <- " <<original << endl;

	return 0;
}

// string shift(string s , int encode){
// 	for (int i = 0; i < (int) s.length(); i++){
// 		int val = s[i] - 'a';
// 		s[i] = 'a' + (val + encode) % 26;
// 	}
// 	return s;
// }

// Personal ver
// int  main(){
// 	string s = "zebra";
// 	for(char& c : s){
// 		// for (int rep = 1; rep <= 13 ; rep++){
// 			if (c >= 'n' && c <= 'z'){
// 				c = 'a' + ((c - 'a') + 13)%26;
// 			} 	
// 			else {
// 				c+=13;
// 			}
// 		// }
// 	}
// 	cout<< s << endl;
// 	// cout<<int('z'-'n')%26<<endl;
// 	return 0;
// }