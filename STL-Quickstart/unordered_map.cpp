#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Student{
    public:
        string firstname;
        string lastname;
        string rollno;

        Student(string f,string l,string r)
        {
            firstname = f;
            lastname = l;
            rollno = r;
        }

        bool operator==(const Student &s) const
        {
            return rollno == s.rollno;
        }
};

class Hashfn{

    public:
        size_t operator() (const Student &s)const{
            return s.firstname.length() + s.lastname.length();
        }
    

};


int main()
{

    unordered_map<Student,int,Hashfn> student_map;
    Student s1("Prateek","Narang","010");
    Student s2("Rahul","Kumar","023");
    Student s3("Prateek","Gupta","030");
    Student s4("Rahul","Kumar","120");

    //add marks there 

    student_map[s1] = 100;
    student_map[s2] = 120;
    student_map[s3] = 11;
    student_map[s4] = 45;

    //iterate over it 

    student_map.erase(s3);
    for(auto s:student_map)
    {
        cout<<s.first.firstname<<" : "<<s.second<<endl;
    }



    cout<<student_map[s4];

    return 0;
}