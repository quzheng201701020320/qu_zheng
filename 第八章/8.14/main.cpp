#include <iostream>

using namespace std;
int mystery2(const char *);
int main()
{
    char string1[80];
    cout<<"Enter a string: ";
    cin>>string1;
    cout<<mystery2(string1)<<endl;


}
                                     //what does this function do?
int mystery2(const char *s)       // ����һ�������ͺ��� ����Ϊ ָ��S
{
    unsigned int x;
    for (x=0;*s!='\0';++s)        // ���ָ��Sû��ָ���ַ��� ����    ָ����һ���ַ�
        ++x;                                 // X+1
    return x;
}
