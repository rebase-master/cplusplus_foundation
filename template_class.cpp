#include<iostream>
using namespace std;
template<class Ttype>
class tmp_class
{
    Ttype a, b;
public:
    void getdata()
    {
        cout<<"Enter two values: ";
        cin>>a>>b;
    }
    void sum();
};
template<class Ttype>
void tmp_class<Ttype>::sum()
{
    cout<<a+b<<endl;
}

int main()
{
    tmp_class <int>s1{};
    tmp_class <float>s2{};
    s1.getdata();
    s1.sum();
    s2.getdata();
    s2.sum();

    return 0;
}