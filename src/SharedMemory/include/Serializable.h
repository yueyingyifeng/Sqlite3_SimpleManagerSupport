#ifndef Serializable_H
#define Serializable_H
#include <vector>
#include <string>
class Serializable
{
protected:
	std::vector<std::string> splitString(const char* str, const char* separator);
	const char* separator{ "|||" };
public:
	virtual const char* serialize() = 0;
	virtual void deserialize(const char* data) = 0;

	template <class T>
	static T createObject(const char* data,T (*construct)(const char* data));
};

#endif