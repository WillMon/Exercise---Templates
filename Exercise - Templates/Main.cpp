#include "Vector3.h"
#include "Vector2.h"
#include "Vector4.h"

void main()
{
	Vector4<float> V4Tester1(5, 5, 5, 5);
	Vector4<float> V4Tester2(1, 2, 3, 4);
	Vector4<float> V4Tester3(0, 0, 0, 0);
	Vector4<int> V4Tester4;


	Vector3<int> V3Tester1(23,-65,-41);
	Vector3<int> V3Tester2(-45,52,47);
	Vector3<int> V3Tester3(0,0,0);
	Vector3<float> V3Tester4(1,2,0);
	Vector3<float> V3Tester5(3,2,0);
	Vector3<float> V3Tester6(0, 0, 0);

	Vector2<float> V2Tester1(2,3);
	Vector2<float> V2Tester2(5,3);
	Vector2<float> V2Tester3(0,0);
	double V2Tester4;

	//Vector Test for Vector (4) Normilizer

	V4Tester3 = V4Tester1.Normalizer();


	//Vector Test for Vector (3) addition, subtraction & Dot Product  
	V3Tester3 = V3Tester1 + V3Tester2;
	V3Tester3 = V3Tester1 - V3Tester2;
	V3Tester3 = V3Tester1 ^ V3Tester2;

	V3Tester6 = V3Tester4 % V3Tester5;
	
	//Vector Test for Vector (2) Normalizer, Dot & Cross Products  

	V2Tester3 = V2Tester1 ^ V2Tester2;
	V2Tester4 = V2Tester1 & V2Tester2;
	//V2Tester3 = V2Tester2.Normalizer();

	// Vector (4) Output Response
	std::cout << "Vector (4) Output: " << std::endl;

	std::cout << V4Tester3.RR << ",";
	std::cout << V4Tester3.GG << ",";
	std::cout << V4Tester3.BB << ",";
	std::cout << V4Tester3.AA << std::endl;

	std::cout << V4Tester1.Magnitude() << std::endl;
	// From Hexadecimal colors to Decimal
	std::cout << "Hexadecimal #8A3EBD: ";
	std::cout << V4Tester4.Hexadecimal("#00FF00").RR << ",";
	std::cout << V4Tester4.Hexadecimal("#00FF00").GG << ",";
	std::cout << V4Tester4.Hexadecimal("#00FF00").BB << ",";
	std::cout << V4Tester4.Hexadecimal("#000000").AA << std::endl;

	// Vector (3) Output Response
	std::cout << "Vector (3) Output: " << std::endl;
	std::cout << V3Tester3.XX << ",";
	std::cout << V3Tester3.YY << ",";
	std::cout << V3Tester3.ZZ << std::endl; 

	std::cout << (V3Tester1 & V3Tester2) << std::endl;

	std::cout << " Intrerplation: " << V3Tester6.XX << std::endl;

	// Vector (2) Output Response
	std::cout << "Vector (2) Output: " << std::endl;
	std::cout << V2Tester3.XX << ",";
	std::cout << V2Tester3.YY << std::endl;

	std::cout << "Magnitude: " << V2Tester1.Magnitude() << std::endl;
	std::cout << "Dot Product: " << V2Tester4 << std::endl;
	system("pause");

}