 #include<iostream>
 using namespace std;
 class Demo
 {
    int a;
    friend void get(Demo &t1);
    public:
    void show()
    {
        cout<<"A= "<<a<<endl;
    }
 };
 void get(Demo &t1)
 {
    cout<<"A=";
    cin>>t1.a;

 }
 int main()
 {
    Demo d1;
    get(d1);
    d1.show();
    return 0;
 }