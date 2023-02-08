Question =1
/*
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Check
{
private:
float x;
public:
void setData(int a)
{
x=a;
}
void getData()
{
cout<<"\nx:"<<x;
}

//Defining an operator function + to overload
Check operator +(Check c)
{
Check temp;
temp.x=x+c.x;
return temp;
}

//Defining an operator function - to overload
Check operator -(Check c)
{
Check temp;
temp.x=x-c.x;
return temp;
}
//Defining an operator function * to overload
Check operator *(Check c)
{
Check temp;
temp.x=x*c.x;
return temp;
}

//Defining an operator function / to overload
Check operator /(Check c)
{
Check temp;
temp.x=x/c.x;
return temp;
}
};

void main()
{
clrscr();
Check c1,c2,c3,c4,c5,c6;
c1.setData(20);
c2.setData(10);

//Overloading operator +
c3=c1+c2;
c3.getData();

//Overloading operator -
c4=c1-c2;
c4.getData();

//Overloading operator *
c5=c1*c2;
c5.getData();

//Overloading operator /
c6=c2/c1;
c6.getData();
getch();
}
*\
Q=2
/*
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int s,l,b;
        float r,bs,ht;
        cout<<"Enter side of a square:";
        cin>>s;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;
        cout<<"Area of square is"<<area(s);
        cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of triangle is "<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}

Q=3
/*
#include <iostream>
using namespace std;
class Fish
        {
        protected:
                string name;
                bool hasScales;
        public:
                void Swim();
        };

void Fish::Swim()
        {
        cout << "*uses fins to paddle forward*" << endl;
        }

int main()
        {
        Fish fishie;
        fishie.Swim();
        
        return 0;
        }
        Q=4
        /*
        #include <iostream>
using namespace std;

///////////////////////////////////////
// THE FISH BASE CLASS
class Fish
        {
        protected:
                string name;
                bool hasScales;
        public:
                void Swim();
        };

void Fish::Swim()
        {
        cout << "*uses fins to paddle forward*" << endl;
        }
///////////////////////////////////////


///////////////////////////////////////
// MAIN
int main()
        {
        Fish fishie;
        fishie.Swim();
        
        return 0;
        }
        *\

        Q=5
        /*
        #include<iostream>
using namespace std;
class A1
{
  public:
  A1()
  {
    cout << "Constructor of the base class A1 \n";
  }
 
};
 
class A2
{
  public:
  A2()
  {
    cout << "Constructor of the base class A2 \n";
  }
 
};
 
class S: public A1, virtual A2
{
  public:
  S(): A1(), A2()
  {
    cout << "Constructor of the derived class S \n";
  }
};
 
// Driver code
int main()
{
  S obj;
  return 0;
}
*\
Q=6
/*
#include<iostream>
using namespace std;
  
// Base class
class A
{
    public:
        A()
        {
            cout << "Base class A constructor \n";
        }
};
  
// Derived class B
class B: public A
{
    public:
        B()
        {
            cout << "Class B constructor \n";
        }
};
  
// Derived class C
class C: public B
{
    public:
        C()
        {
            cout << "Class C constructor \n";
              
        }
};
  
// Driver code
int main()
{
    C obj;
    return 0;
}

*\
Q=7
/*

#include<iostream>
using namespace std;

class A  // Base class
{
         private:
            int x ;
       public:
            A( )  // Constructor without any argument
            {
                x = 0 ;
                cout << "\n The constructor of the class A without any argument is  invoked*** " ;
            }
           A(int X) // Constructor with one argument
            {
                 x = X ;
                   cout << "\n The constructor of the class A with one argument is  invoked***" ;
            }
           void Enter_x(void)
           {
                cout << "\n\n\t Enter the value of x: ";  cin >> x ;
             }
           void Display_x(void)
           {     cout << "\n\t x = " << x ;   }
};

// ***************Derived Class******************
class B : public A
{
           private:
        int y ;
            public:
                   B( ) : A ( ) // Constructor of the derived class B without any argument
                  {
                        y = 0 ;
                        cout << "\n The constructor of the class B without any argument is  invoked**" ;
                }
                // Constructor of the derived class B with two arguments
                B(int X,   // Argument for constructor A
                        int Y)   // Argument for constructor B
                                 : A(X)   // Call for the constructor A
                {
                        y = Y ;
                          cout << "\n The constructor of the class B with two arguments is invoked***" ;
                }
                void Enter_y(void)
                {     cout << "\t Enter the value of y: " ; cin >> y ;     }
                void Display_y(void)
                {     cout << "\n\t y = " << y ;    }
};


int main()
{
                cout << "\n\n The first object b1 is in use********\n " ;
                B b1 ;      // Invokes the constructor with zero arguments
                b1.Enter_x( );
                b1.Enter_y( );
                b1.Display_x( );
                b1.Display_y( );
                cout << "\n\n The second object b2 is in use********\n " ;
                B b2(5, 6);  // Invokes the constructor with two arguments
                b2.Display_x( );
                b2.Display_y( );
                cout<<"\n";

return 0;
}
*\