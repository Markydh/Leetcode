#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> ans;


void dfs(vector<int>&arr , int start,int end){
    if(start==end){
            ans.push_back(arr);
        return ;
    }
    else{
        for(int i=start;i<=end;i++){
            swap(arr[i],arr[start]);
            dfs(arr,start+1,end);
            swap(arr[i],arr[start]);
        }
    }
}


int main(){
    vector<int> arr;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    dfs(arr,0,arr.size()-1);

    for(vector<int>item : ans){

        for(int i : item){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}