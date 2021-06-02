#include<iostream>
#include<string>     //to use string definition,str.begin(),str.end()
#include<algorithm>  //to use sort()
#include<cstdlib>   //to use malloc()

using namespace std; //isse baar baar std:: nhi likhna padta

int main()
{
	char str='0';
	int i;
	
	for(i=1;i<5;i++)
	{
		str++;	
	}
	cout<<"\n "<<str;
	return 0;
}
