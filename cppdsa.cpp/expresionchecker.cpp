#include<iostream>
#include<string>

bool isBalanced(std::string expression) {
    int x = 0;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            x++;
        } else if (expression[i] == ')') {
            x--;
            if (x < 0) {
                return false;
            }
        }
    }

    return x == 0;
}

int main() {
    std::string expression;
    std::cout << "\nEnter an expression: ";
    std::cin >> expression;

    if (isBalanced(expression)) {
        std::cout << "Expression is balanced";
    } else {
        std::cout << "Expression is unbalanced";
    }

    return 0;
}