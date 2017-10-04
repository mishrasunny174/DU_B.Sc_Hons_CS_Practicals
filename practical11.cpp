#include<iostream>
#include<cstring>

using namespace std;

bool isUsed(char,char*);

int main(int argc,char* argv[])
{
	int len,count=0;
	char used[100];
	if(argc==2)
	{
		len=strlen(argv[1]);
		for(int i=0;i<len;i++)
		{	
			if(!isUsed(argv[1][i],used))
			{
				used[i]=argv[1][i];	
				for(int j=i;j<len;j++)
				{	
					if(argv[1][i]==argv[1][j])
						count++;
				}
				cout<<argv[1][i]<<" has "<<count<<" occurances."<<endl;
				count=0;
			}
		} 
	}
	else
		cout<<"Usage: "<<argv[0]<<" <text> "<<endl;
	return 0;
}

bool isUsed(char c,char* charArr)
{
	int len=strlen(charArr);
	for(int i=0;i<len;i++)
		if(c==charArr[i])
			return true;
	return false;
}
