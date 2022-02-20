#include<bits/stdc++.h>
using namespace std;

int longestWPI(vector<int> hours) {

    vector<int> arr;
    for (int i=0; i < hours.size(); i++){
        if (hours[i]>8){
            arr[i] = 1;
        }
        else{
            arr[i] = -1;
        }
    }

    for (int r=0; r < arr.size(); r++){
        cout<<arr[r];
    }
    
    
    return hours[2];
    }

int main(){
   vector<int> harr = {9,9,6,0,6,6,9};
   int len = 0;
   len = longestWPI(harr);

   cout<<len<<endl;
    return 0;
}