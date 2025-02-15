#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans(numRows);
        
        for(int i=0;i<numRows;i++)
        {
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            
            for(int j=1;j<i;j++)
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];

        }
        return ans;
    }
};

int main (){

 int numRows;
 cin>>numRows;

 cout<< Solution(numRows);
 
 return 0;

}