#include <iostream>
#include <string>
#include <regex>

using std::string;

class solution {
  public:
    bool isSubsequence(const string & s, const string & t) {
        string expr;
        for (auto ch : s) {
            expr.append("[a-z]*");
            expr.append(1, ch);
        }
        expr.append("[a-z]*");
        
        std::regex ex(expr);
        return std::regex_match(t, ex);
    }
};

int main() {
    // string s{"abc"}, t{"ahbgdc"};
    string s{"gd"}, t{"ahbgdc"};
    
    solution soln;
    std::cout << std::boolalpha
              << soln.isSubsequence(s,t) << std::endl;
}
