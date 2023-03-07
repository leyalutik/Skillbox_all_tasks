#pragma once

#include <sstream>
#include <exception>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <array>

void display(float *m, const std::size_t N);
//display vector
template <class T>
std::ostream& operator<< (std::ostream& os, const std::vector<T> v)
{
	os << "{";
	bool first = true;
	for(const auto& elem : v)
		{
			if(!first)
			{
				os << ", "; 
			}
			
			first = false;
			os << elem;
		}
	os << "}";
	return os;
}
//display array
//template <class T, class N>
//std::ostream& operator<< (std::ostream& os, const std::array<T,N> a)
//{
	//os << "{";
	//bool first = true;
	//for(const auto& elem : a)
		//{
			//if(!first)
			//{
				//os << ", "; 
			//}
			
			//first = false;
			//os << elem;
		//}
	//os << "}";
//	return os;
	
//}

//display massive (unsafed)
template <class T>
std::ostream& operator<<(std::ostream& os, const float m[15])
{
	int32_t N = 15;
	os << "{";
	bool first = true;
	for(size_t i=0; i<N; ++i)
		{
			if(!first)
			{
				os << ", "; 
			}
			
			first = false;
			os << m[i];
		}
	os << "}";
	return os;
	
}

//display set
template <class T>
std::ostream& operator<< (std::ostream& os, const std::set<T>& s) {
  os << "{";
  bool first = true;
  for (const auto& x : s) {
    if (!first) {
      os << ", ";
    }
    first = false;
    os << x;
  }
  return os << "}";
}

//display map
template <class K, class V>
std::ostream& operator << (std::ostream& os, const std::map<K, V>& m) {
  os << "{";
  bool first = true;
  for (const auto& kv : m) {
    if (!first) {
      os << ", ";
    }
    first = false;
    os << kv.first << ": " << kv.second;
  }
  return os << "}";
}

template<class T, class U>
void AssertEqual(const T& t, const U& u,
    const std::string& hint)
{
  if (t != u) {
    std::ostringstream os;
    os << "Assertion failed: " << t << " != " << u
       << " hint: " << hint;
    throw std::runtime_error(os.str());
  }
}