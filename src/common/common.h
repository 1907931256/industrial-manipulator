/**
 * @brief 一些常用的函数
 * @date Aug 25, 2017
 * @author a1994846931931
 */

# include <stdlib.h>

#ifndef COMMON_H_
#define COMMON_H_

namespace robot{
namespace common{

/**
 * @addtogroup common
 * @brief 包含常用的函数, 如取随机数, 打印文字等.
 *
 * @{
 */

/**
 * @brief 获得fMin~fMax之间随机数
 * @param fMin [in]
 * @param fMax [in]
 * @return double类型的随机数
 */
double fRand(double fMin, double fMax);

/**
 * @brief 将角度映射到[-pi, pi]的区间内
 * @param angle [in] 原始角度
 * @return [-pi, pi]的区间内的角度值
 */
double fixAngle(double angle);

/**
 * @brief 消除由于计算误差得到极小负数的情况
 * @param num [in] 要处理的数
 * @return
 * - 如果@f$ num >= 0@f$ 那么返回num
 * - 如果@f$ -1e-12 < num < 0@f$ 那么返回0
 * - 如果@f$ num < -1e-12 @f$ 那么返回num
 */
double fixZero(double num);

/**
 * @brief 通过gettimeofday获取系统绝对时间(微秒)
 *
 * 获取的是1970年1月1日至今的精确时间.
 * @see 系统函数"gettimeofday()"的具体用法
 */
unsigned long long getUTime();

/**
 * @brief 获得min
 * @param a [in] 比较数a
 * @param b [in] 比较数b
 * @return a和b当中较小的那个数
 */
double min_d(double a, double b);

/**
 * @brief 获得max
 * @param a [in] 比较数a
 * @param b [in] 比较数b
 * @return a和b当中较大的那个数
 */
double max_d(double a, double b);

/** @} */
}
}

#endif /* COMMON_H_ */
