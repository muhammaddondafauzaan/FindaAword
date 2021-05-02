#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};

char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char *);
bool searchHorizontal(char *);
bool reverseHor(char in[]);



int main()
{
    char word[16];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word) || reverseHor(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}

bool searchHorizontal(char in[]){
	char *cek;
	for (int i=0;i<rows;i++){
        cek=strstr(words[i], in);
	    if(cek!=NULL){
	        return true;
	    }
    }
    return false;
}

bool reverseHor(char in[]){
	char *cek;
	char word[rows];
	for (int i=0;i<15;i++){
    	for(int j=0;j<rows;j++){
	    	word[j]=words[i][j];
		}
	    reverse(word, word+strlen(word));
	    cek=strstr(word, in);
	    if(cek!=NULL){
	        return true;
	    }
    }
    return false;
}
