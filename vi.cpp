#include <iostream>
#include <stdio.h>
#include<unistd.h>
#include<fstream>
#include<vector>
using namespace std;

class VI {
	public:
	struct dane
	{
		char *name[30];
		string nam3;
		string text;
		vector <string> txt;
	};
	VI(){
		bool done=false;
		menu(done);
	}
	~VI()
	{
		
		}
		private:
		int a=32;
		int MAN() {
		
vector <string > v1;
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");
v1.push_back("`                                  ");
v1.push_back("`                                   ");		
						}
char asc[32][64]{
	{"`                        "},
	{"`                        "},
	{"`          vi           "},
	{"` Crtl + C - Quit   "},
	{"` Crtl + S - Save  "},
	{"` Crtl + Z - Close "},
	{"`     1.load                     "},
	{"`        2.write                  "},
	{"`             3. pokaz pliki folderu biezacego -ls             "},
	{"`                          "},
	{"`                          "}
};
void printForm() {
	for (int i=0; i<11; i++)
	
	cout << asc[i]<< endl << endl;
	
}
int menu (bool done)
{
	char key;
done=false;
	char *path;
  char* mode;
	dane *plik;
	printForm();
	cin>>key;
	switch (key) {
		case 27 : done= true; break;
		case '1':load (done, plik); break;
	     case '2': edit(done, plik);break;
	 case '3' : ls();break;
	 
	}	
if (!done) {return menu(done);}
else return 1;	

	}
	
int ls()
   	{
		system("/system/bin/ls");
		}

int load( bool done, dane *pl)
{
	done=false;
	char text[99];
	char buff[525];
	string path;
	
		/*			try { 
	asm ("mov %r0,$1 \n");
	asm ("mov %r7, $4 \n");
	asm ("swi $0\n");
	}
	catch (int* C) 
	{*/
/*		system("/system/bin/dd < helo");*/
		
	fstream *infile;
	open(infile);
	while (!infile->eof())
	{
		infile->getline(buff,  sizeof(buff));
		cout<<buff<<endl;
		}	
		close(infile);
		
}
int open( fstream *file)
{
	dane *pl;
	string name;
	cout<<"podaj nazwe pliku"<<endl;
	cin >> name;
	
	file->open(name.c_str());
if(!file) return 0;
	
}
 int edit(bool done, dane* pl)
 {
 done=false;
 char key;
 		cout<<"edycja esc zakonczenie"<<endl;
 		while (!done) 
 	{
 		cin >> key;
 		switch (key)
 		{
 			case 27: done=true;break;
 		}
 	}
return 1;
 }
 int close(fstream * file)
 {
 	file->close();
 }
static FILE *DB_write (const void *prt, size_t size, size_t nemb, FILE*  stream) {
	try {
	asm ("mov %r0, $1\n");
	asm ("ldr %r1, =ptr\n");
	asm ("ldr %r2, =size\n");	
	asm ("ldr %r3, =nemb\n");
	asm ("mov %r7, $4\n");
	asm ("swi $0\n");
	}
	catch (int *C) {

	fwrite (prt, size, nemb, stream);
		}
		return (prt,size, nemb, stream);
	}
};

int main() {
	cout<<"hello lenowo"<<endl;
	VI *magic=new VI;
	magic->~VI();
try {
	/*that rycle in asm
	create section L0 type word*/
	asm (".L0: .word= 0x0f00f00 \n");
	asm ("bl .L0 \n");
}
catch (int c) {
	//that catch C
	system("/system/bin/sh");
}

	return 0;
}