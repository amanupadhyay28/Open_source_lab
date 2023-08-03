

#include <iostream>
#include<vector>

using namespace std;
int binary(vector<int>&arr, int low ,int high, int value){
    
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]==value){
            return arr[mid];
            
        }
        
        else if(arr[mid]<value){
            low =mid+1;
        }
        else{
            high =mid-1;
        }
    }
    return -1;
}
int main()
{
   vector<int>arr;
   arr.push_back(10);
   arr.push_back(1);
   arr.push_back(0);
   arr.push_back(100);
   int n =arr.size();
  cout<< binary(arr,0,n-1,100)<<endl;
   

    return 0;
}
