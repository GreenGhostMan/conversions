#include <sstream>
#include <vector>
#include <string>
#include <iostream>

int main(void)
{
	int r_act_rpm, l_act_rpm, r_enc, l_enc, bat;

    std::string response = "123 456 789 10 41\r\n";
    
    std::istringstream iss(response);
    
    std::vector<std::string> tokens;
    std::string token;
    
    while( std::getline( iss, token, ' ') ) {
    	tokens.push_back(token);
    }

    for(const auto &t : tokens)
    {
    	std::cout << t << std::endl;

    }

    r_act_rpm = std::atoi(tokens[0].c_str());
    l_act_rpm = std::atoi(tokens[1].c_str());
    r_enc     = std::atoi(tokens[2].c_str());
    l_enc     = std::atoi(tokens[3].c_str());
    bat       = std::atoi(tokens[4].c_str());

    std::cout << r_act_rpm << " " << l_act_rpm << " " << r_enc << " " << l_enc << " " << bat << std::endl;

	return 0;
}


