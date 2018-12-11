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
int mystery2(const char *s)       // 定义一个整数型函数 变量为 指针S
{
    unsigned int x;
    for (x=0;*s!='\0';++s)        // 如果指针S没有指向字符串 结束    指向下一个字符
        ++x;                                 // X+1
    return x;
}
