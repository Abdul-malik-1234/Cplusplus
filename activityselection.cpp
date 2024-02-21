#include<iostream>
#include<vector>
using namespace std;

int main(){

//start times: 10,12,20
//end times: 20,25,30

/* Lambda function c++:
    [](const int& a, const int& b) -> bool
    {
        return a > b;
    }
    const int& is the argument of the lambda function
    bool is the return type of the comparator
    comparator can return three values:
*/
 vector<vector<int>> v1{
   {10,12,20},
   {20,25,30}
 }; //Creating a multidimensional vector

//Task is to sort based on end time
sort(v1.begin(),v1.end(),[](const int& a,const int& b) -> bool{
      
})
 return 0;
}
