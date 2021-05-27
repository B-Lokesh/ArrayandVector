#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap;
	cout<<"Enter capacity of an array :";
	cin>>cap;
	int a[cap];
	int n;
	cout<<"Enter how many elements want in array :"<<endl;
	cin>>n;
	cout<<"Enter elements: "<<endl;
	for (int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	int pos;
	cout<<"Enter position to deleted"<<endl;
	cin>>pos;
	for(int i=0;i<n;i++)
	{
		if(pos==a[i])
		{
			cout<<"element found at index : "<<i<<endl;
			break;
		}
	}
	int ind = pos-1;
	for(int j = ind;j<n;j++)
	{
	    a[j]=	a[j+1];
	}
	n--;	
	for( int i=0;i<n;i++ )	
	{
		cout<<a[i]<<"  ";
	}
	return 0;
	
}
