class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded;
        for(const auto& str: strs){
            encoded += std::to_string(str.size()) + "#" + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            string str_length;

            while (s[i] != '#') {
                str_length.push_back(s[i]);
                i++;
            }

            int length_int = std::stoi(str_length);

            i++; // Increase one more due to #

            string val = s.substr(i, length_int);
            result.push_back(val);

            i += length_int;
        }

        return result;
    }
};
