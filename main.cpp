#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B";
    double a,b;
    cin>>a>>b;

    cout<<"A+B="<<a+b<<'\n'
    <<"A-B="<<a-b<<'\n'
    <<"A*B="<<a*b<<'\n'
    <<"A/B="<<a/b<<'\n';


    if (a>b)
    {
        cout<<"max="<<a;
    }
    else
    {
        cout<<"max="<<b;
    }

  if (a<b)
  {
      cout<<"min="<<a;
  }
  else
  {
      cout<<"min="<<b;
  }

    return 0;
}
