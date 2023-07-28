//program to store, modify and display records of students

#include <iostream>
using namespace std;

class Student

{

    private:

        string name;

        int roll;

        int m1;

        int m2;

        int m3;

        int tot;

    public:

        Student()

        {

           name="";

           roll=0;

           m1=0;

           m2=0;

           m3=0;

        }

        

        void input()

        {

            cout<<"Enter the roll no."<<endl;

            cin>>roll;

            cout<<"Enter the name"<<endl;

            cin>>name;

            cout<<"Enter marks in 3 subjects"<<endl;

            cin>>m1;

            cin>>m2;

            cin>>m3;

            tot=m1+m2+m3;

        }

        

        void display()

        {

            cout<<"Name: "<<name<<" Roll: "<<roll<<" Marks are: "<<m1<<" "<<m2<<" "<<m3<<" Total marks: "<<tot<<endl;

        }

        

        int check(int rl)

        {

            if(roll==rl)

                return 1;

            return 0;

        }

        

        void modify()

        {

            int ch,m;

            cout<<"Enter the marks you want to modify(1/2/3)?"<<endl;

            cin>>ch;

            cout<<"Enter the modified marks"<<endl;

            cin>>m;

            if(ch==1)

                m1=m;

            else if(ch==2)

                m2=m;

            else

                m3=m;

        }

    

};

int main()

{

    int n,r,pos;

    cout<<"Enter the no. of students"<<endl;

    cin>>n;

    Student obj[n];

    for(int i=0;i<n;i++)

    {

        obj[i].input();

    }

    cout<<"Before modification:"<<endl;

    for(int i=0;i<n;i++)

        obj[i].display();

    cout<<"Enter the roll to be modified"<<endl;

    cin>>r;

    for(int i=0;i<n;i++)

    {

       pos=obj[i].check(r);

       if(pos==1)

       {

           pos=i;

           break;

       }

    }

    obj[pos].modify();

    cout<<"After modification:"<<endl;

    for(int i=0;i<n;i++)

        obj[i].display();

}
