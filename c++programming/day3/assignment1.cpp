#include <iostream>
#include <cstring>

using namespace std;

class word
{
	private:
		char *str;
	public:
		word()
		{
			cout<<"Default const called";
		}
		word(char *s)
		{
			str = new char[strlen(s)+1];
			strcpy(str,s);
		}

		word(const word &w)
		{
			//cout<<"\nCopy constructor called"<<endl;
			str = new char[strlen(w.str)+1];
			strcpy(str,w.str);
		}

		

		char *getWord() 
		{ 
		    return str; 
		}


};


int main()
{
	word w1("This is a test declaration");
	cout<<"w1: "<<w1.getWord()<<endl;
	word w2 = w1;
	cout<<"w2: "<<w2.getWord()<<endl;
	
	return 0;

}
