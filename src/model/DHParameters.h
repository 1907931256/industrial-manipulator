/**
 * @brief DH参数类
 * @date Aug 17, 2017
 * @author a1994846931931
 */

#ifndef DHPARAMETERS_H_
#define DHPARAMETERS_H_

namespace robot {
namespace model {

/** @addtogroup model
 * @{
 */
class DHParameters {
public:
	DHParameters(double alpha, double a, double d, double theta);
	double alpha() const;
	double a() const;
	double d() const;
	double theta() const;
	void print() const;
	virtual ~DHParameters();
private:
	double _alpha;
	double _a;
	double _d;
	double _theta;
};

/** @} */
} /* namespace model */
} /* namespace robot */

#endif /* DHPARAMETERS_H_ */
