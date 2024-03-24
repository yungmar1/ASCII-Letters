#include <iostream>
#include <map>
#include <string>
#include <algorithm>

class Letters {
public:
    Letters() {};
    std::map<int, std::string> a_letter = {
        {1, " AAA  "},
        {2, "A   A "},
        {3, "A   A "},
        {4, "AAAAA "},
        {5, "A   A "},
        {6, "A   A "},
        {7, "A   A "} };

    std::map<int, std::string> b_letter = {
        {1, "BBBB  "},
        {2, "B   B "},
        {3, "B   B "},
        {4, "BBBB  "},
        {5, "B   B "},
        {6, "B   B "},
        {7, "BBBB  "} };

    std::map<int, std::string> c_letter = {
        {1, " CCC  "},
        {2, "C   C "},
        {3, "C     "},
        {4, "C     "},
        {5, "C     "},
        {6, "C   C "},
        {7, " CCC  "} };

    std::map<int, std::string> d_letter = {
       {1, "DDDD  "},
       {2, "D   D "},
       {3, "D   D "},
       {4, "D   D "},
       {5, "D   D "},
       {6, "D   D "},
       {7, "DDDD  "} };

    std::map<int, std::string> e_letter = {
        {1, "EEEEE "},
        {2, "E     "},
        {3, "E     "},
        {4, "EEEEE "},
        {5, "E     "},
        {6, "E     "},
        {7, "EEEEE "} };

    std::map<int, std::string> f_letter = {
        {1, "FFFFF "},
        {2, "F     "},
        {3, "F     "},
        {4, "FFFFF "},
        {5, "F     "},
        {6, "F     "},
        {7, "F     "} };

    std::map<int, std::string> g_letter = {
        {1, " GGG  "},
        {2, "G   G "},
        {3, "G     "},
        {4, "G GGG "},
        {5, "G   G "},
        {6, "G   G "},
        {7, " GGG  "} };

    std::map<int, std::string> h_letter = {
        {1, "H   H "},
        {2, "H   H "},
        {3, "H   H "},
        {4, "HHHHH "},
        {5, "H   H "},
        {6, "H   H "},
        {7, "H   H "} };

    std::map<int, std::string> i_letter = {
        {1, "IIIII "},
        {2, "  I   "},
        {3, "  I   "},
        {4, "  I   "},
        {5, "  I   "},
        {6, "  I   "},
        {7, "IIIII "} };

    std::map<int, std::string> j_letter = {
        {1, "JJJJJ "},
        {2, "    J "},
        {3, "    J "},
        {4, "    J "},
        {5, "    J "},
        {6, "    J "},
        {7, "JJJJ  "} };

    std::map<int, std::string> k_letter = {
        {1, "K   K "},
        {2, "K  K  "},
        {3, "K K   "},
        {4, "KK    "},
        {5, "K K   "},
        {6, "K  K  "},
        {7, "K   K "} };

    std::map<int, std::string> l_letter = {
        {1, "L     "},
        {2, "L     "},
        {3, "L     "},
        {4, "L     "},
        {5, "L     "},
        {6, "L     "},
        {7, "LLLLL "} };

    std::map<int, std::string> m_letter = {
        {1, "M   M "},
        {2, "MM MM "},
        {3, "M M M "},
        {4, "M   M "},
        {5, "M   M "},
        {6, "M   M "},
        {7, "M   M "} };

    std::map<int, std::string> n_letter = {
        {1, "N   N "},
        {2, "NN  N "},
        {3, "N   N "},
        {4, "N N N "},
        {5, "N   N "},
        {6, "N  NN "},
        {7, "N   N "} };

    std::map<int, std::string> o_letter = {
        {1, " OOO  "},
        {2, "O   O "},
        {3, "O   O "},
        {4, "O   O "},
        {5, "O   O "},
        {6, "O   O "},
        {7, " OOO  "} };

    std::map<int, std::string> p_letter = {
        {1, "PPPP  "},
        {2, "P   P "},
        {3, "P   P "},
        {4, "PPPP  "},
        {5, "P     "},
        {6, "P     "},
        {7, "P     "} };

    std::map<int, std::string> q_letter = {
        {1, " QQQ  "},
        {2, "Q   Q "},
        {3, "Q   Q "},
        {4, "Q   Q "},
        {5, "Q Q Q "},
        {6, "Q  QQ "},
        {7, " QQQQ "} };

    std::map<int, std::string> r_letter = {
        {1, "RCCC  "},
        {2, "R   R "},
        {3, "R   R "},
        {4, "RRRR  "},
        {5, "R R   "},
        {6, "R  R  "},
        {7, "R   R "} };

    std::map<int, std::string> s_letter = {
        {1, " SSS  "},
        {2, "S   S "},
        {3, "S     "},
        {4, " SSS  "},
        {5, "    S "},
        {6, "S   S "},
        {7, " SSS  "} };

    std::map<int, std::string> t_letter = {
        {1, "TTTTT "},
        {2, "  T   "},
        {3, "  T   "},
        {4, "  T   "},
        {5, "  T   "},
        {6, "  T   "},
        {7, "  T   "} };

    std::map<int, std::string> u_letter = {
        {1, "U   U "},
        {2, "U   U "},
        {3, "U   U "},
        {4, "U   U "},
        {5, "U   U "},
        {6, "U   U "},
        {7, " UUU  "} };

    std::map<int, std::string> v_letter = {
        {1, "V   V "},
        {2, "V   V "},
        {3, "V   V "},
        {4, "V   V "},
        {5, "V   V "},
        {6, " V V  "},
        {7, "  V   "} };

    std::map<int, std::string> w_letter = {
        {1, "W   W "},
        {2, "W   W "},
        {3, "W   W "},
        {4, "W W W "},
        {5, "W W W "},
        {6, "W W W "},
        {7, " W W  "} };

    std::map<int, std::string> x_letter = {
        {1, "X   X "},
        {2, "X   X "},
        {3, " X X  "},
        {4, "  X   "},
        {5, " X X  "},
        {6, "X   X "},
        {7, "X   X "} };

    std::map<int, std::string> y_letter = {
        {1, "Y   Y "},
        {2, "Y   Y "},
        {3, " Y Y  "},
        {4, "  Y   "},
        {5, "  Y   "},
        {6, "  Y   "},
        {7, "  Y   "} };

    std::map<int, std::string> z_letter = {
        {1, "ZZZZZ "},
        {2, "    Z "},
        {3, "   Z  "},
        {4, "  Z   "},
        {5, " Z    "},
        {6, "Z     "},
        {7, "ZZZZZ "} };

    std::map<int, std::string> whitespace = {
        {1, "      "},
        {2, "      "},
        {3, "      "},
        {4, "      "},
        {5, "      "},
        {6, "      "},
        {7, "      "} };


    std::string letter_tranform(const std::string& input) {
        std::string tmp = input;
        std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);
        std::string res;
        char prev = '\0';
        for (int i = 1; i <= 7; i++) {
            for (char ch : tmp) {
                if ((prev = ch) && (prev == ' ')) {
                    continue;
                }
                else {
                    switch (static_cast<int>(ch)) {
                    case 32: res += whitespace[i]; break;
                    case 65: res += a_letter[i]; break;
                    case 66: res += b_letter[i]; break;
                    case 67: res += c_letter[i]; break;
                    case 68: res += d_letter[i]; break;
                    case 69: res += e_letter[i]; break;
                    case 70: res += f_letter[i]; break;
                    case 71: res += g_letter[i]; break;
                    case 72: res += h_letter[i]; break;
                    case 73: res += i_letter[i]; break;
                    case 74: res += j_letter[i]; break;
                    case 75: res += k_letter[i]; break;
                    case 76: res += l_letter[i]; break;
                    case 77: res += m_letter[i]; break;
                    case 78: res += n_letter[i]; break;
                    case 79: res += o_letter[i]; break;
                    case 80: res += p_letter[i]; break;
                    case 81: res += q_letter[i]; break;
                    case 82: res += r_letter[i]; break;
                    case 83: res += s_letter[i]; break;
                    case 84: res += t_letter[i]; break;
                    case 85: res += u_letter[i]; break;
                    case 86: res += v_letter[i]; break;
                    case 87: res += w_letter[i]; break;
                    case 88: res += x_letter[i]; break;
                    case 89: res += y_letter[i]; break;
                    case 90: res += z_letter[i]; break;
                    }
                }
                
                prev = ch;
            }
            res += "\n";
        }
        return res;
        }
};


int main() {
    std::string input;
    getline(std::cin, input);
    Letters l;

    std::string test = l.letter_tranform(input);
    for (int i = 0; i < test.length(); i++) {
        std::cout << test[i];
    }
}