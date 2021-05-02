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


int main()
{
    char word[16];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}
bool searchVertical(char in[]){
	char *cek;
	char word[rows];
	for (int i=0;i<rows;i++){
        for (int j=0;j<rows;j++){
            word[j]=words[j][i];
        }
        cek=strstr(word, in);
        if(cek!=NULL){
	        return true;
	    }
    }
    return false;
}

bool reverseVer(char in[]){
	char *cek;
	char word[rows];
	for (int i=0;i<rows;i++){
        for (int j = 0; j < 15; j++){
            word[j] = words[j][i];
        }
        reverse(word, word+strlen(word));
        cek=strstr(word, in);
        if(cek!= NULL){
	        return true;
	    }
    }
    return false;
}
