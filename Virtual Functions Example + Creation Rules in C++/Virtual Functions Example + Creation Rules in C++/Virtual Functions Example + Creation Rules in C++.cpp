#include<iostream>
using namespace std;

class CWH {
protected:
	string title;
	float rating;
public:
	CWH(string s, float r);
	virtual void display() = 0;

};
CWH::CWH(string s, float r) {
	title = s;
	rating = r;

}
class CWHVideo :public CWH {
protected:
	float videolength;
public:
	CWHVideo(string s, float r, float vL);
	void display();
};


CWHVideo::CWHVideo(string s, float r, float vL) : CWH(s, r) {
	videolength = vL;
}

void CWHVideo::display() {
	cout << "This is a video with title " << title << endl;
	cout << "This video has a ratting " << rating << endl;
	cout << "Length " << videolength << endl;
}

class CWHText:public CWH {
protected:
	int words;
public:
	CWHText(string s, float r, float w);
	void display();

};

void CWHText::display() {
	cout << "This is a video with title " << title << endl;
	cout << "This video has a ratting " << rating << endl;
	cout << "Text " << words << endl;
}


CWHText::CWHText(string s, float r, float w):CWH(s, r) {
	words = w;
}
int main() {
	
	string title;
	float rating, vlen;
	int words;
	//video
	title = "Bola Records video";
	rating = 4.5;
	vlen = 7.34;
	CWHVideo djVideo(title, rating, vlen);
	//Text
	title = "Bola Records Text";
	rating = 4.0;
	words = 433;
	CWHText  djText(title, rating, words);

	CWH* Ptr[2];
	Ptr[0] = &djVideo;
	Ptr[1] = &djText;

	Ptr[0]->display();
	Ptr[1]->display();


	system("pause");
	return 0;
}