#include<bits/stdc++.h>
using namespace std;

int longestWPI(vector<int>& hours) {
        return hours[2];
    }

int main(){
   vector<int> arr = {9,9,6,0,6,6,9};
   int len = 0;
   len = longestWPI(arr);

   cout<<len<<endl;
    return 0;
}