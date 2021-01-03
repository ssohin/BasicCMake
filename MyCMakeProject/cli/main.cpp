#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

// TODO: Add more funcitonality for demonstration of external libraries
int main(int argc, char* argv[])
{
    int a = 5;
    std::cout << a << std::endl;

    // try
    // {
    //     desc.add_options()
    //     ("help", "produce help message")
    //     ("add, +", po::value<std::string>(&boundary_file)->required(), "Addition operator")
    //     ;
    //     po::store(po::parse_command_line(argc, argv, desc), vm);
    //     po::notify(vm);

    //     if (vm.count("help"))
    //     {
    //         std::cout << desc << std::endl;
    //         return 0;
    //     }
    // }
    // catch (const po::required_option& e)
    // {
    //     if (vm.count("help"))
    //     {
    //         std::cout << desc << std::endl;
    //         return 0;
    //     }
    //     throw e;
    // }
    return 0;
}
