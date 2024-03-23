#ifndef Serializable_H
#define Serializable_H
#include <vector>
#include <string>
/**
 * @brief 序列化类
 * 
 */
class Serializable
{
protected:
	/**
	 * @brief 分割函数，根据 separator 分割 str
	 * 
	 * @param str 准备分割的字符串
	 * @param separator 分隔符
	 * @return std::vector<std::string> 
	 */
	std::vector<std::string> splitString(const char* str, const char* separator);
	//分隔符
	const char* separator{ "|||" };
public:
	/**
	 * @brief 序列化
	 * 
	 * @return const char* 返回序列化后的字符串
	 */
	virtual const char* serialize() = 0;
	/**
	 * @brief 反序列化
	 * 
	 * @param data 将字符串转换成类的成员变量
	 */
	virtual void deserialize(const char* data) = 0;

	template <class T>
	static T createObject(const char* data,T (*construct)(const char* data));
};

#endif