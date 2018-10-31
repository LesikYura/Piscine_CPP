
#ifndef TYPESTRING_H
# define TYPESTRING_H

#include <iostream>
#include <string>
#include <exception>
#include <iomanip>
#include "errno.h"

class TypeString
{
  private:
	std::string _data;

  public:
	class NoConversionException : public std::exception
	{
	  public:
		NoConversionException(void);
		~NoConversionException(void) throw();
		char const *what(void) const throw();
	};

	TypeString(std::string const &data);
	~TypeString(void);
	TypeString(TypeString const &src);
	TypeString &operator=(TypeString const &rhs);

	operator std::string const &(void)const;
	operator char(void) const;
	operator int(void) const;
	operator float(void) const;
	operator double(void) const;
};

std::ostream &operator<<(std::ostream &os, TypeString const &typestring);

#endif
