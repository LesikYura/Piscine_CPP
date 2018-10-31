
#include "serialize.hpp"

int main(void)
{
	srand(time(NULL));
	void *buff = serialize();
	Data *raw = deserialize(buff);
	std::cout << raw->s1
			  << raw->n
			  << raw->s2
			  << std::endl;
	return 0;
}
