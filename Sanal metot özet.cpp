#include<iostream>

class Dortgen{
	public:
	int taban = 5;
	int yukseklik= 2;
	virtual void alan()=0;
};

class Ucgen : public Dortgen{
	void alan(){
		std::cout<<taban*yukseklik/2;		
	}
};
void Alanal(Dortgen* dortgenptr){
	dortgenptr->alan();
}

int main(){
	class Ucgen ucgen;
	Alanal(&ucgen);
	
	
	return 0;
}
