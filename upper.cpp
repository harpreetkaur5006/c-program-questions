#include<iostream>
using namespace std;
class upper{
    string str;
    public:
    void getstring(){
        cout << "enter the string"<<endl;
        getline(cin,str);
    }
    void capital(){
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] = str[0]-32;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if( str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z'){
                str[i+1] = str[i+1] - 32;
            }
        }
    }
    void display(){
        cout << str <<endl;
    }
};
int main(){
    upper obj;
    obj.getstring();
    obj.capital();
    obj.display();
    return 0;
}
