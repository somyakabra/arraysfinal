#include<iostream>
using namespace std;

int getMax(int num[], int n){
   
    //int max = INT_MIN;
    int maxi = INT8_MIN;
    for(int i=0;i<n;i++){

    maxi=max(maxi,num[i]);
    }
    
    return maxi;
}

int getMin(int num[], int n){
   
    //int max = INT_MIN;
    int mini = INT8_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    
    }
    
    return mini;
}

int main(){

    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>> num[i];
    }
    cout<<"Maximum value is"<< endl << getMax(num,size)<<endl;
    cout<<"Minimum value is"<<  endl << getMin(num,size)<<endl;
    return 0;

}
