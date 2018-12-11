#include <iostream>

using namespace std;
void mystery1(char* ,const char*);
int main()
{
    char string1[80];
    char  string2[80];
    cout<<"Enter two strings:";
    cin>>string1>>string2;
    mystery1(string1,string2);
    cout<<string1<<endl;

}
//what does  this function do ?
void mystery1(char*s1,const char*s2)
{
    while(*s1!='\0')    //  如果指针S1没有指向字符串结束

        ++s1;            //    指向下一个字符
    for(;(*s1=*s2);++s1,++s2)
    {
      ;
    }

}
