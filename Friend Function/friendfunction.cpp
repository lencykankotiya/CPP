#include<iostream>
using namespace std;
class test
{
    friend test sum(test , test);
    int real,img;

    public:
    void setdata(int r,int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "real number is : " << real << " + " << img << " i " << endl; 
    }
};
test sum(test m, test n)
{
    test t;
    t.real = m.real + n.real;
    t.img = m.img + n.img;
    return t;
}
int main()
{
    test a,b,c;
    a.setdata(15,8);
    b.setdata(8,15);
    a.display();
    b.display();
    c=sum(a,b);
    c.display();
}