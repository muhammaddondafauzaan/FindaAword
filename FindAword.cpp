/* 	Nama Anggota	:	Muhammad Donda Fauzaan		2017051036
				Muhammad Rizki Kurniawan	2017051024
				Nasywa Nathania Wirawan		2017051051	
	Kelas		: 	B	*/
#include <iostream>
#include <cstring>
#include <algorithm>
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

char *reverse(char *);
bool searchVertical(char *);
bool searchHorizontal(char *);
bool reverseHor(char in[]);
bool reverseVer(char in[]);

int main()
{
    char word[16];
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || reverseVer(word) || searchHorizontal(word) || reverseHor(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}

bool searchHorizontal(char in[]){
	char*cek;
	for (int i=0;i<rows;i++){
        cek=strstr(words[i], in);
	    if(cek!=NULL){
        return true;
      }
  }
  return false;
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
        for (int j=0;j<rows; j++){
            word[j]=words[j][i];
        }
        reverse(word, word+strlen(word));
        cek=strstr(word, in);
        if(cek!=NULL){
	        return true;
	    }
    }
    return false;
}

bool reverseHor(char in[]){
	char *cek;
	char word[rows];
	for (int i=0;i<rows;i++){
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
