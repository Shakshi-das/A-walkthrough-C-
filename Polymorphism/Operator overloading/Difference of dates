//program to calculate the difference between two dates

#include<iostream>
using namespace std;
class Date
{
    private:
        int dd,mm,yy;
    public:
        Date(){
            dd=0;
            mm=0;
            yy=0;
        }
        void input()
        {
            cout<<"Enter the date-month-year in DD-MM-YY format:"<<endl;
            cin>>dd>>mm>>yy;
            
        }
        Date operator -(Date obj)
        {
            Date dif;
            dif.dd=dd-obj.dd;
            dif.mm=mm-obj.mm;
            dif.yy=yy-obj.yy;
            return dif;
            
        }
        void showdata()
        {
            cout<<" The given date is : "<<dd<<"-"<<mm<<"-"<<yy<<endl;
        }
        void display()
        {
            cout<<"The difference between two dates is:"<<yy<<" years "<<mm<<" months "<<dd<<" days "<<endl;
        }
};
int main()
{
   Date d1;
   d1.input();
   d1.showdata();
   Date d2;
   d2.input();
   d2.showdata();
   Date d3;
   d3=d1-d2;
   d3.display();
   return 0;
}
