#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	 int r,c,i,j,val,count=0;
	 int arr[1000][1000];
	 cin>>r>>c;
		 for(i=0;i<r;i++)
		 {
			 for(j=0;j<c;j++)
			 {
				 cin>>val;
				 arr[i][j] = val;
			 }
		 }
		  for(i=0;i<r;i++)
		 {
			 for(j=0;j<c;j++)
			 {
				if(arr[i][j] ==1  && i!=0 && j!=0)
				{
					if(arr[i][j+1] ==1 && j+1 <=c-1)
					count++;
					if(arr[i][j-1] ==1 && j-1 >=0)
					count++;
					if(arr[i+1][j] ==1 && i+1 <= r-1)
					count++;
					if(arr[i+1][j+1] ==1 && i+1 <= r-1 && j+1 <=c-1)
					count++;
					if(arr[i+1][j-1] ==1 && i+1 <= r-1 && j-1 >=0)
					count++;
					if(arr[i-1][j] ==1 && i-1 >=0)
					count++;
					if(arr[i-1][j+1] ==1 && i+1 <= r-1 && j+1 <=c-1)
					count++;
					if(arr[i-1][j-1] ==1 && i+1 <= r-1 && j-1>=0)
					count++;
				}
				cout<<"For "<<i<<" "<<j<<" "<<"count = "<<count<<endl;;
				count =0;
			 }
		 }   




return 0;
}

