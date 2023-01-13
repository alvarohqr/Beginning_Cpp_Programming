#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                         // No-args constructor
    Mystring(const char *s);            // Overloaded constructor
    Mystring(const Mystring &source);   // Copy constructor
    Mystring( Mystring &&source);       // Move constructor
    ~Mystring();                        // Destructor

    Mystring &operator=(const Mystring &rhs);           // Copy assignment
    Mystring &operator=(Mystring &&rhs);                // Move assignment
    /*
    Here is a list of some of the operators that you can overload for this class:

    -       - unary minus. Returns the lowercase version of the object's string
               -s1
    ==    - returns true if the two strings are equal
               (s1 == s2)
    !=     - returns true if the two strings are not equal
               (s1 != s2)
    <      - returns true if the lhs string is lexically less than the rhs string
               (s1 < s2)
    >      - returns true if the lhs string is lexically greater than the rhs string
              (s1 > s2)
    +       - concatenation. Returns an object that concatenates the lhs and rhs
               s1 + s2
    +=    - concatenate the rhs string to the lhs string and store the result in lhs object
              s1 += s2;      equivalent to s1 = s1 + s2;
    *        - repeat -  results in a string that is copied n times
              s2 * 3;          ex). s2 = "abc";
                                       s1 = s2 * 3;
                                       s1 will result in "abcabcabc"
    *=      - repeat the string on the lhs n times and store the result back in the lhs object
                s1 = "abc";
                s1 *= 4;        s1 = s1 will result in "abcabcabcabc"
    */

    Mystring operator-() const;                        // Returns the lowercase version of the object's string
    bool operator==(const Mystring &rhs) const;        // Returns true if the two strings are equal
    bool operator!=(const Mystring &rhs) const;        // Returns true if the two strings are not equal
    bool operator<(const Mystring &rhs) const;         // Returns true if the lhs string is lexically less than the rhs string
    bool operator>(const Mystring &rhs) const;         // Returns true if the lhs string is lexically greater than the rhs string
    Mystring operator+(const Mystring &rhs) const;     // Returns an object that concatenates the lhs and rhs
    Mystring &operator+=(const Mystring &rhs);    // Concatenate the rhs string to the lhs string and store the result in lhs object
    Mystring operator*(int n) const;                   // repeat -  results in a string that is copied n times
    Mystring &operator*=(int n);                        // repeat the string on the lhs n times and store the result back in the lhs object




    void display() const;

    int get_length() const;     // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
