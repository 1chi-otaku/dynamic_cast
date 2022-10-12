#pragma once
class Figure
{
protected:
	int radius;
public:
	Figure() { radius = 0; }
	Figure(int r) { radius = r; }
	virtual ~Figure() = 0{
	
	}
};

