#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class person
{
    private:
    int age;
    public:
    person(int initialAge)
    {
        if(initialAge<0)
        {
            cout<<"Age is not valid, setting age to 0.\n";
            age=0;
        }
        else
        {
        age = initialAge;
        }
    }
    
    void amIOld()
    {
        if(age<13)
        {
            cout<<"You are young.\n";
        }
        else if(age>=13&&age<18)
        {
            cout<<"You are a teenager.\n";
        }
        else
        {
            cout<<"You are old.\n";
        }
    }
    void yearPasses()
    {
        age++;
    }
};

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int age;
        cin>>age;
        person person(age);
        person.amIOld();
        for(int j=0;j<3;j++)
        {
            person.yearPasses();
        }
        person.amIOld(); 
        cout<<endl;
    }
    return 0;
}
