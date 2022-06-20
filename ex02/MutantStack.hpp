#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack<T> const &src) : std::stack<T>(src) {};
		virtual ~MutantStack() {};

		MutantStack &operator=(MutantStack const &rhs) {
			std::stack<T>::operator=(rhs);
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return std::stack<T>::c.begin(); };
		iterator end() { return std::stack<T>::c.end(); };

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator begin() const { return std::stack<T>::c.begin(); };
		const_iterator end() const { return std::stack<T>::c.end(); };

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); };
		reverse_iterator rend() { return std::stack<T>::c.rend(); };

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const { return std::stack<T>::c.rbegin(); };
		const_reverse_iterator rend() const { return std::stack<T>::c.rend(); };
};

#endif
