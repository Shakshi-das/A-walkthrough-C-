//program to calculate volume of three shapes

#include <iostream>
using namespace std;

class calc

{

  float v;

  public:

    calc();

    void volume (int);

    void volume (int l,int w, int h); 

    void volume (int r,int h);

    void display();

};

cale::calc()

{

  V = 0.8;

}

void calc:: volume (int a)

{

  float x= a*a*a;

  this->v=x;

}

void calc:: volume (int l,int w, int h)

{

  float x = l*w*h;

  this->v=x; 

}

void calc:: volume(int r, int  h)

{

  float x = 3.14 *r*h;

  this->v=x;

}

void calc::display()

{

  cout<<"VOLUME IS "<<this->v<<endl;

}

int main()

{

  calc res;

  int ch;

  cout<<"enter 1 for volume of cube 2 for rectangular box and 3 for cylinder"<<endl;

  cin>>ch;

  switch(ch)

  {

    case 1:

       int a;

       cout<<"Enter the side"<<endl;

       cin>>a;

       res.volume (a);

    break;

    case 2:

        int l, w, h;

        cout<<"Enter the length, width, height respectively"<<endl; 

        cin>>l>>w>>h; 

        res.volume (l,w,h); 

    break;

    case 3: 

       int r,h1; 

       cout<<"Enter the radius and height respectively"<<endl; 

       cin>>r>>hi; 

       res.volume (r,h1);

    break;

    default: cout<<"Wrong input"<<endl;

  res.display();

  return 0;

}
