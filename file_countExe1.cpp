//WAP to count the number of times this program has been executed
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int c;
	ifstream fin("count.txt",ios::in);		//opening a file in read mode
	if(fin)									//if the file is opened
		fin>>c;								//reading the number(present execution number) from file
	fin.close();							//closing the file
	
	ofstream fout("count.txt",ios::out);	//opening the file in write mode
	if(fout)								//if the file is opened
			fout<<c+1;						//writing the next execution number to the file
		if(c<10)							
		std::cout<<"\n\t\tHi!\n\tYou are visitor no.: 00"<<c;	//printing number of executing ,in the op window
		else cout<<"\n\t\tHi!\n\tYou are visitor no.: 0"<<c;
	fout.close();							//closing the file
	return 0;
}	
