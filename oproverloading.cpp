//#include<iostream>
//using namespace std;
//class complex
//{
//    int real, imag;
//public:
//    complex()
//    {
//        real = 0;
//        imag = 0;
//    }
//    complex(int x, int y)
//    {
//        real = x;
//        imag = y;
//    }
//    void disp()
//    {
//        cout<<"Real value = "<<real<<endl;
//        cout<<"Imaginary value = "<<imag<<endl;
//        cout<<"=======================\n";
//    }
//    complex operator +(complex);
//    bool operator ==(complex);
//};
//
//bool complex::operator ==(complex c) {
//    if(real == c.real && imag == c.imag)
//        return true;
//    else
//        return false;
//}
//complex complex::operator +(complex c)
//{
//    complex tmp;
//    tmp.real = real + c.real;
//    tmp.imag = imag + c.imag;
//    return tmp;
//}
//
//int main()
//{
//    complex c1(4,8), c2(14,8);
//    complex c3;
//    c3 = c1 + c2; //similar to c3 = c1.operator +(c2);
//    c1.disp();
//    c2.disp();
//    c3.disp();
//
//    if(c1 == c2) {
//        cout<<"Both numbers are equal";
//    } else {
//        cout<<"Numbers are unequal";
//    }
//    return 0;
//}