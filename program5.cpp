#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
class FileX
{
public:
	int fd;
	FileX(char Name[])
	{
		fd=open(Name,O_WRONLY | O_APPEND);
		if(fd==-1) 
		{
			cout<<"Unable to Open file \n";
			exit(0);
		}
		else
		{
			cout<<"file Succesfully Written \n";
		}
	}
	void writeData(char *str)
	{
			write(fd,str,5);
		
	}
	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str1[30]={'\0'};
	char str2[30]={'\0'};
	cout<<"Enter file Name :\n";
	cin>>str1;
	cout<<"Enter data to write :\n";
	scanf("%[^'\n']s",str2);
	FileX obj(str1);
	obj.writeData(str2);
	return 0;
}