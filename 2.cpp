#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int base(int);
int sum(int);
int main()
{
	unsigned int n,num,num2,num3,i,j,count =0;
	vector<int>v;
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>num;
		num2 = base(num);
		num3 = sum(num2);
		v.push_back(num3);
	}
	
	for(i=0;i< v.size()-1;i++)
	{
		for(j=i+1;j<v.size();j++)
		{
			
		
		if(v[i]>v[j])
		count++;
	     }
		
	}
	
	cout<<count<<endl;
	
return 0;
}
		
int base(int num)
{
	vector<int> q;
	unsigned int i=0,temp,nnum=0;
	while(num>0)
	{
		temp = num%6;
		q.push_back(temp);
		num = num/6;
		
	}
	for(i=0;i<q.size();i++)
    {
	nnum = nnum+ q[i]*pow(10,i);
    }
return nnum;
}


int sum(int num2)
{
	int sum1,temp;
	while(num2>0)
	{
		temp = num2%10;
		sum1 = sum1+temp;
		num2= num2/10;
	}
	return sum1;
}
		
