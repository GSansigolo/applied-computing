    // C++ Standard Library
    #include <iostream>
     
    // Generic Stack
    #include "stack_gen.hpp"
     
    using namespace std;
     
    int main()
    {
      Stack<int> s1;
     
      cout << sizeof(s1) << endl;
     
      s1.push(9);
      s1.push(6);
      s1.push(7);
      s1.push(5);
     
      cout << s1.top() << endl;
     
      s1.pop();
     
      cout << s1.top() << endl;
     
      cout << s1.size() << endl;
     
      Stack<string> s2;
     
      s2.push("Gilberto");
      s2.push("Eduardo");
      s2.push("Cassia");
     
      cout << s2.top() << endl;
     
      s2.pop();
     
      cout << s2.top() << endl;
     
      cout << s2.size() << endl;
     
      return 0;
    }


