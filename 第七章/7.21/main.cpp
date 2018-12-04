#include <iostream>
#include <array>
using namespace std;

int main()
{
    int num2=0,b=0,b1=1,b2=0,b3=0,b4=0;
    const size_t row=5;
    const size_t column=4;
    array<array<int,column>,row>sales;
    for(size_t column=0;column<4;++column)
    {
      cout<<"±àºÅ"<<"\t"<<column+1<<"\t"<<"input  sales"<<endl;
        for(size_t  row=0;row<5;++row)
        {

            cin>>num2;
            sales[row][column]=num2;

        }
    }
    b1= sales[0][0]+ sales[1][0] +sales[2][0] +sales[3][0]+sales[4][0];
     b2= sales[0][1]+ sales[1][1] +sales[3][1] +sales[4][1]+sales[2][1];
      b3= sales[0][2]+ sales[1][3] +sales[2][3] +sales[3][3]+sales[4][3];
       b4= sales[0][3]+ sales[1][4] +sales[2][4] +sales[3][4]+sales[4][4];


    cout<<" "<<"[1],[2],[3],[4],rental"<<endl;
      for(size_t row=0;row<5;++row)
    {
        cout<<"["<<row+1<<"]";
        for(size_t column=0;column<4;++column)
        {

            cout<<sales[row][column]<<" "<<" "<<" ";
            b=b+sales[row][column];
        }
        cout<<b;
        b=0;
        cout<<endl;

    }
  cout<<"[r]"<<b1<<" "<<" "<<b2<<" "<<" "<<b3<<" "<<" "<<b4;
    return 0;
}
