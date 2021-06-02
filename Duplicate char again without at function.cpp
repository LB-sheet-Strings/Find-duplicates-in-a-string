#include<iostream>
#include<string>     //to use string definition,str.begin(),str.end()
#include<algorithm>  //to use sort()
#include<cstdlib>   //to use malloc()

using namespace std; //isse baar baar std:: nhi likhna padta

int main()
{
	int n,i,flag=0,charcount=0; 
	
	cout<<"\nWhat should be your string's size => ";
	cin>>n;
	
	cout<<"\nStart filling the string => ";
	char *str=(char*)malloc(sizeof(char)*(n));
	for(i=0;i<n;i++)
	{
		cout<<"\nCharacter at index "<<i<<" ";
		cin>>str[i];
	}
	
	//sorting the string to get duplicate characters in the consecutive locations
	sort(str,str+n);
	
	//now iterate thorugh the string again. Now the string is already sorted
   for(i=0;i<n;i++)
   {
   		//to count the duplicate characters
   		charcount++;  		
	
   		if((str[i]!=str[i+1] || i+1>=n))   //i+1>=n isiliye taaki last element ko ek baar check kar sake
   		{
   			//this ensures that the element repeats. It should be present more than once
   			if(charcount>1) 
   			{
   				//Agar ye sentence print nahi hota hai iska matlab hamare pass saare unique characters hai.
   				//isko flag se mark karo.
   				cout<<"\nDuplicate character => "<<str[i]; 
   				flag=1;
			} 
		//reset karo ab count ko
		charcount=0;
		}	
   }
   if(flag==0)
   {
   		cout<<"\nThere are no duplicate characters.";
   }
	return 0;
}
