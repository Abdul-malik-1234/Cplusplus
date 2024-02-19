//Pattern Searching in string (Naive Approach)
// Testcase
  // I/P: txt="ABABABCD" pat="ABAB"
  // O/P: 0 2
  // I/P: txt="ABCABCD" pat="ABCD"
  // O/P: 3
  // I/P: txt="AAAAA" pat="AAA"
  // O/P: 0 1 2

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Approach- O(n*p) n=size of the string p=size of pattern

//function compares both strings
//C++ compare function takes 2 strings:
  // s1.compare(s2)
  // returns 0 if both strings are equal
  // returns <0 if s1.size() is < s2.size()
  // returns >0 if s1.size() is > s2.size()

bool searching(string txt, string pat){

    return txt.compare(pat)==0?true:false;
}

//Function to search pattern
//finding substrings and adding to vector if both strings are same

void searchpattern(string txt, string pat){
    vector<int> res;	
	for(int i=0;i<txt.size();i++){
	    
	    string sub=txt.substr(i,pat.size());
	    cout<<sub<<endl;
	    bool ans=searching(sub,pat);
	    if(ans==true) res.push_back(i);
	}
	cout<<"\n";
	for(int i=0;i<res.size();i++){
	    cout<<res[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
    string txt="ABABABCD", pat="ABAB";
    
    searchpattern(txt,pat);

    return 0;
}
