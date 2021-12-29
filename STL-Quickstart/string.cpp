#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    //string ==> alternate to char*
    //string initializations 

    string s0;
    string s1("hello");
    string s2 = "hello world";
    string s3(s1);
    string s4 = s2;

    char a[] = {'s','o','n','u','\0'};
    string s5(a);

    //string functions
    if(s0.empty()){
        cout<<"Empty"<<endl;
    }

    s0.append("RK"); //adds the string to original one 
    s0 = s0+" cupid";
    cout<<s0<<endl;

    //remove
    s0.clear(); // empties the string
    s0.length(); //provide the length of the string

    //compare
    s0 = "apple";
    s1 = "mango";
    cout<<s0.compare(s1)<<endl; //returns an interger ==0,<0,<0

    //find substing
    string word = "apple";
    string sentence = "an apple a day keeps the doctore away";

    int index = sentence.find(word);
    cout<<index<<endl;

    //remove a word
    sentence.erase(index,word.length());
    cout<<sentence<<endl;


    //iterate over string
    
    //normal for loop
    for(int i=0;i<word.length();i++)
    {
        cout<<word[i]<<endl;
    }

    //using iterator
    for(auto it = word.begin();it!=word.end();it++){
        cout<<*it<<endl;
    }

    //for each loop
    s0 = " RK CUPID";
    for(auto c:s0){
        cout<<c<<endl;
    }


    return 0;
}