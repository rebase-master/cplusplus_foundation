//#include<iostream>
//
//using namespace std;
//
//void test(int x)
//{
//    try
//    {
//        if(x == 1)
//            throw x;
//        else if(x == 0)
//            throw 'a';
//        else if(x == -1)
//            throw 5.14;
//    } catch(int i) {
//        cout <<"Caught Integer exception\n";
//    }
//    catch(char ch)
//    {
//        cout <<"Caught character exception\n";
//    }
//    catch(double i)
//    {
//        cout<<"Caught double exception\n";
//    }
//}
//
//int main()
//{
//    test(1);
//    test(0);
//    test(-1);
//
//}