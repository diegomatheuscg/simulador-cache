#include <iostream>
#include <cstdint>
#include <list>
#include <vector>
#include <my-lib/bit.h>

using BitSet = Mylib::BitSet<32>;

int main(int argc, char **argv)
{

	int quantidade_niveis;

	std::list<Memory *> mem_list;
	std::vector<std::list<Linha>> set_para_cache;

	Cache *cache1 = new Cache(1, "L1", 4, 2, set_para_cache);
	mem_list.push_back(&cache1);
	cache1->print_info();

	// for(int i = 0; i < quantidade_niveis; i++){
	// 	if(i < quantidade_niveis - 1){
	// 		Memory cache = new Cache();
	// 	}else{
	// 		Memory ram = new Ram();
	// 	}
	// }
	return 0;
}