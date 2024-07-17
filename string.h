#ifndef __STRING_H__
#define __STRING_H__

namespace hs {
namespace util {

    class string {
        string(char ch);
        string(const char* sz);
        string(const string& str);
        ~string();

        size_t length() const;
        void assign(char ch);
        void assign(const char* sz);
        void assign(const string& str);
        void reserve(size_t capacity);
        size_t capacity() const;
        char at(int index);
        void insert(int offset, char ch);
        void insert(int offset, const char* sz);
        void insert(int offset, const string& str);

        // erase
        // find
        // compare

        // kmp, boyer - moore
    };

}// namespace util
}// namespace hs
#endif