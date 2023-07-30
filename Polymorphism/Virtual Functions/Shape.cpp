//program to calculate area and volume of cubes and cones

#include<iostream>
#include<math.h>
using namespace std;

class shape
{
    protected:
       int radius, height, side;
    public:
        shape()
        {
            radius =0;
            height = 0;
            side = 0;
        }
       shape(int r, int h, int s)
       {
           side = s;
           height = h;
           radius = r;
       }  
       virtual void calculate_area() = 0;
       virtual void calculate_volume() = 0;

};

class cube:public shape
{
    int area, volume;
    public:
        cube()
        {
            area = 0;
            volume = 0;
        }
        cube(int r, int h, int s):shape(r,h,s)
        {
            area = 0;
            volume = 0;
        }
        void calculate_area()
        {
            area = 6*side*side;
        }
        void calculate_volume()
        {
            volume = side*side*side;
        }
        void display()
        {
            cout<<"area of cube is:"<<area<<endl;
            cout<<"volume of cube is:"<<volume<<endl;
            cout<<endl;
        }
};

class cone:public shape
{
    int area, volume;
    public:
       cone()
       {
          area =0;
          volume =0;
       }
       cone(int r, int h, int s):shape(r, h, s)
       {
          area = 0;
          volume = 0;
       }
       void calculate_area()
       {
          area = (3.14*radius*radius)+(sqrt(height*height + radius*radius));
       }
       void calculate_volume()
       {
          volume = (3.14*radius*radius*height)/3;
       }
       void display()
       {
          cout<<"area of cone:"<<area<<endl;
          cout<<"volume of cone:"<<volume<<endl;
       }
};

int main()
{
    // cube ob(2,2,2);
    // ob.display();
    float n,d , r , h , s;
	//cout<<"enter how many cube we want to calculate"<<endl;
	//cin>>n;
	cube *ob = new cube[2];
	n =2;
	for(int i =0 ; i< n ;i++)
	{
		cout<<"enter the side"<<endl;
		cin>>s;
		//r =0; 
		//h = 0;
		ob[i]= cube(s,s,s);
    ob[i].calculate_area();
		ob[i].calculate_volume();
		ob[i].display();
	}
  //cout<<"enter how many cone we want to calculate"<<endl;
	//cin>>d;
	cone *ob1 = new cone[1];
	d=1;
	for(int i =0 ; i< d ;i++)
	{
		cout<<"enter the radius and height and side: "<<endl;
		cin>>r;
		cin>>h;
		cin>>s;
		ob1[i]= cone(s,r,h);
		ob1[i].calculate_area();
		ob1[i].calculate_volume();
		ob1[i].display();
    }
}
