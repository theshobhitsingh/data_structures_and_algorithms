#include<bits/stdc++.h> 
using namespace std; 

void midPoint(int X1, int Y1, int X2, int Y2) 
{ 	
	int dx = X2 - X1; 
	int dy = Y2 - Y1; 
	
	if(dy<=dx){ 
	int d = dy - (dx/2); 
	int x = X1, y = Y1; 
	cout << x << "," << y << "\n";
	 
	while (x < X2) 
	{ 
		x++; 
		if (d < 0) 
			d = d + dy; 
 
		else
		{ 
			d += (dy - dx); 
			y++; 
		} 

		cout << x << "," << y << "\n"; 
	} 
	} 
	
else if(dx<dy) 
{ 
	int d = dx - (dy/2); 
	int x = X1, y = Y1; 
	cout << x << "," << y << "\n"; 
	while (y < Y2) 
	{ 
		y++; 
		if (d < 0) 
			d = d + dx; 

		else
		{ 
			d += (dx - dy); 
			x++; 
		} 
		cout << x << "," << y << "\n"; 
	} 
} 
} 
int main() 
{ 
int X1 = 2, Y1 = 2, X2 = 8, Y2 = 5; 
	midPoint(X1, Y1, X2, Y2); 
	return 0; 
} 