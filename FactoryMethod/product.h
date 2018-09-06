#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

// 汽车接口
class ICar
{
public:
    virtual string Name() = 0;  // 汽车名称
};

// 奔驰汽车
class BenzCar : public ICar
{
public:
	string Name() {
		return "Benz Car";
	}
};

// 宝马汽车
class BmwCar : public ICar
{
public:
	string Name() {
		return "Bmw Car";
	}
};

// 奥迪汽车
class AudiCar : public ICar
{
public:
	string Name() {
		return "Audi Car";
	}
};
#endif // PRODUCT_H
