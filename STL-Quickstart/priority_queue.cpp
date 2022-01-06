#include<iostream>
#include<string>
#include<queue>

using namespace std;

class Person{
   
    
    public:
    string name;
    int age;
        Person(){

        }
        Person(string name,int age)
        {
            this->name = name;
            this->age = age;
        }

        

};

class ComparePerson{

    public:

    bool operator()(Person A,Person B){
        cout<<"Comparing "<<A.name<<" age "<<A.age<<" with "<<B.name<<" age "<<B.age<<endl;
        return A.age<B.age;
    }
};
int main()
{
    priority_queue<Person,vector<Person>,ComparePerson> pq;

    string n;
    int a;
    for(int i=0;i<5;i++)
    {
        cout<<"input : ";
        cin>>n>>a;
        Person p(n,a);
        pq.push(p);
    }

    while(!pq.empty())
    {
        Person pe = pq.top();
        cout<<"POP"<<pe.name<<" "<<pe.age<<endl;
        pq.pop();
    }


// input output
// input : sonu 23
// input : sahil 26
// Comparing sonu age 23 with sahil age 26
// input : ravneet 22
// Comparing sahil age 26 with ravneet age 22
// input : yashi 24
// Comparing sonu age 23 with yashi age 24 
// Comparing sahil age 26 with yashi age 24
// input : komal 25
// Comparing yashi age 24 with komal age 25  
// Comparing sahil age 26 with komal age 25  
// POPsahil 26
// Comparing ravneet age 22 with komal age 25
// Comparing sonu age 23 with yashi age 24   
// Comparing komal age 25 with yashi age 24  
// POPkomal 25
// Comparing ravneet age 22 with yashi age 24
// Comparing yashi age 24 with sonu age 23
// POPyashi 24
// Comparing sonu age 23 with ravneet age 22
// POPsonu 23
// POPravneet 22

    

}