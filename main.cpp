#include "CompresionSinPerdidas-LZW.cpp"
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <map>


int main() {
    std::vector<int> compressed;
    compress("TOBEORNOTTOBEORTOBEORNOT", std::back_inserter(compressed));
    copy(compressed.begin(), compressed.end(), std::ostream_iterator<int>(std::cout, ", "));
    std::cout << std::endl;
    std::string decompressed = decompress(compressed.begin(), compressed.end());
    std::cout << decompressed << std::endl;

    return 0;
}