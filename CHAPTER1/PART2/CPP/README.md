<h1 align="center">Introduction to Programming</h1>

## 📚 Chapter 1 Tutorial PART2 (1)
<p align="left">
  <img src="https://github.com/PishangShedappp/CSC126/assets/62550064/37804989-152c-4630-ad92-cc15599881a7" width="800">
</p>

- Jawapan aku
```cpp
#include <iostream>

using namespace std;

int main() {
	int sideA, sideB, areaOfTheShadedRegion;

	cout << "Side A: ";
	cin >> sideA;
	cout << "Side B: ";
	cin >> sideB;
	areaOfTheShadedRegion = (sideA*sideB)-(0.5*(sideA+sideB)*sideB);
	cout << areaOfTheShadedRegion;
}
```

<br/>
&nbsp; 

## 📚 Chapter 1 Tutorial PART2 (2)
<p align="left">
  <img src="https://github.com/PishangShedappp/CSC126/assets/62550064/38d29104-d834-40e0-b153-e2fa394a97f7" width="800">
</p>

- Jawapan aku
```cpp
#include <iostream>

using namespace std;

int main() {
	double sideB, rad, square, shadedRegion;
	
	cout << "Side B: ";
	cin >> sideB;
	cout << "Radius: ";
	cin >> rad;
	
	square = sideB * sideB;
	shadedRegion = square - (4*((22/7)*(rad*rad)));
	
	cout << "Area of the square: " << square << endl;
	cout << "Shaded Region: " << shadedRegion;
}
```
