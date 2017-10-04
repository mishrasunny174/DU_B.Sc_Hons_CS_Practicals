#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(int argc,char* argv[])
{
	char inFilename[25];
	char outFilename[25];
	char temp;
	if(argc==3)
	{
		strcpy(inFilename,argv[1]);
		strcpy(outFilename,argv[2]);
		ifstream iFile(inFilename,ios::in);
		ofstream oFile(outFilename,ios::out);
		if(iFile&&oFile)
		{
			while(!iFile.eof())
			{
				iFile.get(temp);
				if(temp==' '||temp=='\t')
					continue;
				oFile.put(temp);		
			}
		}
		iFile.close();
		oFile.close();
	}
	else
		cout<<"Usage: "<<argv[0]<<" <source> <destination>"<<endl;
	return 0;
}
