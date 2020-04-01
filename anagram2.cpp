#include <iostream>
#include <fstream>

using namespace std;

class anagram{
	bool isAnagram = true;
	ifstream plik1;
    ofstream plik2;
    
    public:
        anagram();
		~anagram();
       
		void swap();    

};

	anagram::anagram(){
		plik1.open("c:\\od.txt");
	    plik2.open("c:\\do.txt");
	}
		
	void anagram::swap(){
		string word1;
		
		while(!plik1.eof()){
			plik1>>word1;
			
			plik2<<word1<<" ";
			for(int i = word1.length()/2; i >= 0;i--){
				
				plik2<<word1[i+word1.length()/2];
				plik2<<word1[i-1];
			}
			plik2<<endl;			
		}				
	}
	
	anagram::~anagram(){
		plik1.close();
    	plik2.close();
	}


int main(int argc, char** argv) {
	
	anagram a1;
	a1.swap();
	
	return 0;
}
