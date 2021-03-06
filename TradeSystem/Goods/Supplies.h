#ifndef _SUPPLIES_H_
#define _SUPPLIES_H_

#include "Goods.h"

//----------------------------------------------------------------------------------------------------
class Supplies : public Goods
{
public:
	Supplies();
	Supplies(const string& _goodsName, int _amount, int _price, const string& _owner, time_t _expiryDate);
	Supplies(int _identifier, const string& _goodsName, int _amount, int _price, const string& _owner, time_t _expiryDate);
	Supplies(const Supplies& _supplies);
	~Supplies();

	int CalculatePrice(int _num);

	void SetExpiryDate(time_t _expiryDate);

	time_t& GetExpiryDate();

private:
	time_t m_expiryDate;
};

#endif