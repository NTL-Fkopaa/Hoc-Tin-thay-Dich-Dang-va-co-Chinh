#include <iostream>
using namespace std;
int main()
{
    int long long n;
    cin>>n;
    switch(n){
    case n<'5':
        cout<<"kém"<<endl;
        break;
    case '5':
    case '6':
    case '7':
        cout<<"trung bình"<<endl;
        break;
    case '8':
    case '9':
        cout<<"Giỏi"<<endl;
        break;
    case '10':
        cout<<"Xuất sắc"<<endl;
        break;
    default:
        cout<<"IDK? PLZ GIVE ME A NUMBER!"<<endl;

    }

 return 0;
}

