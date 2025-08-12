#include<iostream>
using namespace std;

class Capitalizer{
    string str;
public: 
    void setData(){
        cout << "Enter a string: " << endl;
        getline(cin, str);
    }

    void capitalizeWords(){
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] = str[0]-32;
        }

        for (int i = 1; i < str.length(); i++)
        {
            if( str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
    }

    void display(){
        cout << str << endl;
    }
};

int main(){
    Capitalizer obj; 
    obj.setData();
    obj.capitalizeWords();
    obj.display();
    return 0;
}