#include <iostream>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
  int a,b,c,d ;
  cin>> a >> b >>c >> d ;
 if((a>0) &&(b>0)&&(c>0)&&(d>0))
 {	
  if (a == b)
  {
  	if(c == d)
  		cout<<"YES"<<endl;
  	else
{
	cout<<"NO"<<endl ;

}
  }
  else if(a == c)
  {
  	if(b == d)
  		cout<<"YES"<<endl;
  	else
{
	cout<<"NO"<<endl ;

}
  }
  else if(a == d)
  {
  	if(b == c)
  		cout<<"YES"<<endl;
  	else
{
	cout<<"NO"<<endl ;

}
  }
else
{
	cout<<"NO"<<endl ;

}
}
else
{
		cout<<"NO"<<endl ;

}

}
return 0;
}

