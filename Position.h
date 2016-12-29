#ifndef POSITION_H
#define POSITION_H
class Position{
	private :
		int x = 0;
		int y = 0;

	public : 
		void setX(int x){this->x = x;};
		void setY(int y){this->y = y;};
		int getX(){return x;};
		int getY(){return y;};
};

#endif