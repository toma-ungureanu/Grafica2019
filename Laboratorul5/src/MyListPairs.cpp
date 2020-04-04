#include "../include/MyListPairs.h"

MyListPairs::MyListPairs()
{
    m_pairs = 0;
	std::cout << "List of pairs created." << std::endl;
}

MyListPairs::~MyListPairs()
{
	std::cout << "List of pairs destroyed." << std::endl;
}

void MyListPairs::add_element(int index, element_type my_pair)
{
	this->m_container.emplace_back(index, my_pair);
	m_pairs++;
}

int MyListPairs::get_pairs()
{
	return m_pairs;
}

void MyListPairs::display_elements()
{
	auto k = 0;
    for (auto& it : this->m_container)
    {
        std::cout << "*it " << k << " = " << it.first << " - " << it.second.first << " : " << it.second.second << std::endl;
        ++k;
    }
    std::cout << "First element in container: " << this->m_container.front().first << " - " << this->m_container.front().second.first << " : " << this->m_container.front().second.second << std::endl << std::endl;
}

std::list<std::pair<int,int>> MyListPairs::get_element_type_list()
{
	std::list<std::pair<int,int>> temp = {};
	auto k = 0;
    for (auto& it : this->m_container)
    {
		temp.push_back((std::make_pair(it.second.first, it.second.second)));
        ++k;
    }
	return temp;
}

std::vector<float> MyListPairs::get_x_points()
{
    std::vector<float> temp_array(get_pairs());

	auto k = 0;
    for (auto& it : this->m_container)
    {
        temp_array[k] = it.second.first;
        k++;
    }
   
   return temp_array;
}


std::vector<float> MyListPairs::get_y_points()
{
    std::vector<float> temp_array(get_pairs());

	auto k = 0;
    for (auto& it : this->m_container)
    {
        temp_array[k] = it.second.second;
        k++;
    }
   
   return temp_array;
}
