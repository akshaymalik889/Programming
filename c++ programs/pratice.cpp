#include<iostream>
using namespace std;


class Student
{
    public:
    int x;
    int y;
    void getdata(int a,int b)
    {
        cout<<"value of x and y"<<a<<b;
    }
    void print()
    {
        cout<<x<<y;
    }
    private:
        int z;
        void putdata()
{

}
};

/*void main()
{
    student s1;
    s1.x=10;
    s1.y=20;
    s1.getdata(x,y);
    s1.print();
}
*/
class Account
{
    int ano;
    char name[15];
    float bal;
    public:
        char atype;
        void getdata()
        {
            cout<<"enter no";
            cin>>ano;
            cout<<"enter name";
            cin>>name;
            cout<<"enter bal";
            cin>>bal;
            cout<<"enter acc type";
            cin>>atype;
        }
        void deposit(float amt)
        {
            bal+=amt;
        }
        void withdraw()
        {
            cout<<"\n"<<bal;
        }
};
class xyz
{
private:
    int x;
    void xmethod()
    {
        x=100;
        cout<<x;
    }
public:
    int y;
    void ymethod()
    {   xmethod();
        cout<<"\n"<<y;
    }
};

class Student1
{
    int rno;
    char name[15];
    float marks;
public:
    void getdata()
    {
        cout<<"enter rollno,name & marks";
        cin>>rno>>name>>marks;
    }
    void putdata();

};
void Student1::putdata()
{
         cout<<"rollno="<<rno;
        cout<<"name="<<name;
        cout<<"marks="<<marks;

}
class Item
{
private:
    int no;
    int cost;
public:
    void putdata()
    {
        cout<<"number="<<no;
        cout<<"cost="<<cost;
    }
    void getdata(int a,int b)
    {
        no=a;
        cost=b;

    }
};


class Code
{
    int x;
    int y;
public:
    Code()
    {
        x=10;
        y=20;
        cout<<"\ndefault constructor\n";
    }
    Code(int a)
    {
        x=a;
        y=a;
        cout<<"\nparameterized constructor\n";
    }
    Code(Code &i)
    {
        cout<<"address of i=";
        cout<<&i<<"\n";
        x=i.x;
        y=i.y;
        cout<<"\ncopy constructor\n";
    }
    void display()
    {

        cout<<"\ndisplay function\n";
        cout<<x;
        cout<<" ";
        cout<<y;
    }
    /*
    void check(Code o)
    {
        cout<<"\nvalue of actual object\n";
        cout<<x;
        cout<<" ";
        cout<<y;
        cout<<"\nvalue of passed object\n";
        cout<<o.x<<" "<<o.y;
    }*/

        void check(Code &o)
    {
        cout<<"\nvalue of actual object\n";
        cout<<x;
        cout<<" ";
        cout<<y;
        cout<<"\nvalue of passed object\n";
        cout<<o.x<<" "<<o.y;
    }
};

int  main()
{
   // Account obj;
   // obj.getdata();
   // obj.withdraw();
   // obj.deposit(50.5);
    //obj.withdraw();
 //   xyz obj1;
    //obj1.x=20;
 //   obj1.ymethod();
 //   obj1.y=15;
 //   obj1.ymethod();
    //obj1.xmethod();
 //   Student1 obj2;
 //       obj2.getdata();
 //       obj2.putdata();
 //       Student1 obj3;
 //       obj3.getdata();
 //       obj3.putdata();
 //Student1 obj1;
 //obj1.getdata();
 //obj1.putdata();
 //Item i,i1;
 //i.getdata(1,10);
 //i.putdata();
 //i1.getdata(2,20);
 //i1.putdata();
 Code obj1;
 cout<<"address of obj1="<<&obj1;
 cout<<"\n";
 Code obj2(100);
 cout<<"address of obj2="<<&obj2;
  cout<<"\n";
 Code obj3(obj1);
cout<<"address of obj3="<<&obj3;
 cout<<"\n";
 Code obj4=obj1;
 cout<<"address of obj4="<<&obj4;
  cout<<"\n";
 obj1.display();
 obj2.display();
 obj3.display();
 obj4.display();
cout<<"---------------------------";
 obj1.check(obj2);
}

