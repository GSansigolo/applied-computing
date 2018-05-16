    #ifndef __stack_hpp__
    #define __stack_hpp__
     
    #include <algorithm>
    #include <iostream>
     
     
    template<class T>
    class Stack
    {
     
    public:
     
      Stack();
     
      ~Stack();
     
      void push(T elem);
     
      void pop();
     
      T top() const;
     
      bool empty() const;
     
      int size() const;
     
    private:
     
      T *elements_;
      int top_;
      int capacity_;
     
    };
     
    template<class T>
    Stack<T>::Stack()
      {
        std::cout << "No construtor da Pilha" << std::endl;
        top_ = 0;
        capacity_ = 2;
        elements_ = new T[capacity_];
      }
     
    template<class T>
      Stack<T>::~Stack()
      {
        std::cout << "No destrutor da Pilha" << std::endl;
        delete [] elements_;
      }
     
    template<class T>
      void Stack<T>::push(T elem)
      {
        ++top_;
     
        if(top_ > capacity_)
        {
          int new_capacity = 2 * capacity_;
     
          T *tmp = new T[new_capacity];
     
          std::copy(elements_, elements_ + top_ - 1, tmp);
     
          delete [] elements_;
     
          elements_ = tmp;
     
          capacity_ = new_capacity;
        }
     
        elements_[top_ - 1] = elem;
      }
     
     template<class T>
      void Stack<T>::pop()
      {
        --top_;
      }
     
     template<class T>
      T Stack<T>::top() const
      {
        return elements_[top_ - 1];
      }
     
    template<class T>
      bool Stack<T>::empty() const
      {
        return top_ == 0;
      }
     
    template<class T>
      int Stack<T>::size() const
      {
        return top_;
      }
     
    #endif // __stack_hpp__


