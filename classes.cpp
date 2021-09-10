#include <iostream>

using namespace std;

class A 
{
    public:
        int a1;
        int a2;
        
        A () {
            
        }
        
        A (int _a1, int _a2, int a3) {
            a1 = _a1;
            a2 = _a2;
            a3_ = a3;
        }
        
        int getA3 () {
            return a3_;
        }
        
        void setA3 (int a3) {
            a3_ = a3;
        }
        
        ~A () {
            cout << "Obj type A is deleted" << endl;
        }
        
    private:
        int a3_;
};

class Base 
{
    private:
        int x;
        int y;
    public:
        int n;
        int m;
};

class Derived : public Base 
{
    
};

int main(int args, char** argv) 
{
    cout << "Hello Dcoder!" << endl;
    
    A stackObj(4, 7, -1);
    A* dynamicObj = new A(6, 13, 5);
    
    cout << sizeof(*dynamicObj) << endl;
    cout << dynamicObj << endl;
    cout << *((int*)dynamicObj + 2) << endl;
    
    delete dynamicObj;
    
    A* array = new A[2];
    
    for (int i = 0; i != 6; i++)
        printf("%d\n", *((int*)array + i));
    
    delete [] array;
    
    cout << "End of main function" << endl;
    cout << sizeof(Base) << ", " << sizeof(Derived) << endl;
    
    return 0;
}