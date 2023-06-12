//#include<iostream>
//using namespace std;
//
//class demo
//{
//    int num1, num2;
//public:
//    demo(int x, int y)
//    {
//        num1 = x;
//        num2 = y;
//    }
//    friend void add(demo z);
//};
//
//void add(demo z)
//{
//    cout << z.num1 + z.num2;
//}
//
//class B; //forward declaration
//class A
//{
//    int a;
//public:
//    A(int x)
//    {
//        a = x;
//    }
//    friend void add(A, B);
//};
//class B
//{
//    int b;
//public:
//    B(int y)
//    {
//        b = y;
//    }
//    friend void add(A, B);
//};
//void add(A obj1, B obj2)
//{
//    cout<<obj1.a + obj2.b;
//}
//
//int main()
//{
//    demo d1(10,20);
//    add(d1);
//    A obj1(40);
//    B obj2(15);
//    cout<<endl;
//    add(obj1, obj2);
//    return 0;
//}