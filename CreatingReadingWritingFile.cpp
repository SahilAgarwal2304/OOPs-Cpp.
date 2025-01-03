#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream createfile("Example.txt");
	if(!createfile)
	cerr<<"Error in creating file!!";
	createfile.close();
	ofstream insert("Example.txt");
	insert<<"THIS IS A SAMPLE FILE"<<endl;
	insert.close();
	ifstream readfile("Example.txt");
	if(!readfile)
	cerr<<"Error in opening the file for reading!!"<<endl;
	string line;
	while(getline(readfile,line))
	cout<<line<<endl;
	readfile.close();
	return 0;
	
}

